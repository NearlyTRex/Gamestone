-- Imports
require "common"

-- Configuration
libFreetype_name = "Freetype"
libFreetype_target = "Freetype"
libFreetype_type = "StaticLib"
libFreetype_lang = "C"
libFreetype_extradir = "../Libs/Freetype/extra/"
libFreetype_origdir = "../Libs/Freetype/orig/"
libFreetype_srcdir = libFreetype_origdir .. "src/"
libFreetype_incdir = libFreetype_origdir .. "include/"

-- Includes
libFreetype_includedirs = {
    libFreetype_incdir,
}

-- Defines
libFreetype_defines = {
    "FT2_BUILD_LIBRARY"
}

-- Sources
libFreetype_sources = {
    libFreetype_srcdir .. "autofit/autofit.c",
    libFreetype_srcdir .. "base/ftbase.c",
    libFreetype_srcdir .. "base/ftbitmap.c",
    libFreetype_srcdir .. "base/ftinit.c",
    libFreetype_srcdir .. "base/ftglyph.c",
    libFreetype_srcdir .. "base/ftsystem.c",
    libFreetype_srcdir .. "bdf/bdf.c",
    libFreetype_srcdir .. "cache/ftcache.c",
    libFreetype_srcdir .. "cff/cff.c",
    libFreetype_srcdir .. "cid/cidgload.c",
    libFreetype_srcdir .. "cid/cidload.c",
    libFreetype_srcdir .. "cid/cidobjs.c",
    libFreetype_srcdir .. "cid/cidparse.c",
    libFreetype_srcdir .. "cid/cidriver.c",
    libFreetype_srcdir .. "gxvalid/gxvalid.c",
    libFreetype_srcdir .. "gzip/ftgzip.c",
    libFreetype_srcdir .. "lzw/ftlzw.c",
    libFreetype_srcdir .. "otvalid/otvalid.c",
    libFreetype_srcdir .. "pcf/pcf.c",
    libFreetype_srcdir .. "pfr/pfr.c",
    libFreetype_srcdir .. "psaux/psaux.c",
    libFreetype_srcdir .. "pshinter/pshinter.c",
    libFreetype_srcdir .. "psnames/psnames.c",
    libFreetype_srcdir .. "raster/raster.c",
    libFreetype_srcdir .. "sfnt/sfnt.c",
    libFreetype_srcdir .. "smooth/smooth.c",
    libFreetype_srcdir .. "truetype/truetype.c",
    libFreetype_srcdir .. "type1/type1.c",
    libFreetype_srcdir .. "type42/type42.c",
    libFreetype_srcdir .. "winfonts/winfnt.c",
}

-- Options
libFreetype_options = {}
libFreetype_options["type"] = libFreetype_type
libFreetype_options["lang"] = libFreetype_lang
libFreetype_options["includedirs"] = libFreetype_includedirs
libFreetype_options["defines"] = {libFreetype_defines}
libFreetype_options["sources"] = libFreetype_sources
