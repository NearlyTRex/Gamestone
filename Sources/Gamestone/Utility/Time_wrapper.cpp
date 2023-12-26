// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Time_wrapper.h>

//=====================================================================================
void register_Time()
{
    // Expose functions
    REGISTER_FUNCTION(CreateTimeFromSeconds, "CreateTimeFromSeconds")
    REGISTER_FUNCTION(CreateTimeFromMilliseconds, "CreateTimeFromMilliseconds")
    REGISTER_FUNCTION(CreateTimeFromMicroseconds, "CreateTimeFromMicroseconds")
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::TimeValue, "TimeValue")
    REGISTER_CLASS_METHOD(&Gamestone::TimeValue::asSeconds, "AsSeconds")
    REGISTER_CLASS_METHOD(&Gamestone::TimeValue::asMilliseconds, "AsMilliseconds")
    REGISTER_CLASS_METHOD(&Gamestone::TimeValue::asMicroseconds, "AsMicroseconds")
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Stopwatch, "Stopwatch")
    REGISTER_CLASS_METHOD(&Gamestone::Stopwatch::getElapsedTime, "GetElapsedTime")
    REGISTER_CLASS_METHOD(&Gamestone::Stopwatch::restart, "Restart")
    REGISTER_CLASS_FOOTER()
}
//=====================================================================================
