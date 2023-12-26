// Title: Visible

// Gamestone Engine
// Licensed under the LGPL
#ifndef VISIBLE_H
#define VISIBLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Visible
    // Visible property
    class Visible
    {
    public:
        
        // Method: SetVisible
        // Sets visible status
        //
        // Parameters:
        // visible - Visible status
        virtual void SetVisible(Bool visible) = 0;
        
        // Method: IsVisible
        // Gets visible status
        //
        // Returns:
        // Visible status
        virtual Bool IsVisible() const = 0;
    };
};

#endif
