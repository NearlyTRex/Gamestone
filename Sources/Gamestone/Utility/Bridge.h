// Title: Bridge

// Gamestone Engine
// Licensed under the LGPL
#ifndef BRIDGE_H
#define BRIDGE_H

// Local includes
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Utility/Wrapper.h>
#include <Gamestone/Utility/Exception.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Method: RunPythonCode
    // Runs the given code and returns the result
    //
    // Parameters:
    // code - Python code to execute
    //
    // Returns:
    // Python object holding the results
    PythonObject RunPythonCode(const String& code);
    
    // Method: DefinePythonFunction
    // Defines a Python function that can be used
    //
    // Parameters:
    // name - Name of the function
    // code - Code for the function
    //
    // Returns:
    // Python object holding the function object
    PythonObject DefinePythonFunction(const String& name, const String& code);
};

#endif
