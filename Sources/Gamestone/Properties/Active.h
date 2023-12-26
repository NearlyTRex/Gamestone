// Title: Active

// Gamestone Engine
// Licensed under the LGPL
#ifndef ACTIVE_H
#define ACTIVE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Active
    // Active property
    class Active
    {
    public:
        
        // Method: SetActive
        // Sets active status
        //
        // Parameters:
        // active - Active status
        virtual void SetActive(Bool active) = 0;
        
        // Method: IsActive
        // Gets active status
        //
        // Returns:
        // Active status
        virtual Bool IsActive() const = 0;
    };
};

#endif
