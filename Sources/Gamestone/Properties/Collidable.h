// Title: Collidable

// Gamestone Engine
// Licensed under the LGPL
#ifndef COLLIDABLE_H
#define COLLIDABLE_H

// Local includes
#include <Gamestone/Math/CollisionBox.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Collidable
    // Collidable property
    class Collidable
    {
    public:
        
        // Method: GetCollisionBox
        // Get collision box
        //
        // Returns:
        // Collision box
        virtual CollisionBox GetCollisionBox() const = 0;
    };
};

#endif
