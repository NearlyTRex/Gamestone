// Title: Assert

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef ASSERT_H
#define ASSERT_H

// Asserts
// https://github.com/gpakosz/Assert

// Enable or disable assertions
// Otherwise enabled state is based on NDEBUG
//#define PPK_ASSERT_ENABLED 0
//#define PPK_ASSERT_ENABLED 1
#define PPK_ASSERT_ENABLED 1

// Default level to use when using the assert macros
//#define PPK_ASSERT_DEFAULT_LEVEL Warning
//#define PPK_ASSERT_DEFAULT_LEVEL Debug
//#define PPK_ASSERT_DEFAULT_LEVEL Error
//#define PPK_ASSERT_DEFAULT_LEVEL Fatal

// AssertionException won't inherit from std::exception
//#define PPK_ASSERT_DISABLE_STL 0
//#define PPK_ASSERT_DISABLE_STL 1

// Disable exceptions on error level and instead rely on user provided exceptions
//#define PPK_ASSERT_DISABLE_EXCEPTIONS 0
//#define PPK_ASSERT_DISABLE_EXCEPTIONS 1

// Enable stdin input on default handler
//#define PPK_ASSERT_DEFAULT_HANDLER_STDIN 0
//#define PPK_ASSERT_DEFAULT_HANDLER_STDIN 1
#define PPK_ASSERT_DEFAULT_HANDLER_STDIN 1

// Log file for the default assert handler
//#define PPK_ASSERT_LOG_FILE "/tmp/assert.txt"
#define PPK_ASSERT_LOG_FILE "Assert.txt"

// Truncate the log file upon each program invocation
//#define PPK_ASSERT_LOG_FILE_TRUNCATE 0
//#define PPK_ASSERT_LOG_FILE_TRUNCATE 1
#define PPK_ASSERT_LOG_FILE_TRUNCATE 1

// Include assert library
#include <pempek_assert.h>

// This library defines different levels of severity:
// PPK_ASSERT_WARNING
// PPK_ASSERT_DEBUG
// PPK_ASSERT_ERROR
// PPK_ASSERT_FATAL
// 
// When you use PPK_ASSERT, the severity level
// is determined by the PPK_ASSERT_DEFAULT_LEVEL preprocessor token.
//
// The default handler associates a predefined behavior to each of the different levels:
// WARNING <= level < DEBUG: print the assertion message to stderr
// DEBUG <= level < ERROR: print the assertion message to stderr and prompt the user for action (disabled by default on iOS and Android)
// ERROR <= level < FATAL: throw an AssertionException
// FATAL < level: abort the program

// Expression based assert macros
// Provides printf like message interface
//   PPK_ASSERT(expression);
//   PPK_ASSERT(expression, message, ...);
#define ASSERT                PPK_ASSERT
#define ASSERT_WARNING        PPK_ASSERT_WARNING
#define ASSERT_DEBUG          PPK_ASSERT_DEBUG
#define ASSERT_ERROR          PPK_ASSERT_ERROR
#define ASSERT_FATAL          PPK_ASSERT_FATAL
#define ASSERT_CUSTOM         PPK_ASSERT_CUSTOM

// Unused function return value assert macros
// Does not provide custom messaging
//   PPK_ASSERT_USED(int) foo();
#define ASSERT_USED           PPK_ASSERT_USED
#define ASSERT_USED_WARNING   PPK_ASSERT_USED_WARNING
#define ASSERT_USED_DEBUG     PPK_ASSERT_USED_DEBUG
#define ASSERT_USED_ERROR     PPK_ASSERT_USED_ERROR
#define ASSERT_USED_FATAL     PPK_ASSERT_USED_FATAL
#define ASSERT_USED_CUSTOM    PPK_ASSERT_USED_CUSTOM

// Compile time assert macros
// Provides only single string messaging
//   PPK_STATIC_ASSERT(expression)
//   PPK_STATIC_ASSERT(expression, message)
#define STATIC_ASSERT         PPK_STATIC_ASSERT

#endif
