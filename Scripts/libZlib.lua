-- Imports
require "common"

-- Configuration
libZlib_name = "Zlib"
libZlib_target = "Zlib"
libZlib_type = "StaticLib"
libZlib_lang = "C"
libZlib_extradir = "../Libs/Zlib/extra/"
libZlib_origdir = "../Libs/Zlib/orig/"
libZlib_srcdir = libZlib_origdir
libZlib_incdir = libZlib_origdir

-- Includes
libZlib_includedirs = {
    libZlib_incdir,
}

-- Defines
libZlib_defines = {
}

-- Sources
libZlib_sources = {
    libZlib_srcdir .. "adler32.c",
    libZlib_srcdir .. "compress.c",
    libZlib_srcdir .. "crc32.c",
    libZlib_srcdir .. "deflate.c",
    libZlib_srcdir .. "gzclose.c",
    libZlib_srcdir .. "gzlib.c",
    libZlib_srcdir .. "gzread.c",
    libZlib_srcdir .. "gzwrite.c",
    libZlib_srcdir .. "infback.c",
    libZlib_srcdir .. "inffast.c",
    libZlib_srcdir .. "inflate.c",
    libZlib_srcdir .. "inftrees.c",
    libZlib_srcdir .. "trees.c",
    libZlib_srcdir .. "uncompr.c",
    libZlib_srcdir .. "zutil.c",
}

-- Options
libZlib_options = {}
libZlib_options["type"] = libZlib_type
libZlib_options["lang"] = libZlib_lang
libZlib_options["includedirs"] = libZlib_includedirs
libZlib_options["defines"] = {libZlib_defines, libZlib_defines}
libZlib_options["sources"] = libZlib_sources
