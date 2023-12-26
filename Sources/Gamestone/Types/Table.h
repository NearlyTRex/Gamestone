// Title: Table

// Gamestone Engine
// Licensed under the LGPL
#ifndef TABLE_H
#define TABLE_H

// Standard includes
#include <map>
#include <unordered_map>

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Define: OrderedTable
// Ordered associative container based on key/value pairs
#define OrderedTable std::map

// Define: UnorderedTable
// Unordered associative container based on key/value pairs
#define UnorderedTable std::unordered_map

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: OrderedTableStrStr
    // Ordered table of string -> string
    typedef OrderedTable<String, String> OrderedTableStrStr;
    
    // Type: UnorderedTableStrStr
    // Unordered table of string -> string
    typedef UnorderedTable<String, String> UnorderedTableStrStr;
};

#endif
