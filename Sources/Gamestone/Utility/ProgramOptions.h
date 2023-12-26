// Title: ProgramOptions

// Gamestone Engine
// Licensed under the LGPL
#ifndef PROGRAMOPTIONS_H
#define PROGRAMOPTIONS_H

// System includes
#include <boost/program_options.hpp>

// Define: ProgramOptionsDescription
// Program options description
#define ProgramOptionsDescription boost::program_options::options_description

// Define: ProgramOptionsPositional
// Program options positional arguments
#define ProgramOptionsPositional boost::program_options::positional_options_description

// Define: ProgramOptionsMap
// Program options option mapping
#define ProgramOptionsMap boost::program_options::variables_map

// Define: ProgramOptionsParse
// Program options command line parser
#define ProgramOptionsParse boost::program_options::basic_command_line_parser<char>

// Define: ProgramOptionsValue
// Program options argument value
#define ProgramOptionsValue boost::program_options::value

// Define: ProgramOptionsStore
// Program options argument store
#define ProgramOptionsStore boost::program_options::store

// Define: ProgramOptionsNotify
// Program options notification
#define ProgramOptionsNotify boost::program_options::notify

#endif
