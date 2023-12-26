-- Imports
require "common"
require "libBox2D"
require "libSFML"
require "libZlib"

-- Configuration
libTMXLoader_name = "TMXLoader"
libTMXLoader_target = "TMXLoader"
libTMXLoader_type = "StaticLib"
libTMXLoader_lang = "C++"
libTMXLoader_origdir = "../Libs/TMXLoader/orig/"
libTMXLoader_srcdir = libTMXLoader_origdir .. "src/"
libTMXLoader_incdir = libTMXLoader_origdir .. "include/"

-- Includes
libTMXLoader_includedirs = {
    libTMXLoader_incdir,
    libBox2D_includedirs,
    libSFML_includedirs,
    libZlib_includedirs,
}

-- Defines
libTMXLoader_defines = {
}

-- Sources
libTMXLoader_sources = {
    libTMXLoader_srcdir .. "**.cpp"
}

-- Excludes
libTMXLoader_excludes = {
}

-- Flags
libTMXLoader_buildoptions = {
}
libTMXLoader_linkoptions = {
}

-- Options
libTMXLoader_options = {}
libTMXLoader_options["type"] = libTMXLoader_type
libTMXLoader_options["lang"] = libTMXLoader_lang
libTMXLoader_options["includedirs"] = libTMXLoader_includedirs
libTMXLoader_options["defines"] = {libTMXLoader_defines, libBox2D_defines, libSFML_defines}
libTMXLoader_options["sources"] = libTMXLoader_sources
libTMXLoader_options["excludes"] = libTMXLoader_excludes
libTMXLoader_options["buildoptions"] = libTMXLoader_buildoptions
libTMXLoader_options["linkoptions"] = libTMXLoader_linkoptions
