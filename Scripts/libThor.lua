-- Imports
require "common"
require "libSFML"

-- Configuration
libThor_name = "Thor"
libThor_target = "Thor"
libThor_type = "StaticLib"
libThor_lang = "C++"
libThor_extradir = "../Libs/Thor/extra/"
libThor_origdir = "../Libs/Thor/orig/"
libThor_srcdir = libThor_origdir .. "src/"
libThor_incdir = libThor_origdir .. "include/"
libThor_incdir_aurora = libThor_origdir .. "extlibs/aurora/include"

-- Includes
libThor_includedirs = {
    libThor_incdir,
    libThor_incdir_aurora,
    libSFML_includedirs,
}

-- Defines
libThor_defines = {
    "THOR_USE_STD_RANDOMENGINE"
}

-- Sources
libThor_sources = {
    libThor_srcdir .. "*.cpp"
}

-- Options
libThor_options = {}
libThor_options["type"] = libThor_type
libThor_options["lang"] = libThor_lang
libThor_options["includedirs"] = libThor_includedirs
libThor_options["defines"] = {libThor_defines, libSFML_defines}
libThor_options["sources"] = libThor_sources
