-- Imports
require "common"
require "libFlac"
require "libVorbis"
require "libOgg"

-- Configuration
libSndfile_name = "Sndfile"
libSndfile_target = "Sndfile"
libSndfile_type = "StaticLib"
libSndfile_lang = "C"
libSndfile_extradir = "../Libs/Sndfile/extra/"
libSndfile_origdir = "../Libs/Sndfile/orig/"
libSndfile_srcdir = libSndfile_origdir .. "src/"
libSndfile_incdir = libSndfile_srcdir

-- Includes
libSndfile_includedirs = {
    libSndfile_incdir,
    libFlac_includedirs,
    libVorbis_includedirs,
    libOgg_includedirs
}

-- Defines
libSndfile_defines = {
}

-- Sources
libSndfile_sources = {
    libSndfile_srcdir .. "**.c",
    libSndfile_extradir .. "*.c"
}

-- Excludes
libSndfile_excludes = {
    libSndfile_srcdir .. "G72x/g72x.c",
}

-- Options
libSndfile_options = {}
libSndfile_options["type"] = libSndfile_type
libSndfile_options["lang"] = libSndfile_lang
libSndfile_options["includedirs"] = libSndfile_includedirs
libSndfile_options["defines"] = {libSndfile_defines}
if os.get() ~= "windows" then
    libSndfile_options["sources"] = libSndfile_sources
    libSndfile_options["excludes"] = libSndfile_excludes
end
