// Title: Valid

// Gamestone Engine
// Licensed under the LGPL
#ifndef VALID_H
#define VALID_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Valid
    // Valid property
    class Valid
    {
    public:
        
        // Method: SetValid
        // Sets validity status
        //
        // Parameters:
        // valid - Valid status
        virtual void SetValid(Bool valid) = 0;
        
        // Method: IsValid
        // Gets validity status
        //
        // Returns:
        // Validity status
        virtual Bool IsValid() const = 0;
    };
};

#endif
