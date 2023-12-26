// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Application/Application_wrapper.h>

//===============================================================================
void register_Application()
{
    // Expose class
    REGISTER_CLASS_HEADER_NONCONSTRUCT(Gamestone::Application, "Application")
    REGISTER_CLASS_METHOD(&Gamestone::Application::MainLoop, "MainLoop")
    REGISTER_CLASS_METHOD(&Gamestone::Application::StopGame, "StopGame")
    REGISTER_CLASS_METHOD(&Gamestone::Application::SetStartingState, "SetStartingState")
    REGISTER_CLASS_METHOD(&Gamestone::Application::ChangeState, "ChangeState")
    REGISTER_CLASS_METHOD(&Gamestone::Application::GetTickCount, "GetTickCount")
    REGISTER_CLASS_METHOD(&Gamestone::Application::GetFramerate, "GetFramerate")
    REGISTER_CLASS_METHOD(&Gamestone::Application::GetDeltatime, "GetDeltatime")
    REGISTER_CLASS_METHOD(&Gamestone::Application::ClearActions, "ClearActions")
    REGISTER_CLASS_METHOD(&Gamestone::Application::AddAction, "AddAction")
    REGISTER_CLASS_METHOD(&Gamestone::Application::RemoveAction, "RemoveAction")
    REGISTER_CLASS_METHOD_RETURNREF(&Gamestone::Application::GetAction, "GetAction")
    REGISTER_CLASS_METHOD(&Gamestone::Application::IsActionActive, "IsActionActive")
    REGISTER_CLASS_METHOD(&Gamestone::Application::ConnectActionCallback, "ConnectActionCallback")
    REGISTER_CLASS_METHOD(&Gamestone::Application::ClearActionCallbacks, "ClearActionCallbacks")
    REGISTER_CLASS_METHOD(&Gamestone::Application::ClearAllActionCallbacks, "ClearAllActionCallbacks")
    REGISTER_CLASS_METHOD(&Gamestone::Application::DoesContextExist, "DoesContextExist")
    REGISTER_CLASS_METHOD(&Gamestone::Application::CreateContext, "CreateContext")
    REGISTER_CLASS_METHOD(&Gamestone::Application::ReleaseContext, "ReleaseContext")
    //REGISTER_CLASS_METHOD(&Gamestone::Application::GetContext, "GetContext")
    REGISTER_CLASS_METHOD(&Gamestone::Application::SetActiveContext, "SetActiveContext")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Application::GetActiveContext, "GetActiveContext")
    REGISTER_CLASS_METHOD(&Gamestone::Application::GetContextCount, "GetContextCount")
    REGISTER_CLASS_METHOD_RETURNREF(&Gamestone::Application::GetAppData, "GetAppData")
    REGISTER_CLASS_METHOD(&Gamestone::Application::SetAppData, "SetAppData")
    REGISTER_CLASS_METHOD_RETURNSINGLE((&Gamestone::Singleton<Gamestone::Application>::GetInstance), "GetInstance")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================
