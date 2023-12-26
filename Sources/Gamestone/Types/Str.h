// Title: Str

// Gamestone Engine
// Licensed under the LGPL
#ifndef STR_H
#define STR_H

// Standard includes
#include <algorithm>
#include <string>
#include <sstream>
#include <ostream>
#include <istream>

// System includes
#include <boost/lexical_cast.hpp>
#include <boost/format.hpp>

// Define: StringNoPos
// String no position value
#define StringNoPos std::string::npos

// Define: StringCast
// Lexical cast between string and other integral types
#define StringCast boost::lexical_cast

// Define: OutputStream
// Output stream
#define OutputStream std::ostream

// Define: InputStream
// Input stream
//#define InputStream std::istream

// Define: DecFormat
// Decimal formatting
#define DecFormat std::dec

// Define: HexFormat
// Hexademical formatting
#define HexFormat std::hex

// Define: OctFormat
// Octal formatting
#define OctFormat std::oct

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: String
    // Basic string type
    typedef std::string String;
    
    // Type: StringSize
    // Basic string size type
    typedef std::string::size_type StringSizeType;
    
    // Type: WideString
    // Basic wide string type
    typedef std::wstring WideString;
    
    // Type: WideStringSize
    // Basic wide string size type
    typedef std::wstring::size_type WideStringSizeType;
    
    // Type: StringStream
    // String stream type
    typedef std::stringstream StringStream;
};

#endif
