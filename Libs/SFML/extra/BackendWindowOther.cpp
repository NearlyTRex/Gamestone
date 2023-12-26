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
#if defined(SFML_SYSTEM_WINDOWS)

    #include "../orig/src/SFML/Window/Win32/InputImpl.cpp"
    #include "../orig/src/SFML/Window/Win32/JoystickImpl.cpp"
    #include "../orig/src/SFML/Window/Win32/SensorImpl.cpp"
    #include "../orig/src/SFML/Window/Win32/VideoModeImpl.cpp"
    #include "../orig/src/SFML/Window/Win32/WglContext.cpp"
    #include "../orig/src/SFML/Window/Win32/WindowImplWin32.cpp"

#elif defined(SFML_SYSTEM_LINUX)

    #include "../orig/src/SFML/Window/Unix/Display.cpp"
    #include "../orig/src/SFML/Window/Unix/GlxContext.cpp"
    #include "../orig/src/SFML/Window/Unix/InputImpl.cpp"
    #include "../orig/src/SFML/Window/Unix/JoystickImpl.cpp"
    #include "../orig/src/SFML/Window/Unix/SensorImpl.cpp"
    #include "../orig/src/SFML/Window/Unix/VideoModeImpl.cpp"
    #include "../orig/src/SFML/Window/Unix/WindowImplX11.cpp"
    
#elif defined(SFML_SYSTEM_ANDROID)

    #include "../orig/src/SFML/Window/EGLCheck.cpp"
    #include "../orig/src/SFML/Window/EglContext.cpp"
    #include "../orig/src/SFML/Window/Android/InputImpl.cpp"
    #include "../orig/src/SFML/Window/Android/JoystickImpl.cpp"
    #include "../orig/src/SFML/Window/Android/SensorImpl.cpp"
    #include "../orig/src/SFML/Window/Android/VideoModeImpl.cpp"
    #include "../orig/src/SFML/Window/Android/WindowImplAndroid.cpp"

#endif

