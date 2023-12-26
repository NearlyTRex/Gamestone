-- Imports
require "common"

-- Configuration
libJpeg_name = "Jpeg"
libJpeg_target = "Jpeg"
libJpeg_type = "StaticLib"
libJpeg_lang = "C"
libJpeg_extradir = "../Libs/Jpeg/extra/"
libJpeg_origdir = "../Libs/Jpeg/orig/"
libJpeg_srcdir = libJpeg_origdir
libJpeg_incdir = libJpeg_origdir

-- Includes
libJpeg_includedirs = {
    libJpeg_incdir,
}

-- Defines
libJpeg_defines = {
}

-- Sources
libJpeg_sources = {
    libJpeg_srcdir .. "jaricom.c",
    libJpeg_srcdir .. "jcapimin.c",
    libJpeg_srcdir .. "jcapistd.c",
    libJpeg_srcdir .. "jcarith.c",
    libJpeg_srcdir .. "jccoefct.c",
    libJpeg_srcdir .. "jccolor.c",
    libJpeg_srcdir .. "jcdctmgr.c",
    libJpeg_srcdir .. "jchuff.c",
    libJpeg_srcdir .. "jcinit.c",
    libJpeg_srcdir .. "jcmainct.c",
    libJpeg_srcdir .. "jcmarker.c",
    libJpeg_srcdir .. "jcmaster.c",
    libJpeg_srcdir .. "jcomapi.c",
    libJpeg_srcdir .. "jcparam.c",
    libJpeg_srcdir .. "jcprepct.c",
    libJpeg_srcdir .. "jcsample.c",
    libJpeg_srcdir .. "jctrans.c",
    libJpeg_srcdir .. "jdapimin.c",
    libJpeg_srcdir .. "jdapistd.c",
    libJpeg_srcdir .. "jdatadst.c",
    libJpeg_srcdir .. "jdatasrc.c",
    libJpeg_srcdir .. "jdcoefct.c",
    libJpeg_srcdir .. "jdcolor.c",
    libJpeg_srcdir .. "jddctmgr.c",
    libJpeg_srcdir .. "jdhuff.c",
    libJpeg_srcdir .. "jdinput.c",
    libJpeg_srcdir .. "jdmainct.c",
    libJpeg_srcdir .. "jdmarker.c",
    libJpeg_srcdir .. "jdmaster.c",
    libJpeg_srcdir .. "jdmerge.c",
    libJpeg_srcdir .. "jdpostct.c",
    libJpeg_srcdir .. "jdsample.c",
    libJpeg_srcdir .. "jdtrans.c",
    libJpeg_srcdir .. "jerror.c",
    libJpeg_srcdir .. "jfdctflt.c",
    libJpeg_srcdir .. "jfdctfst.c",
    libJpeg_srcdir .. "jfdctint.c",
    libJpeg_srcdir .. "jidctflt.c",
    libJpeg_srcdir .. "jidctfst.c",
    libJpeg_srcdir .. "jidctint.c",
    libJpeg_srcdir .. "jmemmgr.c",
    libJpeg_srcdir .. "jmemnobs.c",
    libJpeg_srcdir .. "jquant1.c",
    libJpeg_srcdir .. "jquant2.c",
    libJpeg_srcdir .. "jutils.c",
}

-- Options
libJpeg_options = {}
libJpeg_options["type"] = libJpeg_type
libJpeg_options["lang"] = libJpeg_lang
libJpeg_options["includedirs"] = libJpeg_includedirs
libJpeg_options["defines"] = {libJpeg_defines}
libJpeg_options["sources"] = libJpeg_sources
