-- Imports
require "common"

-- Configuration
libSQLite_name = "SQLite"
libSQLite_target = "SQLite"
libSQLite_type = "StaticLib"
libSQLite_lang = "C"
libSQLite_extradir = "../Libs/SQLite/extra/"
libSQLite_origdir = "../Libs/SQLite/orig/"
libSQLite_srcdir = libSQLite_origdir
libSQLite_incdir = libSQLite_origdir

-- Includes
libSQLite_includedirs = {
    libSQLite_incdir,
}

-- Defines
libSQLite_defines = {
}

-- Sources
libSQLite_sources = {
    libSQLite_srcdir .. "sqlite3.c",
}

-- Options
libSQLite_options = {}
libSQLite_options["type"] = libSQLite_type
libSQLite_options["lang"] = libSQLite_lang
libSQLite_options["includedirs"] = libSQLite_includedirs
libSQLite_options["defines"] = {libSQLite_defines}
libSQLite_options["sources"] = libSQLite_sources
