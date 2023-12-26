// Title: SystemTypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef SYSTEMTYPES_H
#define SYSTEMTYPES_H

// System includes
#include <SFML/System.hpp>
#include <boost/pool/pool.hpp>

// Define: CreateTimeFromSeconds
// Create time object from seconds
#define CreateTimeFromSeconds sf::seconds

// Define: CreateTimeFromMilliseconds
// Create time object from milliseconds
#define CreateTimeFromMilliseconds sf::milliseconds

// Define: CreateTimeFromMicroseconds
// Create time object from microseconds
#define CreateTimeFromMicroseconds sf::microseconds

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: Stopwatch
    // Incremental timer clock
    typedef sf::Clock Stopwatch;
    
    // Type: TimeValue
    // Holds specific time value
    typedef sf::Time TimeValue;
    
    // Type: MemoryPool
    // Managed memory pool
    typedef boost::pool<> MemoryPool;
};

#endif
