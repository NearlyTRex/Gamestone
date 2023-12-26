// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Exception_wrapper.h>

//===============================================================================================
void register_Exception()
{
    // Expose exceptions
    REGISTER_EXCEPTION(Gamestone::GeneralException, Gamestone::translate_GeneralException)
    REGISTER_EXCEPTION(Gamestone::LogicErrorException, Gamestone::translate_LogicErrorException)
    REGISTER_EXCEPTION(Gamestone::DomainErrorException, Gamestone::translate_DomainErrorException)
    REGISTER_EXCEPTION(Gamestone::InvalidArgumentException, Gamestone::translate_InvalidArgumentException)
    REGISTER_EXCEPTION(Gamestone::LengthErrorException, Gamestone::translate_LengthErrorException)
    REGISTER_EXCEPTION(Gamestone::OutOfRangeException, Gamestone::translate_OutOfRangeException)
    REGISTER_EXCEPTION(Gamestone::RuntimeErrorException, Gamestone::translate_RuntimeErrorException)
    REGISTER_EXCEPTION(Gamestone::RangeErrorException, Gamestone::translate_RangeErrorException)
    REGISTER_EXCEPTION(Gamestone::OverflowErrorException, Gamestone::translate_OverflowErrorException)
    REGISTER_EXCEPTION(Gamestone::UnderflowErrorException, Gamestone::translate_UnderflowErrorException)
    REGISTER_EXCEPTION(Gamestone::BadAllocationException, Gamestone::translate_BadAllocationException)
    REGISTER_EXCEPTION(Gamestone::BadCastException, Gamestone::translate_BadCastException)
    REGISTER_EXCEPTION(Gamestone::UnhandledException, Gamestone::translate_UnhandledException)
}
//===============================================================================================
