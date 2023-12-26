-- Imports
require "common"
require "libPython"

-- Configuration
libGreenlet_name = "Greenlet"
libGreenlet_target = "Greenlet"
libGreenlet_type = "StaticLib"
libGreenlet_lang = "C"
libGreenlet_extradir = "../Libs/Greenlet/extra/"
libGreenlet_origdir = "../Libs/Greenlet/orig/"
libGreenlet_srcdir = libGreenlet_origdir
libGreenlet_incdir = libGreenlet_origdir

-- Includes
libGreenlet_includedirs = {
    libGreenlet_incdir,
    libPython_includedirs,
}

-- Defines
libGreenlet_defines = {
}

-- Sources
libGreenlet_sources = {
    libGreenlet_srcdir .. "greenlet.c",
}

-- Options
libGreenlet_options = {}
libGreenlet_options["type"] = libGreenlet_type
libGreenlet_options["lang"] = libGreenlet_lang
libGreenlet_options["includedirs"] = libGreenlet_includedirs
libGreenlet_options["defines"] = {libGreenlet_defines, libPython_defines}
libGreenlet_options["sources"] = libGreenlet_sources
