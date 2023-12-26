// Title: Animatable

// Gamestone Engine
// Licensed under the LGPL
#ifndef ANIMATABLE_H
#define ANIMATABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Animatable
    // Animatable property
    class Animatable
    {
    public:
        
        // Method: SetAnimating
        // Sets animating status
        //
        // Parameters:
        // animating - Animating status
        virtual void SetAnimating(Bool animating) = 0;
        
        // Method: IsAnimating
        // Gets animating status
        //
        // Returns:
        // Animating status
        virtual Bool IsAnimating() const = 0;
    };
};

#endif
