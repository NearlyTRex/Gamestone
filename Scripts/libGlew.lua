-- Imports
require "common"

-- Configuration
libGlew_name = "Glew"
libGlew_target = "Glew"
libGlew_type = "StaticLib"
libGlew_lang = "C"
libGlew_extradir = "../Libs/Glew/extra/"
libGlew_origdir = "../Libs/Glew/orig/"
libGlew_srcdir = libGlew_origdir .. "src/"
libGlew_incdir = libGlew_origdir .. "include/"

-- Includes
libGlew_includedirs = {
    libGlew_origdir,
    libGlew_incdir
}

-- Defines
libGlew_defines = {
    "GLEW_STATIC"
}

-- Sources
libGlew_sources = {
    libGlew_srcdir .. "glew.c",
}

-- Options
libGlew_options = {}
libGlew_options["type"] = libGlew_type
libGlew_options["lang"] = libGlew_lang
libGlew_options["includedirs"] = libGlew_includedirs
libGlew_options["defines"] = {libGlew_defines}
libGlew_options["sources"] = libGlew_sources

