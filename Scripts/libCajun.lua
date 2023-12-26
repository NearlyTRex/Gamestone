-- Imports
require "common"

-- Configuration
libCajun_name = "Cajun"
libCajun_target = "Cajun"
libCajun_type = "StaticLib"
libCajun_lang = "C++"
libCajun_extradir = "../Libs/Cajun/extra/"
libCajun_origdir = "../Libs/Cajun/orig/"
libCajun_srcdir = libCajun_origdir .. "json/"
libCajun_incdir = libCajun_srcdir

-- Includes
libCajun_includedirs = {
   libCajun_incdir,
}

-- Defines
libCajun_defines = {
}

-- Sources
libCajun_sources = {
}

-- Options
libCajun_options = {}
libCajun_options["type"] = libCajun_type
libCajun_options["lang"] = libCajun_lang
libCajun_options["includedirs"] = libCajun_includedirs
libCajun_options["defines"] = {libCajun_defines}
libCajun_options["sources"] = libCajun_sources
