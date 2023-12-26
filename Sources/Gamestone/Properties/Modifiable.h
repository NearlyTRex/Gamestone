// Title: Modifiable

// Gamestone Engine
// Licensed under the LGPL
#ifndef MODIFIABLE_H
#define MODIFIABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Modifiable
    // Modifiable property
    class Modifiable
    {
    public:
        
        // Method: SetModified
        // Sets modified status
        //
        // Parameters:
        // property - Property to modify
        // modified - Modified status
        virtual void SetModified(Int property, Bool modified) = 0;
        
        // Method: IsModified
        // Gets modified status
        //
        // Parameters:
        // property - Property to check for modification
        //
        // Returns:
        // Modified status
        virtual Bool IsModified(Int property) const = 0;
    };
};

#endif
