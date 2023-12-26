-- Imports
require "common"
require "libVorbis"

-- Configuration
libOgg_name = "Ogg"
libOgg_target = "Ogg"
libOgg_type = "StaticLib"
libOgg_lang = "C"
libOgg_extradir = "../Libs/Ogg/extra/"
libOgg_origdir = "../Libs/Ogg/orig/"
libOgg_srcdir = libOgg_origdir .. "src/"
libOgg_incdir = libOgg_origdir .. "include/"

-- Includes
libOgg_includedirs = {
    libOgg_incdir,
    libVorbis_includedirs
}

-- Defines
libOgg_defines = {
}

-- Sources
libOgg_sources = {
    libOgg_srcdir .. "*.c"
}

-- Options
libOgg_options = {}
libOgg_options["type"] = libOgg_type
libOgg_options["lang"] = libOgg_lang
libOgg_options["includedirs"] = libOgg_includedirs
libOgg_options["defines"] = {libOgg_defines}
libOgg_options["sources"] = libOgg_sources
