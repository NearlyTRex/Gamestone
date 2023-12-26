// Title: Exception

// Gamestone Engine
// Licensed under the LGPL
#ifndef EXCEPTION_H
#define EXCEPTION_H

// Standard includes
#include <new>
#include <typeinfo>
#include <stdexcept>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: General Exception
    // General exception class (cannot be passed a string)
    typedef std::exception GeneralException;
    
    // Type: LogicErrorException
    // Logic error exception
    typedef std::logic_error LogicErrorException;
    
    // Type: DomainErrorException
    // Domain error exception
    typedef std::domain_error DomainErrorException;
    
    // Type: InvalidArgumentException
    // Invalid argument exception
    typedef std::invalid_argument InvalidArgumentException;
    
    // Type: LengthErrorException
    // Length error exception
    typedef std::length_error LengthErrorException;
    
    // Type: OutOfRangeException
    // Out of range exception
    typedef std::out_of_range OutOfRangeException;
    
    // Type: RuntimeErrorException
    // Runtime error exception
    typedef std::runtime_error RuntimeErrorException;
    
    // Type: RangeErrorException
    // Range error exception
    typedef std::range_error RangeErrorException;
    
    // Type: OverflowErrorException
    // Overflow error exception
    typedef std::overflow_error OverflowErrorException;
    
    // Type: UnderflowErrorException
    // Underflow error exception
    typedef std::underflow_error UnderflowErrorException;
    
    // Type: BadAllocationException
    // Bad allocation exception
    typedef std::bad_alloc BadAllocationException;
    
    // Type: BadCastException
    // Bad cast exception
    typedef std::bad_cast BadCastException;
    
    // Type: UnhandledException
    // Unhandled exception
    typedef std::bad_exception UnhandledException;
    
    // Translators
    void translate_GeneralException(const GeneralException& e);
    void translate_LogicErrorException(const LogicErrorException& e);
    void translate_DomainErrorException(const DomainErrorException& e);
    void translate_InvalidArgumentException(const InvalidArgumentException& e);
    void translate_LengthErrorException(const LengthErrorException& e);
    void translate_OutOfRangeException(const OutOfRangeException& e);
    void translate_RuntimeErrorException(const RuntimeErrorException& e);
    void translate_RangeErrorException(const RangeErrorException& e);
    void translate_OverflowErrorException(const OverflowErrorException& e);
    void translate_UnderflowErrorException(const UnderflowErrorException& e);
    void translate_BadAllocationException(const BadAllocationException& e);
    void translate_BadCastException(const BadCastException& e);
    void translate_UnhandledException(const UnhandledException& e);
};

#endif
