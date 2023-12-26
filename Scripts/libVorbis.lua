-- Imports
require "common"

-- Configuration
libVorbis_name = "Vorbis"
libVorbis_target = "Vorbis"
libVorbis_type = "StaticLib"
libVorbis_lang = "C"
libVorbis_extradir = "../Libs/Vorbis/extra/"
libVorbis_origdir = "../Libs/Vorbis/orig/"
libVorbis_srcdir = libVorbis_origdir .. "lib/"
libVorbis_incdir = libVorbis_origdir .. "include/"
libVorbis_incdir_ogg = "../Libs/Ogg/orig/include/" -- To remove circular dependency

-- Includes
libVorbis_includedirs = {
    libVorbis_incdir,
    libVorbis_srcdir,
    libVorbis_incdir_ogg
}

-- Defines
libVorbis_defines = {
}

-- Sources
libVorbis_sources = {
    libVorbis_srcdir .. "analysis.c",
    libVorbis_srcdir .. "bitrate.c",
    libVorbis_srcdir .. "block.c",
    libVorbis_srcdir .. "codebook.c",
    libVorbis_srcdir .. "envelope.c",
    libVorbis_srcdir .. "floor0.c",
    libVorbis_srcdir .. "floor1.c",
    libVorbis_srcdir .. "info.c",
    libVorbis_srcdir .. "lookup.c",
    libVorbis_srcdir .. "lpc.c",
    libVorbis_srcdir .. "lsp.c",
    libVorbis_srcdir .. "mapping0.c",
    libVorbis_srcdir .. "mdct.c",
    libVorbis_srcdir .. "psy.c",
    libVorbis_srcdir .. "registry.c",
    libVorbis_srcdir .. "res0.c",
    libVorbis_srcdir .. "sharedbook.c",
    libVorbis_srcdir .. "smallft.c",
    libVorbis_srcdir .. "synthesis.c",
    libVorbis_srcdir .. "vorbisenc.c",
    libVorbis_srcdir .. "vorbisfile.c",
    libVorbis_srcdir .. "window.c",
}

-- Options
libVorbis_options = {}
libVorbis_options["type"] = libVorbis_type
libVorbis_options["lang"] = libVorbis_lang
libVorbis_options["includedirs"] = libVorbis_includedirs
libVorbis_options["defines"] = {libVorbis_defines, libOgg_defines}
libVorbis_options["sources"] = libVorbis_sources
