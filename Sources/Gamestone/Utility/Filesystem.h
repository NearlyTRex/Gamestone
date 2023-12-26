// Title: Filesystem

// Gamestone Engine
// Licensed under the LGPL
#ifndef FILESYSTEM_H
#define FILESYSTEM_H

// Standard includes
#include <iostream>
#include <fstream>

// System includes
#include <boost/filesystem.hpp>

// Local includes
#include <Gamestone/Types/Str.h>

// Define: FilesystemPath
// Filesystem path specifier
#define FilesystemPath boost::filesystem::path

// Define: FilesystemAbsolute
// Defines an absolute filesystem path
#define FilesystemAbsolute boost::filesystem::absolute

// Define: FilesystemExists
// Determines if filesystem path exists
#define FilesystemExists boost::filesystem::exists

// Define: FilesystemIsDir
// Determines if filesystem path is a directory
#define FilesystemIsDir boost::filesystem::is_directory

// Define: FilesystemIsFile
// Determines if filesystem path is a file
#define FilesystemIsFile boost::filesystem::is_regular_file

// Define: FilesystemIsEmpty
// Determines if filesystem path is empty
#define FilesystemIsEmpty boost::filesystem::is_empty

#endif
