-- Change package path
package.path = "?.lua;" .. package.path

-- Solution
solution("all")
    configurations { "Debug", "Release" }
    location("../Build")

-- Imports
require "common"
require "appGamestone"

-- Libraries
CreateProject(libAssert_name, libAssert_options)
CreateProject(libBoostFilesystem_name, libBoostFilesystem_options)
CreateProject(libBoostProgramOptions_name, libBoostProgramOptions_options)
CreateProject(libBoostPython_name, libBoostPython_options)
CreateProject(libBoostSystem_name, libBoostSystem_options)
CreateProject(libBox2D_name, libBox2D_options)
CreateProject(libFlac_name, libFlac_options)
CreateProject(libFreetype_name, libFreetype_options)
CreateProject(libGlew_name, libGlew_options)
CreateProject(libGreenlet_name, libGreenlet_options)
CreateProject(libJpeg_name, libJpeg_options)
CreateProject(libOgg_name, libOgg_options)
CreateProject(libOpenALSoftCommon_name, libOpenALSoftCommon_options)
CreateProject(libOpenALSoftMain_name, libOpenALSoftMain_options)
CreateProject(libPng_name, libPng_options)
CreateProject(libPython_name, libPython_options)
CreateProject(libRocketControls_name, libRocketControls_options)
CreateProject(libRocketControlsPython_name, libRocketControlsPython_options)
CreateProject(libRocketCore_name, libRocketCore_options)
CreateProject(libRocketCorePython_name, libRocketCorePython_options)
CreateProject(libRocketDebug_name, libRocketDebug_options)
CreateProject(libRocketExtra_name, libRocketExtra_options)
CreateProject(libSFML_name, libSFML_options)
CreateProject(libSndfile_name, libSndfile_options)
CreateProject(libSQLite_name, libSQLite_options)
CreateProject(libThor_name, libThor_options)
CreateProject(libTMXLoader_name, libTMXLoader_options)
CreateProject(libVorbis_name, libVorbis_options)
CreateProject(libZlib_name, libZlib_options)

-- Apps
CreateProject(appGamestone_name, appGamestone_options)
