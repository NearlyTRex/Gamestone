-- Imports
require "common"
require "libPython"

-- Configuration
libBoostFilesystem_name = "BoostFilesystem"
libBoostProgramOptions_name = "BoostProgramOptions"
libBoostPython_name = "BoostPython"
libBoostSystem_name = "BoostSystem"
libBoost_type = "StaticLib"
libBoost_lang = "C++"
libBoost_extradir = "../Libs/Boost/extra/"
libBoost_origdir = "../Libs/Boost/orig/"
libBoost_srcdir = libBoost_origdir .. "libs/"
libBoost_incdir = libBoost_origdir

-- Includes
libBoost_includedirs = {
    libBoost_incdir,
    libPython_includedirs,
}

-- Defines
libBoost_defines = {
    "BOOST_PYTHON_STATIC_LIB",
    "BOOST_PROGRAM_OPTIONS_STATIC_LIB",
    "BOOST_THREAD_STATIC_LIB",
    "BOOST_SYSTEM_STATIC_LIB",
    "BOOST_ALL_STATIC_LINK",
    "BOOST_ALL_NO_LIB",
}

-- Sources
libBoostFilesystem_sources = {
    libBoost_srcdir .. "filesystem/src/**.cpp"
}
libBoostProgramOptions_sources = {
    libBoost_srcdir .. "program_options/src/**.cpp",
}
libBoostPython_sources = {
    libBoost_srcdir .. "python/src/**.cpp",
}
libBoostSystem_sources = {
    libBoost_srcdir .. "system/src/**.cpp"
}

-- Options
libBoost_options = {}
libBoost_options["type"] = libBoost_type
libBoost_options["lang"] = libBoost_lang
libBoost_options["includedirs"] = libBoost_includedirs
libBoost_options["defines"] = {libBoost_defines, libPython_defines}
libBoostFilesystem_options = table.shallow_copy(libBoost_options)
libBoostProgramOptions_options = table.shallow_copy(libBoost_options)
libBoostPython_options = table.shallow_copy(libBoost_options)
libBoostSystem_options = table.shallow_copy(libBoost_options)
libBoostFilesystem_options["sources"] = libBoostFilesystem_sources
libBoostProgramOptions_options["sources"] = libBoostProgramOptions_sources
libBoostPython_options["sources"] = libBoostPython_sources
libBoostSystem_options["sources"] = libBoostSystem_sources