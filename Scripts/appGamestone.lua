-- Imports
require "common"
require "libAssert"
require "libBoost"
require "libBox2D"
require "libFlac"
require "libCajun"
require "libFreetype"
require "libGlew"
require "libGreenlet"
require "libJpeg"
require "libOgg"
require "libOpenALSoft"
require "libPython"
require "libPng"
require "libRocket"
require "libSFML"
require "libSndfile"
require "libSQLite"
require "libThor"
require "libTMXLoader"
require "libVorbis"
require "libZlib"

-- Configuration
appGamestone_name = "Gamestone"
appGamestone_target = "gamestone"
appGamestone_type = "ConsoleApp"
appGamestone_lang = "C++"
appGamestone_origdir = "../Sources/"
appGamestone_srcdir = appGamestone_origdir
appGamestone_incdir = appGamestone_srcdir

-- Includes
appGamestone_includedirs = {
    appGamestone_incdir,
    libPython_includedirs,
    libBoost_includedirs,
    libSFML_includedirs,
    libThor_includedirs,
    libTMXLoader_includedirs,
    libRocket_includedirs,
    libAssert_includedirs
}

-- Libraries
appGamestone_libdirs = {
}

-- Defines
appGamestone_defines = {
    libGamestone_defines,
    libPython_defines,
    libBoost_defines,
    libSFML_defines,
    libRocket_defines
}

-- Sources
appGamestone_sources = {
    appGamestone_srcdir .. "**.cpp"
}

-- Libraries
appGamestone_libs = {
    libAssert_name,
    libBoostFilesystem_name,
    libBoostProgramOptions_name,
    libBoostPython_name,
    libBoostSystem_name,
    libBox2D_name,
    libFlac_name,
    libFreetype_name,
    libGlew_name,
    libGreenlet_name,
    libJpeg_name,
    libOgg_name,
    libOpenALSoftCommon_name,
    libOpenALSoftMain_name,
    libPython_name,
    libPng_name,
    libRocketControls_name,
    libRocketControlsPython_name,
    libRocketCore_name,
    libRocketCorePython_name,
    libRocketDebug_name,
    libRocketExtra_name,
    libSFML_name,
    libSndfile_name,
    libSQLite_name,
    libThor_name,
    libTMXLoader_name,
    libVorbis_name,
    libZlib_name
}

-- Flags
appGamestone_buildoptions = { 
}
appGamestone_linkoptions = {
}

-- Options
appGamestone_options = {}
appGamestone_options["target"] = appGamestone_target
appGamestone_options["type"] = appGamestone_type
appGamestone_options["lang"] = appGamestone_lang
appGamestone_options["includedirs"] = appGamestone_includedirs
appGamestone_options["defines"] = appGamestone_defines
appGamestone_options["sources"] = appGamestone_sources
appGamestone_options["libs"] = appGamestone_libs
appGamestone_options["buildoptions"] = appGamestone_buildoptions
appGamestone_options["linkoptions"] = appGamestone_linkoptions

