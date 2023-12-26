-- Imports
require "common"
require "libOgg"

-- Configuration
libFlac_name = "Flac"
libFlac_target = "Flac"
libFlac_type = "StaticLib"
libFlac_lang = "C"
libFlac_extradir = "../Libs/Flac/extra/"
libFlac_origdir = "../Libs/Flac/orig/"
libFlac_srcdir = libFlac_origdir .. "src/libFLAC/"
libFlac_incdir = libFlac_origdir .. "src/libFLAC/include/"
libFlac_incdir_ex = libFlac_origdir .. "include/"

-- Includes
libFlac_includedirs = {
    libFlac_origdir,
    libFlac_incdir,
    libFlac_incdir_ex,
    libOgg_includedirs
}

-- Defines
libFlac_defines = {
    "HAVE_CONFIG_H",
    "SIZE_T_MAX=UINT_MAX",
    "FLAC__NO_DLL"
}

-- Sources
libFlac_sources = {
    libFlac_srcdir .. "bitmath.c",
    libFlac_srcdir .. "bitreader.c",
    libFlac_srcdir .. "bitwriter.c",
    libFlac_srcdir .. "cpu.c",
    libFlac_srcdir .. "crc.c",
    libFlac_srcdir .. "fixed.c",
    libFlac_srcdir .. "float.c",
    libFlac_srcdir .. "format.c",
    libFlac_srcdir .. "lpc.c",
    libFlac_srcdir .. "md5.c",
    libFlac_srcdir .. "memory.c",
    libFlac_srcdir .. "metadata_iterators.c",
    libFlac_srcdir .. "metadata_object.c",
    libFlac_srcdir .. "ogg_decoder_aspect.c",
    libFlac_srcdir .. "ogg_encoder_aspect.c",
    libFlac_srcdir .. "ogg_helper.c",
    libFlac_srcdir .. "ogg_mapping.c",
    libFlac_srcdir .. "stream_decoder.c",
    libFlac_srcdir .. "stream_encoder.c",
    libFlac_srcdir .. "stream_encoder_framing.c",
    libFlac_srcdir .. "window.c",
}

-- Options
libFlac_options = {}
libFlac_options["type"] = libFlac_type
libFlac_options["lang"] = libFlac_lang
libFlac_options["includedirs"] = libFlac_includedirs
libFlac_options["defines"] = {libFlac_defines, libOgg_defines}
libFlac_options["sources"] = libFlac_sources
