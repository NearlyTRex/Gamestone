// Title: ApplicationData

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef APPLICATIONDATA_H
#define APPLICATIONDATA_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/SystemTypes.h>
#include <Gamestone/Types/WindowTypes.h>
#include <Gamestone/Types/UITypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/Array.h>
#include <Gamestone/Types/Table.h>
#include <Gamestone/Properties/Runnable.h>
#include <Gamestone/Properties/Valid.h>
#include <Gamestone/Utility/Actions.h>
#include <Gamestone/Utility/Camera.h>
#include <Gamestone/Utility/Color.h>
#include <Gamestone/Utility/Time.h>
#include <Gamestone/Utility/Wrapper.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: ApplicationData
    // Holder class for application info
    struct ApplicationData
    {
        // Constructor: ApplicationData
        // Default constructor
        ApplicationData();
        
        // Constructor: ApplicationData
        // Copy constructor
        ApplicationData(const ApplicationData& other);
        
        // Variable: previousFrameTime
        // Previous frame time in milliseconds
        UInt previousFrameTime;
        
        // Variable: currentFrameTime
        // Current frame time in milliseconds
        UInt currentFrameTime;
        
        // Variable: frameCount
        // Frame counter for framerate calculation
        UInt frameCount;
        
        // Variable: frameRate
        // Frame rate in frames per second
        UInt frameRate;
        
        // Variable: frameRateLimit
        // Frame rate limit
        UInt frameRateLimit;
        
        // Variable: deltaTime
        // Time between frames in seconds
        Float deltaTime;
        
        // Variable: deltaClock
        // Delta time clock
        Stopwatch deltaClock;
        
        // Variable: frameClock
        // Frame timer clock
        Stopwatch frameClock;
        
        // Variable: actionMap
        // Action map object
        SharedPtr<ActionMap> actionMap;
        
        // Variable: actionMapSystem
        // Action map system object
        SharedPtr<ActionMapSystem> actionMapSystem;
        
        // Variable: gameState
        // Current game state
        PythonObject gameState;
        
        // Variable: windowEvent
        // Window event container
        Event windowEvent;
        
        // Variable: windowPtr
        // Pointer to window
        SharedPtr<RenderWindow> windowPtr;
        
        // Variable: windowTitle
        // Title for window
        String windowTitle;
        
        // Variable: windowColor
        // Window color
        Color windowColor;
        
        // Variable: windowWidth
        // Width of window
        Int windowWidth;
        
        // Variable: windowHeight
        // Height of window
        Int windowHeight;
        
        // Variable: useDebug
        // Whether to use/show debugging information
        Bool useDebug;
        
        // Variable: useVsync
        // Whether to use vertical sync
        Bool useVsync;
        
        // Variable: useKeyRepeat
        // Whether to use key repeat
        Bool useKeyRepeat;
        
        // Variable: useMouseCursor
        // Whether to use mouse cursor
        Bool useMouseCursor;
        
        // Variable: isRunning
        // Whether application is running
        Bool isRunning;
        
        // Variable: rocketRendererPtr
        // Pointer to rocket renderer
        SharedPtr<RocketSFMLRenderer> rocketRendererPtr;
        
        // Variable: rocketShellPtr
        // Pointer to rocket shell
        SharedPtr<ShellFileInterface> rocketShellPtr;
        
        // Variable: rocketSystemPtr
        // Pointer to rocket system
        SharedPtr<RocketSFMLSystemInterface> rocketSystemPtr;
        
        // Variable: rocketContextPtrTable
        // Table of pointers to rocket context (not shared ptrs, managed elsewhere)
        UnorderedTable<String, RocketContext*> rocketContextPtrTable;
        
        // Variable: activeRocketContext
        // Name of active rocket context
        String activeRocketContext;
    };
};

#endif
