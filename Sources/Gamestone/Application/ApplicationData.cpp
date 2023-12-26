// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Application/ApplicationData.h>

//===============================================================================
Gamestone::ApplicationData::ApplicationData():
    previousFrameTime(0),
    currentFrameTime(0),
    frameCount(0),
    frameRate(0),
    frameRateLimit(60),
    deltaTime(0.0f),
    deltaClock(),
    frameClock(),
    actionMap(),
    actionMapSystem(),
    gameState(),
    windowEvent(),
    windowPtr(),
    windowTitle(),
    windowColor(0, 0, 0, 255),
    windowWidth(640),
    windowHeight(480),
    useDebug(false),
    useVsync(true),
    useKeyRepeat(false),
    useMouseCursor(false),
    isRunning(false),
    rocketRendererPtr(),
    rocketShellPtr(),
    rocketSystemPtr(),
    rocketContextPtrTable(),
    activeRocketContext()
{
}
//===============================================================================
Gamestone::ApplicationData::ApplicationData(const ApplicationData& other):
    previousFrameTime(0),
    currentFrameTime(0),
    frameCount(0),
    frameRate(0),
    frameRateLimit(other.frameRateLimit),
    deltaTime(0.0f),
    deltaClock(),
    frameClock(),
    actionMap(),
    actionMapSystem(),
    gameState(),
    windowEvent(),
    windowPtr(),
    windowTitle(other.windowTitle),
    windowColor(other.windowColor),
    windowWidth(other.windowWidth),
    windowHeight(other.windowHeight),
    useDebug(other.useDebug),
    useVsync(other.useVsync),
    useKeyRepeat(other.useKeyRepeat),
    useMouseCursor(other.useMouseCursor),
    isRunning(other.isRunning),
    rocketRendererPtr(),
    rocketShellPtr(),
    rocketSystemPtr(),
    rocketContextPtrTable(),
    activeRocketContext()
{
}
//===============================================================================
