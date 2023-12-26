// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Exception.h>
#include <Gamestone/Utility/Wrapper.h>

//==================================================================================
void Gamestone::translate_GeneralException(const GeneralException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_LogicErrorException(const LogicErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_DomainErrorException(const DomainErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_InvalidArgumentException(const InvalidArgumentException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_LengthErrorException(const LengthErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_OutOfRangeException(const OutOfRangeException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_RuntimeErrorException(const RuntimeErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_RangeErrorException(const RangeErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_OverflowErrorException(const OverflowErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_UnderflowErrorException(const UnderflowErrorException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_BadAllocationException(const BadAllocationException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_BadCastException(const BadCastException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
void Gamestone::translate_UnhandledException(const UnhandledException& e)
{
    // Translate exception
    PyErr_SetString(PyExc_RuntimeError, e.what());
}
//==================================================================================
