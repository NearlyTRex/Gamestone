// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Module/Module.h>

// Static cache of program options
static Gamestone::String sPythonLibrary;
static Gamestone::String sWorkDir;
static Gamestone::String sMediaDir;
static Gamestone::String sEntryScript;

//=====================================================================================
BOOST_PYTHON_MODULE(Application)
{
    register_Application();
    register_ApplicationData();
}
//=====================================================================================
BOOST_PYTHON_MODULE(Math)
{
    register_Collision();
    register_CollisionBox();
    register_Rect();
    register_Vector();
}
//=====================================================================================
BOOST_PYTHON_MODULE(Objects)
{
    register_Obj();
    register_BasicSprite();
    register_BasicSpriteAnimation();
    register_BasicSpriteAnimator();
    register_TextWriter();
    register_MusicPlayer();
    register_SoundPlayer();
}
//=====================================================================================
BOOST_PYTHON_MODULE(Types)
{
    register_Array();
    register_Table();
}
//=====================================================================================
BOOST_PYTHON_MODULE(Utility)
{
    register_Actions();
    register_Camera();
    register_Color();
    register_Exception();
    register_Resources();
    register_Time();
}
//=====================================================================================
Gamestone::Int Gamestone::startupModule(Int argc, Char** argv)
{
    // Options
    const String option_help_long = "help";
    const String option_help_short = "h";
    const String option_help = option_help_long + String(",") + option_help_short;
    const String option_version_long = "version";
    const String option_version_short = "v";
    const String option_version = option_version_long + String(",") + option_version_short;
    const String option_python_lib = "pythonlib";
    const String option_work_dir = "workdir";
    const String option_media_dir = "mediadir";
    const String option_entry_script = "script";
    
    // Defaults
    const String default_python_lib = "python";
    const String default_work_dir = ".";
    const String default_media_dir = "media";
    const String default_entry_script = "main.py";
    
    // Parsed variables
    String python_lib;
    String work_dir;
    String media_dir;
    String entry_script;
    
    // About string
    String about = "";
    about += String("Gamestone 2D game engine v.") + GAMESTONE_VERSION + String("\n");
    about += String("Powered by Python v.") + PY_VERSION + String("");
    
    // Usage string
    String usage = String("Usage: " + String(GAMESTONE_PROGRAM_NAME) + " script.py [options]");
    
    // Option strings
    String help_option = "Print help information";
    String version_option = "Print version information";
    String python_lib_option = "Location of Python library";
    String work_dir_option = "Location of work directory";
    String media_dir_option = "Location of media directory";
    String entry_script_option = "Entry script to execute";
    
    // Make sure to catch our exceptions
    try
    {
        // Set description
        ProgramOptionsDescription description("Options");
        description.add_options()
            (option_help.c_str(), help_option.c_str())
            (option_version.c_str(), version_option.c_str())
            (option_python_lib.c_str(), ProgramOptionsValue<String>(&python_lib)->default_value(default_python_lib.c_str()), python_lib_option.c_str())
            (option_work_dir.c_str(), ProgramOptionsValue<String>(&work_dir)->default_value(default_work_dir.c_str()), work_dir_option.c_str())
            (option_media_dir.c_str(), ProgramOptionsValue<String>(&media_dir)->default_value(default_media_dir.c_str()), media_dir_option.c_str())
            (option_entry_script.c_str(), ProgramOptionsValue<String>(&entry_script)->default_value(default_entry_script.c_str()), entry_script_option.c_str())
        ;
        
        // Set positional
        ProgramOptionsPositional positional;
        positional.add(option_entry_script.c_str(), 1);
        
        // Create variable map
        ProgramOptionsMap map;
        
        // Parse command line
        ProgramOptionsStore(ProgramOptionsParse(argc, argv).options(description).positional(positional).allow_unregistered().run(), map);
        ProgramOptionsNotify(map);
        
        // Show help
        if (map.count(option_help_long))
        {
            std::cout << about << std::endl;
            std::cout << usage << std::endl;
            std::cout << description << std::endl;
            return 0;
        }
        
        // Show version
        if (map.count(option_version_long))
        {
            std::cout << GAMESTONE_VERSION << std::endl;
            return 0;
        }
        
        // Run script
        initModule(python_lib, work_dir, media_dir, entry_script);
        finalizeModule();
    }
    catch (std::exception& e)
    {
        // Notify and exit
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    // Quit
    return 0;
}
//=====================================================================================
void Gamestone::initModule(const String& python_lib, const String& work_dir, const String& media_dir, const String& entry_script)
{
    // Parameter string storage
#ifdef _MSC_VER
    char python_lib_cstr[128];
    char work_dir_cstr[128];
    char media_dir_cstr[128];
    char entry_script_cstr[128];
#else
    char python_lib_cstr[python_lib.size() + 1];
    char work_dir_cstr[work_dir.size() + 1];
    char media_dir_cstr[media_dir.size() + 1];
    char entry_script_cstr[entry_script.size() + 1];
#endif
    
    // Convert parameters
#ifdef _MSC_VER
    strcpy_s(python_lib_cstr, python_lib.c_str());
    strcpy_s(work_dir_cstr, work_dir.c_str());
    strcpy_s(media_dir_cstr, media_dir.c_str());
    strcpy_s(entry_script_cstr, entry_script.c_str());
#else
    strcpy(python_lib_cstr, python_lib.c_str());
    strcpy(work_dir_cstr, work_dir.c_str());
    strcpy(media_dir_cstr, media_dir.c_str());
    strcpy(entry_script_cstr, entry_script.c_str());
#endif
    
    // Parameter cache
    sPythonLibrary = python_lib;
    sWorkDir = work_dir;
    sMediaDir = media_dir;
    sEntryScript = entry_script;
    
    // Skip site usage and ignore environment variables
    Py_NoSiteFlag++;
    Py_NoUserSiteDirectory++;
    Py_IgnoreEnvironmentFlag++;
    
    // Initialize modules
    PyImport_AppendInittab("Application", initApplication);
    PyImport_AppendInittab("Math", initMath);
    PyImport_AppendInittab("Objects", initObjects);
    PyImport_AppendInittab("Types", initTypes);
    PyImport_AppendInittab("Utility", initUtility);
    
    // Set program name
    char program_name[] = GAMESTONE_PROGRAM_NAME;
    Py_SetProgramName(program_name);
    
    // Set python home
    Py_SetPythonHome(python_lib_cstr);
    
    // Initialize interpreter and set path
    Py_Initialize();
    PySys_SetPath(python_lib_cstr);
    
    // Import basic modules
    PyRun_SimpleString("import os");
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");
    
    // Change to the given work directory
    String changedir = String("os.chdir(\"") + work_dir + String("\")");
    PyRun_SimpleString(changedir.c_str());
    
    // Open the entry script
#ifdef _MSC_VER
    FILE* fp;
    fopen_s(&fp, entry_script.c_str(), "r");
#else
    FILE* fp = fopen(entry_script.c_str(), "r");
#endif
    if (fp == NULL)
    {
        // Print error and quit
        throw InvalidArgumentException("Could not open " + entry_script + " for reading");
    }
    
    // Run the script
    PyRun_SimpleFile(fp, entry_script.c_str());
    
    // Close the main script
    fclose(fp);
}
//=====================================================================================
void Gamestone::finalizeModule()
{
    // Finalize interpreter
    Py_Finalize();
}
//=====================================================================================
const Gamestone::String& Gamestone::getPythonLib()
{
    // Get python library
    return sPythonLibrary;
}
//=====================================================================================
const Gamestone::String& Gamestone::getWorkDir()
{
    // Get work directory
    return sWorkDir;
}
//=====================================================================================
const Gamestone::String& Gamestone::getMediaDir()
{
    // Get media directory
    return sMediaDir;
}
//=====================================================================================
const Gamestone::String& Gamestone::getEntryScript()
{
    // Get entry script
    return sEntryScript;
}
//=====================================================================================
