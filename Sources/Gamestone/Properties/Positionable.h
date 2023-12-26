// Title: Positionable

// Gamestone Engine
// Licensed under the LGPL
#ifndef POSITIONABLE_H
#define POSITIONABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Positionable
    // Positionable property
    class Positionable
    {
    public:
        
        // Method: GetPosition
        // Gets current position
        //
        // Returns:
        // Current position
        virtual Vector2f GetPosition() const = 0;
    };
};

#endif
