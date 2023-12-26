// Title: Module

// Gamestone Engine
// Licensed under the LGPL
#ifndef MODULE_H
#define MODULE_H

// Module includes
#include <Gamestone/Module/Info.h>

// Types includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Application includes
#include <Gamestone/Application/Application_wrapper.h>
#include <Gamestone/Application/ApplicationData_wrapper.h>

// Math includes
#include <Gamestone/Math/Collision_wrapper.h>
#include <Gamestone/Math/CollisionBox_wrapper.h>
#include <Gamestone/Math/Rect_wrapper.h>
#include <Gamestone/Math/Vector_wrapper.h>

// Object includes
#include <Gamestone/Objects/Obj/Obj_wrapper.h>
#include <Gamestone/Objects/BasicSprite/BasicSprite_wrapper.h>
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimation_wrapper.h>
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimator_wrapper.h>
#include <Gamestone/Objects/TextWriter/TextWriter_wrapper.h>
#include <Gamestone/Objects/MusicPlayer/MusicPlayer_wrapper.h>
#include <Gamestone/Objects/SoundPlayer/SoundPlayer_wrapper.h>

// Type includes
#include <Gamestone/Types/Array_wrapper.h>
#include <Gamestone/Types/Table_wrapper.h>

// Utility includes
#include <Gamestone/Utility/Actions_wrapper.h>
#include <Gamestone/Utility/Camera_wrapper.h>
#include <Gamestone/Utility/Color_wrapper.h>
#include <Gamestone/Utility/Exception_wrapper.h>
#include <Gamestone/Utility/Resources_wrapper.h>
#include <Gamestone/Utility/Time_wrapper.h>
#include <Gamestone/Utility/Wrapper.h>
#include <Gamestone/Utility/Exception.h>
#include <Gamestone/Utility/ProgramOptions.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Method: startupModule
    // Parses arguments and runs module
    //
    // Parameters:
    // argc - Number of arguments
    // argv - Argument array
    //
    // Returns:
    // Result of startup
    Int startupModule(Int argc, Char** argv);
    
    // Method: initModule
    // Takes a python script and python library and starts the python interpreter
    //
    // Parameters:
    // python_lib - Python library location
    // work_dir - Work directory for the script
    // media_dir - Media directory for assets
    // entry_script - Script to run
    void initModule(const String& python_lib, const String& work_dir, const String& media_dir, const String& entry_script);
    
    // Method: finalizeModule
    // Stops the python interpreter
    void finalizeModule();
    
    // Method: getPythonLib
    // Gets location of the python standard library
    //
    // Returns:
    // Location of python standard library
    const String& getPythonLib();
    
    // Method: getWorkDir
    // Gets location of the work directory
    //
    // Returns:
    // Location of work directory
    const String& getWorkDir();
    
    // Method: getMediaDir
    // Gets location of the media directory
    //
    // Returns:
    // Location of media directory
    const String& getMediaDir();
    
    // Method: getEntryScript
    // Gets name of entry script
    //
    // Returns: Name of entry script
    const String& getEntryScript();
};

#endif
