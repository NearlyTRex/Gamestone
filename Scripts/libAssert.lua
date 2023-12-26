-- Imports
require "common"

-- Configuration
libAssert_name = "Assert"
libAssert_target = "Assert"
libAssert_type = "StaticLib"
libAssert_lang = "C++"
libAssert_extradir = "../Libs/Assert/extra/"
libAssert_origdir = "../Libs/Assert/orig/"
libAssert_srcdir = libAssert_origdir .. "src/"
libAssert_incdir = libAssert_origdir .. "src/"

-- Includes
libAssert_includedirs = {
    libAssert_incdir
}

-- Defines
libAssert_defines = {
}

-- Sources
libAssert_sources = {
    libAssert_srcdir .. "**.cpp"
}

-- Excludes
libAssert_excludes = {
}

-- Flags
libAssert_buildoptions = {
}
libAssert_linkoptions = {
}

-- Options
libAssert_options = {}
libAssert_options["type"] = libAssert_type
libAssert_options["lang"] = libAssert_lang
libAssert_options["includedirs"] = libAssert_includedirs
libAssert_options["defines"] = {libAssert_defines}
libAssert_options["sources"] = libAssert_sources
libAssert_options["excludes"] = libAssert_excludes
libAssert_options["buildoptions"] = libAssert_buildoptions
libAssert_options["linkoptions"] = libAssert_linkoptions
