////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2008 Laurent Gomila (laurent.gom@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Config.hpp>

////////////////////////////////////////////////////////////
// Backends
////////////////////////////////////////////////////////////
#if defined(SFML_SYSTEM_MACOS)
  
    #include "../orig/src/SFML/Window/OSX/SFApplication.m"
    #include "../orig/src/SFML/Window/OSX/SFApplicationDelegate.m"
    #include "../orig/src/SFML/Window/OSX/SFSilentResponder.m"
    #include "../orig/src/SFML/Window/OSX/SFWindow.m"
    #include "../orig/src/SFML/Window/OSX/HIDInputManager.mm"
    #include "../orig/src/SFML/Window/OSX/InputImpl.mm"
    #include "../orig/src/SFML/Window/OSX/SFContext.mm"
    #include "../orig/src/SFML/Window/OSX/SFOpenGLView.mm"
    #include "../orig/src/SFML/Window/OSX/SFKeyboardModifiersHelper.mm"
    #include "../orig/src/SFML/Window/OSX/SFViewController.mm"
    #include "../orig/src/SFML/Window/OSX/SFWindowController.mm"
    #include "../orig/src/SFML/Window/OSX/WindowImplCocoa.mm"
    #include "../orig/src/SFML/Window/OSX/cpp_objc_conversion.mm"
    #include "../orig/src/SFML/Window/OSX/HIDJoystickManager.cpp"
    #include "../orig/src/SFML/Window/OSX/JoystickImpl.cpp"
    #include "../orig/src/SFML/Window/OSX/SensorImpl.cpp"
    #include "../orig/src/SFML/Window/OSX/VideoModeImpl.cpp"
    #include "../orig/src/SFML/Window/OSX/cg_sf_conversion.cpp"
    
#elif defined(SFML_SYSTEM_IOS)

    #include "../orig/src/SFML/Window/iOS/EaglContext.mm"
    #include "../orig/src/SFML/Window/iOS/InputImpl.mm"
    #include "../orig/src/SFML/Window/iOS/JoystickImpl.mm"
    #include "../orig/src/SFML/Window/iOS/SensorImpl.mm"
    #include "../orig/src/SFML/Window/iOS/SFAppDelegate.mm"
    #include "../orig/src/SFML/Window/iOS/SFMain.mm"
    #include "../orig/src/SFML/Window/iOS/SFView.mm"
    #include "../orig/src/SFML/Window/iOS/SFViewController.mm"
    #include "../orig/src/SFML/Window/iOS/VideoModeImpl.mm"
    #include "../orig/src/SFML/Window/iOS/WindowImplUIKit.mm"

#endif
