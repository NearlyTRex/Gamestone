-- Imports
require "common"

-- Configuration
libBox2D_name = "Box2D"
libBox2D_target = "Box2D"
libBox2D_type = "StaticLib"
libBox2D_lang = "C++"
libBox2D_extradir = "../Libs/Box2D/extra/"
libBox2D_origdir = "../Libs/Box2D/orig/"
libBox2D_srcdir = libBox2D_origdir .. "Box2D/Box2D/"
libBox2D_incdir = libBox2D_origdir .. "Box2D/"

-- Includes
libBox2D_includedirs = {
   libBox2D_incdir,
}

-- Defines
libBox2D_defines = {
}

-- Sources
libBox2D_sources = {
   libBox2D_srcdir .. "**.cpp",
}

-- Options
libBox2D_options = {}
libBox2D_options["type"] = libBox2D_type
libBox2D_options["lang"] = libBox2D_lang
libBox2D_options["includedirs"] = libBox2D_includedirs
libBox2D_options["defines"] = {libBox2D_defines}
libBox2D_options["sources"] = libBox2D_sources
