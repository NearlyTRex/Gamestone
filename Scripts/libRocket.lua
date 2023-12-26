-- Imports
require "common"
require "libPython"
require "libBoost"
require "libFreetype"
require "libSFML"

-- Configuration
libRocketControls_name = "RocketControls"
libRocketControlsPython_name = "RocketControlsPython"
libRocketCore_name = "RocketCore"
libRocketCorePython_name = "RocketCorePython"
libRocketDebug_name = "RocketDebug"
libRocketExtra_name = "RocketExtra"
libRocket_target = "Rocket"
libRocket_type = "StaticLib"
libRocket_lang = "C++"
libRocket_extradir = "../Libs/Rocket/extra/"
libRocket_origdir = "../Libs/Rocket/orig/"
libRocket_srcdir = libRocket_origdir .. "Source/"
libRocket_incdir = libRocket_origdir .. "Include/"

-- Includes
libRocket_includedirs = {
    libPython_includedirs,
    libBoost_includedirs,
    libRocket_extradir,
    libRocket_srcdir,
    libRocket_incdir,
    libFreetype_includedirs,
    libSFML_includedirs,
}

-- Defines
libRocket_defines = {
    "STATIC_LIB"
}

-- Sources
libRocketControls_sources = {
    libRocket_srcdir .. "Controls/*.cpp"
}
libRocketControlsPython_sources = {
    libRocket_srcdir .. "Controls/Python/*.cpp"
}
libRocketCore_sources = {
    libRocket_srcdir .. "Core/*.cpp"
}
libRocketCorePython_sources = {
    libRocket_srcdir .. "Core/Python/*.cpp"
}
libRocketDebug_sources = {
    libRocket_srcdir .. "Debugger/**.cpp",
}
libRocketExtra_sources = {
    libRocket_extradir .. "**.cpp"
}

-- Excludes
libRocketCorePython_excludes = {
    libRocket_srcdir .. "Core/Python/DataSourceWrapper.cpp"
}

-- Options
libRocket_options = {}
libRocket_options["type"] = libRocket_type
libRocket_options["lang"] = libRocket_lang
libRocket_options["includedirs"] = libRocket_includedirs
libRocket_options["defines"] = {libRocket_defines, libPython_defines, libBoost_defines, libFreetype_defines, libSFML_defines}
libRocketControls_options = table.shallow_copy(libRocket_options)
libRocketControlsPython_options = table.shallow_copy(libRocket_options)
libRocketCore_options = table.shallow_copy(libRocket_options)
libRocketCorePython_options = table.shallow_copy(libRocket_options)
libRocketDebug_options = table.shallow_copy(libRocket_options)
libRocketExtra_options = table.shallow_copy(libRocket_options)
libRocketControls_options["sources"] = libRocketControls_sources
libRocketControlsPython_options["sources"] = libRocketControlsPython_sources
libRocketCore_options["sources"] = libRocketCore_sources
libRocketCorePython_options["sources"] = libRocketCorePython_sources
libRocketCorePython_options["excludes"] = libRocketCorePython_excludes
libRocketDebug_options["sources"] = libRocketDebug_sources
libRocketDebug_options["excludes"] = libRocketDebug_excludes
libRocketExtra_options["sources"] = libRocketExtra_sources
