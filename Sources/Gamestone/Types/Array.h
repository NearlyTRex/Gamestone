// Title: Array

// Gamestone Engine
// Licensed under the LGPL
#ifndef ARRAY_H
#define ARRAY_H

// Standard includes
#include <vector>

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Define: Array
// Contiguous storage location for values
#define Array std::vector

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: ArrayString
    // Array of string
    typedef Array<String> ArrayString;
};

#endif
