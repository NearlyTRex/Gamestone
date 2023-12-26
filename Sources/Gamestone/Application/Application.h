// Title: Application

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef APPLICATION_H
#define APPLICATION_H

// Local includes
#include <Gamestone/Application/ApplicationData.h>
#include <Gamestone/Utility/Singleton.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Application
    // Application class
    class Application:
        public Singleton<Application>,
        public Runnable
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: Application
        // Default constructor
        Application();
        
        // Constructor: Application
        // Creates application from application data
        //
        // Parameters:
        // data - Application data
        Application(const ApplicationData& data);
        
    //===========================================================
    // From Gamestone::Runnable
    //===========================================================
    public:
        
        // Method: SetRunning
        // Sets running status
        //
        // Parameters:
        // r - Running status
        virtual void SetRunning(Bool running);
        
        // Method: IsRunning
        // Gets running status
        //
        // Returns:
        // Running status
        virtual Bool IsRunning() const;
        
    //===========================================================
    // Main Loop methods
    //===========================================================
    public:
        
        // Method: MainLoop
        // The main loop of the application, it keeps running until StopGame is called.
        // Make sure to set up the first state before calling this method!
        //
        // Parameters:
        // appdata - Application data
        void MainLoop();
        
        // Method: StopGame
        // This will interrupt the game loop that is running, ending the main loop
        void StopGame();
        
    //===========================================================
    // Gamestate methods
    //===========================================================
    public:
        
        // Method: SetStartingState
        // Sets the starting game state, calls new state's initialize
        //
        // Parameters:
        // state  - Starting state
        void SetStartingState(PythonObject state);
        
        // Method: ChangeState
        // Change the running game state, making sure to cleanup the old one first
        //
        // Parameters:
        // state  - Next state
        void ChangeState(PythonObject state);
        
    //===========================================================
    // Window methods
    //===========================================================
    public:
        
        // Method: GetTickCount
        // Gets the amount of ticks since application start
        //
        // Returns:
        // Integer for ticks
        UInt GetTickCount();
        
        // Method: GetFramerate
        // Gets the framerate
        //
        // Returns:
        // Integer for framerate
        UInt GetFramerate();
        
        // Method: GetDeltatime
        // Gets the deltatime
        //
        // Returns:
        // Float for delta time
        Float GetDeltatime();
        
    //===========================================================
    // Action methods
    //===========================================================
    public:
        
        // Method: ClearActions
        // Clears out all actions
        void ClearActions();
        
        // Method: AddAction
        // Adds action
        //
        // Parameters:
        // id - Action identifier
        // action - Action object
        void AddAction(const ActionId& id, Action& action);
        
        // Method: RemoveAction
        // Removes action
        //
        // Parameters:
        // id - Action identifier
        void RemoveAction(const ActionId& id);
        
        // Method: GetAction
        // Gets action
        //
        // Parameters:
        // id - Action identifier
        //
        // Returns:
        // Associated action object
        Action& GetAction(const ActionId& id);
        
        // Method: IsActionActive
        // Determines if action is currently active
        //
        // Parameters:
        // id - Action identifier
        //
        // Returns:
        // Whether or not action is active
        Bool IsActionActive(const ActionId& id);
        
        // Method: ConnectActionCallback
        // Connects a callback to a given action
        // It is possible to assign multiple callbacks to the same action id
        //
        // Parameters:
        // id - Action identifier
        // callback - Callback object
        //
        // Returns:
        // Whether connection was successfully made
        Bool ConnectActionCallback(const ActionId& id, PythonObject callback);
        
        // Method: ClearActionCallbacks
        // Clears all action callbacks with the given id
        //
        // Parameters:
        // id - Action identifier
        void ClearActionCallbacks(const ActionId& id);
        
        // Method: ClearAllActionCallbacks
        // Clears all action callbacks
        void ClearAllActionCallbacks();
        
    //===========================================================
    // Rocket methods
    //===========================================================
    public:
        
        // Method: DoesContextExist
        // Determines whether context exists
        //
        // Parameters:
        // name - Context name
        //
        // Returns:
        // Whether context already exists
        Bool DoesContextExist(const String& name) const;
        
        // Method: CreateContext
        // Creates new context for rendering
        //
        // Parameters:
        // name - Context name
        void CreateContext(const String& name);
        
        // Method: ReleaseContext
        // Releases the given context
        //
        // Parameters:
        // name - Context name
        void ReleaseContext(const String& name);
        
        // Method: GetContext
        // Gets the given context
        //
        // Parameters:
        // name - Context name
        //
        // Returns:
        // Pointer to requested context
        RocketContext* GetContext(const String& name);
        
        // Method: SetActiveContext
        // Sets the active context
        //
        // Parameters:
        // name - Context name
        void SetActiveContext(const String& name);
        
        // Method: GetActiveContext
        // Gets the active context
        //
        // Returns:
        // Name of active context
        const String& GetActiveContext() const;
        
        // Method: GetContextCount
        // Gets count of available contexts
        //
        // Returns:
        // Integer count of contexts
        Int GetContextCount() const;
        
    //===========================================================
    // ApplicationData methods
    //===========================================================
    public:
        
        // Method: GetAppData
        // Gets application data
        //
        // Returns:
        // Const reference to application data
        ApplicationData& GetAppData();
        
        // Method: SetAppData
        // Sets application data
        //
        // Parameters:
        // data - New application data
        void SetAppData(const ApplicationData& data);
        
    //===========================================================
    // Internal input methods
    //===========================================================
    private:
        
        // Method: CheckInput
        // Checks input and processes events
        void CheckInput();
        
    //===========================================================
    // Internal state methods
    //===========================================================
    private:
        
        // Method: StateInitialize
        // Initialize the game state
        void StateInitialize();
        
        // Method: StateFinalize
        // Finalize the game state
        void StateFinalize();
        
        // Method: StateUpdate
        // Update the game state
        void StateUpdate();
        
        // Method: StateRender
        // Render the game state
        void StateRender();
        
    //===========================================================
    // Internal window methods
    //===========================================================
    private:
        
        // Method: CalculateFPS
        // Calculate the frames per second
        void CalculateFPS();
        
        // Method: CalculateDeltaTime
        // Calculate the delta time
        void CalculateDeltaTime();
        
    //===========================================================
    // Internal data
    //===========================================================
    private:
        
        // Variable: mAppData
        // Application data
        ApplicationData mAppData;
    };
};

#endif
