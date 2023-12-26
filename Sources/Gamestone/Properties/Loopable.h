// Title: Loopable

// Gamestone Engine
// Licensed under the LGPL
#ifndef LOOPABLE_H
#define LOOPABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Loopable
    // Loopable property
    class Loopable
    {
    public:
        
        // Method: SetLooping
        // Sets animating status
        //
        // Parameters:
        // looping - Looping status
        virtual void SetLooping(Bool looping) = 0;
        
        // Method: IsLooping
        // Gets animating status
        //
        // Returns:
        // Looping status
        virtual Bool IsLooping() const = 0;
    };
};

#endif
