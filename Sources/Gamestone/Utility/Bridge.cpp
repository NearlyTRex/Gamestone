// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Bridge.h>

//===================================================================================
PythonObject Gamestone::RunPythonCode(const String& code)
{
    // Retrieve the main module and namespace
    PythonObject main = PythonImport("__main__");
    PythonObject global(main.attr("__dict__"));
    
    // Execute the python code
    PythonObject result = PythonExec(code.c_str(), global, global);
    
    // Return results
    return result;
}
//===================================================================================
PythonObject Gamestone::DefinePythonFunction(const String& name, const String& code)
{
    // Retrieve the main module and namespace
    PythonObject main = PythonImport("__main__");
    PythonObject global(main.attr("__dict__"));
    
    // Execute the python code
    PythonObject result = PythonExec(code.c_str(), global, global);
    
    // Create a reference to the function
    PythonObject func = global[name];
    
    // Return function object
    return func;
}
//===================================================================================
