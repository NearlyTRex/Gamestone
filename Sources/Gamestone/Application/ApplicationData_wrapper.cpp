// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Application/ApplicationData_wrapper.h>

//===============================================================================
void register_ApplicationData()
{
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::ApplicationData, "ApplicationData")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::frameRateLimit, "FrameRateLimit")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::windowTitle, "WindowTitle")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::windowColor, "WindowColor")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::windowWidth, "WindowWidth")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::windowHeight, "WindowHeight")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::useDebug, "UseDebug")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::useVsync, "UseVsync")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::useKeyRepeat, "UseKeyRepeat")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::ApplicationData::useMouseCursor, "UseMouseCursor")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================
