-- Imports
require "common"

-- Configuration
libOpenALSoftCommon_name = "OpenALSoftCommon"
libOpenALSoftMain_name = "OpenALSoftMain"
libOpenALSoft_type = "StaticLib"
libOpenALSoft_lang = "C"
libOpenALSoft_extradir = "../Libs/OpenALSoft/extra/"
libOpenALSoft_origdir = "../Libs/OpenALSoft/orig/"
libOpenALSoft_srcdir = libOpenALSoft_origdir
libOpenALSoft_incdir = libOpenALSoft_origdir .. "include/"
libOpenALSoft_incdir_al = libOpenALSoft_origdir .. "include/AL/"
libOpenALSoft_incdir_alc = libOpenALSoft_origdir .. "Alc"
libOpenALSoft_incdir_openal32 = libOpenALSoft_origdir .. "OpenAL32/include/"

-- Includes
libOpenALSoft_includedirs = {
    libOpenALSoft_origdir,
    libOpenALSoft_incdir,
    libOpenALSoft_incdir_al,
    libOpenALSoft_incdir_alc,
    libOpenALSoft_incdir_openal32,
}

-- Defines
libOpenALSoft_defines = {
    "AL_LIBTYPE_STATIC",
    "AL_ALEXT_PROTOTYPES",
    "AL_BUILD_LIBRARY",
}

-- Sources
libOpenALSoftCommon_sources = {
    libOpenALSoft_srcdir .. "common/atomic.c",
    libOpenALSoft_srcdir .. "common/rwlock.c",
    libOpenALSoft_srcdir .. "common/threads.c",
    libOpenALSoft_srcdir .. "common/uintmap.c",
}
libOpenALSoftOpenAL32_sources = {
    libOpenALSoft_srcdir .. "OpenAL32/alAuxEffectSlot.c",
    libOpenALSoft_srcdir .. "OpenAL32/alBuffer.c",
    libOpenALSoft_srcdir .. "OpenAL32/alEffect.c",
    libOpenALSoft_srcdir .. "OpenAL32/alError.c",
    libOpenALSoft_srcdir .. "OpenAL32/alExtension.c",
    libOpenALSoft_srcdir .. "OpenAL32/alFilter.c",
    libOpenALSoft_srcdir .. "OpenAL32/alFontsound.c",
    libOpenALSoft_srcdir .. "OpenAL32/alListener.c",
    libOpenALSoft_srcdir .. "OpenAL32/alMidi.c",
    libOpenALSoft_srcdir .. "OpenAL32/alPreset.c",
    libOpenALSoft_srcdir .. "OpenAL32/alSoundfont.c",
    libOpenALSoft_srcdir .. "OpenAL32/alSource.c",
    libOpenALSoft_srcdir .. "OpenAL32/alState.c",
    libOpenALSoft_srcdir .. "OpenAL32/alThunk.c",
    libOpenALSoft_srcdir .. "OpenAL32/sample_cvt.c",
}
libOpenALSoftALc_sources = {
    libOpenALSoft_srcdir .. "ALc/ALc.c",
    libOpenALSoft_srcdir .. "ALc/ALu.c",
    libOpenALSoft_srcdir .. "ALc/alcConfig.c",
    libOpenALSoft_srcdir .. "ALc/alcRing.c",
    libOpenALSoft_srcdir .. "ALc/bs2b.c",
    libOpenALSoft_srcdir .. "ALc/effects/autowah.c",
    libOpenALSoft_srcdir .. "ALc/effects/chorus.c",
    libOpenALSoft_srcdir .. "ALc/effects/compressor.c",
    libOpenALSoft_srcdir .. "ALc/effects/dedicated.c",
    libOpenALSoft_srcdir .. "ALc/effects/distortion.c",
    libOpenALSoft_srcdir .. "ALc/effects/echo.c",
    libOpenALSoft_srcdir .. "ALc/effects/equalizer.c",
    libOpenALSoft_srcdir .. "ALc/effects/flanger.c",
    libOpenALSoft_srcdir .. "ALc/effects/modulator.c",
    libOpenALSoft_srcdir .. "ALc/effects/null.c",
    libOpenALSoft_srcdir .. "ALc/effects/reverb.c",
    libOpenALSoft_srcdir .. "ALc/helpers.c",
    libOpenALSoft_srcdir .. "ALc/hrtf.c",
    libOpenALSoft_srcdir .. "ALc/panning.c",
    libOpenALSoft_srcdir .. "ALc/mixer.c",
    libOpenALSoft_srcdir .. "ALc/mixer_c.c",
    libOpenALSoft_srcdir .. "ALc/midi/base.c",
    libOpenALSoft_srcdir .. "ALc/midi/sf2load.c",
    libOpenALSoft_srcdir .. "ALc/midi/dummy.c",
    libOpenALSoft_srcdir .. "ALc/midi/fluidsynth.c",
    libOpenALSoft_srcdir .. "ALc/midi/soft.c",
    libOpenALSoft_extradir .. "backends.c",
    libOpenALSoft_extradir .. "mixers.c",
}

-- Excludes
libOpenALSoft_excludes = {
}

-- Options
libOpenALSoft_options = {}
libOpenALSoft_options["type"] = libOpenALSoft_type
libOpenALSoft_options["lang"] = libOpenALSoft_lang
libOpenALSoft_options["includedirs"] = libOpenALSoft_includedirs
if os.get() ~= "windows" then
    libOpenALSoft_options["defines"] = {
        libOpenALSoft_defines
    }
else
    libOpenALSoft_options["defines"] = {
        libOpenALSoft_defines,
        "strcasecmp=_stricmp",
        "strncasecmp=_strnicmp",
        "snprintf=_snprintf"
    }
end
libOpenALSoftCommon_options = table.shallow_copy(libOpenALSoft_options)
libOpenALSoftMain_options = table.shallow_copy(libOpenALSoft_options)
libOpenALSoftCommon_options["sources"] = libOpenALSoftCommon_sources
libOpenALSoftMain_options["sources"] = {libOpenALSoftOpenAL32_sources, libOpenALSoftALc_sources}
