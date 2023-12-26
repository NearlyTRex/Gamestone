-- Imports
require "common"
require "libZlib"

-- Configuration
libPng_name = "Png"
libPng_target = "Png"
libPng_type = "StaticLib"
libPng_lang = "C"
libPng_extradir = "../Libs/Png/extra/"
libPng_origdir = "../Libs/Png/orig/"
libPng_srcdir = libPng_origdir
libPng_incdir = libPng_origdir

-- Includes
libPng_includedirs = {
    libPng_incdir,
    libZlib_includedirs
}

-- Defines
libPng_defines = {
    "HAVE_CONFIG_H"
}

-- Sources
libPng_sources = {
    libPng_srcdir .. "png.c",
    libPng_srcdir .. "pngerror.c",
    libPng_srcdir .. "pngget.c",
    libPng_srcdir .. "pngmem.c",
    libPng_srcdir .. "pngpread.c",
    libPng_srcdir .. "pngread.c",
    libPng_srcdir .. "pngrio.c",
    libPng_srcdir .. "pngrtran.c",
    libPng_srcdir .. "pngrutil.c",
    libPng_srcdir .. "pngset.c",
    libPng_srcdir .. "pngtrans.c",
    libPng_srcdir .. "pngwio.c",
    libPng_srcdir .. "pngwrite.c",
    libPng_srcdir .. "pngwtran.c",
}

-- Options
libPng_options = {}
libPng_options["type"] = libPng_type
libPng_options["lang"] = libPng_lang
libPng_options["includedirs"] = libPng_includedirs
libPng_options["defines"] = {libPng_defines, libZlib_defines}
libPng_options["sources"] = libPng_sources
