// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Application/Application.h>
#include <Gamestone/Utility/Exception.h>
#include <Gamestone/Module/Module.h>

//===============================================================================
Gamestone::Application::Application():
    mAppData()
{
}
//===============================================================================
Gamestone::Application::Application(const ApplicationData& data):
    mAppData(data)
{
}
//===============================================================================
void Gamestone::Application::SetRunning(Bool running)
{
    // Set running status
    mAppData.isRunning = running;
}
//===============================================================================
Gamestone::Bool Gamestone::Application::IsRunning() const
{
    // Get running status
    return mAppData.isRunning;
}
//===============================================================================
void Gamestone::Application::MainLoop()
{
    // Ignore if already running
    if (IsRunning()) { return; }
    
    // Create the window
    mAppData.windowPtr.reset(new RenderWindow(VideoMode(mAppData.windowWidth, mAppData.windowHeight), mAppData.windowTitle));
    ASSERT_ERROR(mAppData.windowPtr->isOpen());
    
    // Setup initial application info
    mAppData.windowPtr->setVerticalSyncEnabled(mAppData.useVsync);
    mAppData.windowPtr->setKeyRepeatEnabled(mAppData.useKeyRepeat);
    mAppData.windowPtr->setMouseCursorVisible(mAppData.useMouseCursor);
    mAppData.windowPtr->setFramerateLimit(mAppData.frameRateLimit);
    mAppData.windowPtr->setView(mAppData.windowPtr->getDefaultView());
    
    // Setup rocket integration
    mAppData.rocketRendererPtr.reset(new RocketSFMLRenderer());
    mAppData.rocketShellPtr.reset(new ShellFileInterface(getMediaDir().c_str()));
    mAppData.rocketSystemPtr.reset(new RocketSFMLSystemInterface());
    mAppData.rocketRendererPtr->SetWindow(mAppData.windowPtr.get());
    SetRocketRenderer(mAppData.rocketRendererPtr.get());
    SetRocketShell(mAppData.rocketShellPtr.get());
    SetRocketSystem(mAppData.rocketSystemPtr.get());
    ASSERT_ERROR(InitializeRocket());
    
    // Create actions
    mAppData.actionMap.reset(new ActionMap());
    mAppData.actionMapSystem.reset(new ActionMapSystem());
    
    // Initialize state
    StateInitialize();
    
    // Start main loop
    SetRunning(true);
    while (IsRunning())
    {
        // Check input
        CheckInput();
        
        // Update game state
        StateUpdate();
        StateRender();
        
        // Swap buffers and clear screen
        mAppData.windowPtr->resetGLStates();
        mAppData.windowPtr->display();
        mAppData.windowPtr->clear(mAppData.windowColor);
        
        // Calculate frames per second and deltatime
        CalculateFPS();
        CalculateDeltaTime();
    }
    
    // Finalize state
    StateFinalize();
    
    // Swap buffers and close screen
    mAppData.windowPtr->display();
    mAppData.windowPtr->close();
}
//===============================================================================
void Gamestone::Application::StopGame()
{
    // Update status
    SetRunning(false);
}
//===============================================================================
void Gamestone::Application::SetStartingState(PythonObject state)
{
    // Update state
    mAppData.gameState = state;
}
//===============================================================================
void Gamestone::Application::ChangeState(PythonObject state)
{
    // Call finalize
    mAppData.gameState.attr("finalize")();
    
    // Update state
    mAppData.gameState = state;
    
    // Call initialize
    mAppData.gameState.attr("initialize")();
}
//===============================================================================
Gamestone::UInt Gamestone::Application::GetTickCount()
{
    // Get tick count
    return mAppData.frameClock.getElapsedTime().asMilliseconds();
}
//===============================================================================
Gamestone::UInt Gamestone::Application::GetFramerate()
{
    // Get framerate
    return mAppData.frameRate;
}
//===============================================================================
Gamestone::Float Gamestone::Application::GetDeltatime()
{
    // Get deltatime
    return mAppData.deltaTime;
}
//===============================================================================
void Gamestone::Application::ClearActions()
{
    // Clear all actions
    mAppData.actionMap->clearActions();
}
//===================================================================================
void Gamestone::Application::AddAction(const ActionId& id, Action& action)
{
    // Add an action
    (*mAppData.actionMap)[id] = action;
}
//===================================================================================
void Gamestone::Application::RemoveAction(const ActionId& id)
{
    // Remove an action
    mAppData.actionMap->removeAction(id);
}
//===================================================================================
Gamestone::Action& Gamestone::Application::GetAction(const ActionId& id)
{
    // Get an action
    return (*mAppData.actionMap)[id];
}
//===================================================================================
Gamestone::Bool Gamestone::Application::IsActionActive(const ActionId& id)
{
    // Check if an action is active
    return mAppData.actionMap->isActive(id);
}
//===============================================================================
Gamestone::Bool Gamestone::Application::ConnectActionCallback(const ActionId& id, PythonObject callback)
{
    // Connect callback to action id
    ActionConnection conn = mAppData.actionMapSystem->connect(id, ActionCallback(callback));
    return conn.isConnected();
}
//===============================================================================
void Gamestone::Application::ClearActionCallbacks(const ActionId& id)
{
    // Clear callbacks associated with the given id
    mAppData.actionMapSystem->clearConnections(id);
}
//===============================================================================
void Gamestone::Application::ClearAllActionCallbacks()
{
    // Clear all callbacks
    mAppData.actionMapSystem->clearAllConnections();
}
//===============================================================================
Gamestone::Bool Gamestone::Application::DoesContextExist(const String& name) const
{
    // Determine whether context exists
    return (mAppData.rocketContextPtrTable.find(name) != mAppData.rocketContextPtrTable.end());
}
//===============================================================================
void Gamestone::Application::CreateContext(const String& name)
{
    // Ignore if context already exists
    if (DoesContextExist(name)) { return; }
    
    // Create context
    RocketContext* context = CreateRocketContext(name.c_str(), RocketVector2i(mAppData.windowWidth, mAppData.windowHeight));
    mAppData.rocketContextPtrTable[name] = context;
    
    // Enable debugging
    if (mAppData.useDebug)
    {
        InitializeRocketDebugger(context);
    }
    
    // Set this one to active
    SetActiveContext(name);
}
//===============================================================================
void Gamestone::Application::ReleaseContext(const String& name)
{
    // Ignore if context does not exist
    if (!DoesContextExist(name)) { return; }
    
    // Release context
    mAppData.rocketContextPtrTable[name]->RemoveReference();
}
//===============================================================================
RocketContext* Gamestone::Application::GetContext(const String& name)
{
    // Context should already exist
    if (!DoesContextExist(name))
    {
        throw InvalidArgumentException("Context '" + name + "' does not exist");
    }
    
    // Get context
    return mAppData.rocketContextPtrTable[name];
}
//===============================================================================
void Gamestone::Application::SetActiveContext(const String& name)
{
    // Set active context name
    mAppData.activeRocketContext = name;
}
//===============================================================================
const Gamestone::String& Gamestone::Application::GetActiveContext() const
{
    // Get active context name
    return mAppData.activeRocketContext;
}
//===============================================================================
Gamestone::Int Gamestone::Application::GetContextCount() const
{
    // Get count of contexts
    return mAppData.rocketContextPtrTable.size();
}
//===============================================================================
Gamestone::ApplicationData& Gamestone::Application::GetAppData()
{
    // Get application data
    return mAppData;
}
//===============================================================================
void Gamestone::Application::SetAppData(const ApplicationData& data)
{
    // Set application data
    mAppData = data;
}
//===============================================================================
void Gamestone::Application::CheckInput()
{
    // Clear old events
    mAppData.actionMap->clearEvents();
    
    // Get rocket context
    RocketContext* context = NULL;
    if (GetContextCount() > 0)
    {
        context = GetContext(GetActiveContext());
    }
    
    // Poll new events
    while (mAppData.windowPtr->pollEvent(mAppData.windowEvent))
    {
        // Send off events to action map
        mAppData.actionMap->pushEvent(mAppData.windowEvent);
        
        // Skip if we have no valid context
        if (!context) { continue; }
        
        // Check event type
        switch (mAppData.windowEvent.type)
        {
            case EventEnum::Closed:
                break;
            case EventEnum::Resized:
                break;
            case EventEnum::LostFocus:
                break;
            case EventEnum::GainedFocus:
                break;
            case EventEnum::TextEntered:
                if (mAppData.windowEvent.text.unicode > 32) { context->ProcessTextInput(mAppData.windowEvent.text.unicode); }
                break;
            case EventEnum::KeyPressed:
                context->ProcessKeyDown(mAppData.rocketSystemPtr->TranslateKey(mAppData.windowEvent.key.code), mAppData.rocketSystemPtr->GetKeyModifiers());
                break;
            case EventEnum::KeyReleased:
                context->ProcessKeyUp(mAppData.rocketSystemPtr->TranslateKey(mAppData.windowEvent.key.code), mAppData.rocketSystemPtr->GetKeyModifiers());
                break;
            case EventEnum::MouseWheelMoved:
                context->ProcessMouseWheel(mAppData.windowEvent.mouseWheel.delta, mAppData.rocketSystemPtr->GetKeyModifiers());
                break;
            case EventEnum::MouseButtonPressed:
                context->ProcessMouseButtonDown(mAppData.windowEvent.mouseButton.button, mAppData.rocketSystemPtr->GetKeyModifiers());
                break;
            case EventEnum::MouseButtonReleased:
                context->ProcessMouseButtonUp(mAppData.windowEvent.mouseButton.button, mAppData.rocketSystemPtr->GetKeyModifiers());
                break;
            case EventEnum::MouseMoved:
                context->ProcessMouseMove(mAppData.windowEvent.mouseMove.x, mAppData.windowEvent.mouseMove.y, mAppData.rocketSystemPtr->GetKeyModifiers());
                break;
            case EventEnum::MouseEntered:
                break;
            case EventEnum::MouseLeft:
                break;
            case EventEnum::JoystickButtonPressed:
                break;
            case EventEnum::JoystickButtonReleased:
                break;
            case EventEnum::JoystickMoved:
                break;
            case EventEnum::JoystickConnected:
                break;
            case EventEnum::JoystickDisconnected:
                break;
            default:
                break;
        };
    }
    
    // Invoke callbacks
    mAppData.actionMap->invokeCallbacks(*mAppData.actionMapSystem, mAppData.windowPtr.get());
}
//===============================================================================
void Gamestone::Application::StateInitialize()
{
    // Call initialize
    mAppData.gameState.attr("initialize")();
}
//===============================================================================
void Gamestone::Application::StateFinalize()
{
    // Call finalize
    mAppData.gameState.attr("finalize")();
}
//===============================================================================
void Gamestone::Application::StateUpdate()
{
    // Call update
    mAppData.gameState.attr("update")();
}
//===============================================================================
void Gamestone::Application::StateRender()
{
    // Call render
    mAppData.gameState.attr("render")();
}
//===============================================================================
void Gamestone::Application::CalculateFPS()
{
    // Increase frame count
    mAppData.frameCount++;
    
    // Get the number of milliseconds since application start
    mAppData.currentFrameTime = GetTickCount();
    
    // Calculate time passed
    UInt timeInterval = mAppData.currentFrameTime - mAppData.previousFrameTime;
    
    // If more than a second has passed
    if (timeInterval > 1000)
    {
        // Calculate the number of frames per second
        mAppData.frameRate = static_cast<UInt>(mAppData.frameCount / (timeInterval / 1000.0f));
        
        // Update previous time
        mAppData.previousFrameTime = mAppData.currentFrameTime;
        
        // Reset frame count
        mAppData.frameCount = 0;
    }
}
//===============================================================================
void Gamestone::Application::CalculateDeltaTime()
{
    // Update delta time
    mAppData.deltaTime = mAppData.deltaClock.restart().asSeconds();
}
//===============================================================================
