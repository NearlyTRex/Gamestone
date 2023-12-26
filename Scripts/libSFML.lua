-- Imports
require "common"
require "libOpenALSoft"
require "libSndfile"
require "libFreetype"
require "libJpeg"
require "libGlew"

-- Configuration
libSFML_name = "SFML"
libSFML_target = "SFML"
libSFML_type = "StaticLib"
libSFML_lang = "C++"
libSFML_extradir = "../Libs/SFML/extra/"
libSFML_origdir = "../Libs/SFML/orig/"
libSFML_srcdir = libSFML_origdir .. "src/SFML/"
libSFML_incdir = libSFML_origdir .. "include/"
libSFML_incdir_ex = libSFML_origdir .. "src/"

-- Includes
libSFML_includedirs = {
    libSFML_incdir,
    libSFML_incdir_ex,
    libOpenALSoft_includedirs,
    libSndfile_includedirs,
    libFreetype_includedirs,
    libJpeg_includedirs,
    libGlew_includedirs
}

-- Defines
libSFML_defines = {
    "SFML_STATIC"
}
if os.get() == "windows" then
    table.insert(libSFML_defines, "UNICODE")
end

-- Sources
libSFML_sources = {
    libSFML_srcdir .. "**.cpp",
    libSFML_extradir .. "*"
}

-- Excludes
libSFML_excludes = {
    libSFML_srcdir .. "Main/*",
    libSFML_srcdir .. "Network/Unix/*",
    libSFML_srcdir .. "Network/Win32/*",
    libSFML_srcdir .. "System/Android/*",
    libSFML_srcdir .. "System/Unix/*",
    libSFML_srcdir .. "System/Win32/*",
    libSFML_srcdir .. "Window/Android/*",
    libSFML_srcdir .. "Window/FreeBSD/*",
    libSFML_srcdir .. "Window/iOS/*",
    libSFML_srcdir .. "Window/OSX/*",
    libSFML_srcdir .. "Window/Unix/*",
    libSFML_srcdir .. "Window/Win32/*",
    libSFML_srcdir .. "Window/EGLCheck.cpp",
    libSFML_srcdir .. "Window/EglContext.cpp"
}

-- Flags
libSFML_buildoptions = {
}
libSFML_linkoptions = {
}

-- Options
libSFML_options = {}
libSFML_options["type"] = libSFML_type
libSFML_options["lang"] = libSFML_lang
libSFML_options["includedirs"] = libSFML_includedirs
libSFML_options["defines"] = {libSFML_defines, libOpenALSoft_defines, libSndfile_defines, libFreetype_defines, libJpeg_defines, libGlew_defines}
libSFML_options["sources"] = libSFML_sources
libSFML_options["excludes"] = libSFML_excludes
libSFML_options["buildoptions"] = libSFML_buildoptions
libSFML_options["linkoptions"] = libSFML_linkoptions
