// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/Collision_wrapper.h>

//===============================================================================
void register_Collision()
{
    // Expose methods
    REGISTER_FUNCTION(Gamestone::CircleCollisionTest, "CircleCollisionTest")
    REGISTER_FUNCTION(Gamestone::OrientedBoxCollisionTest, "OrientedBoxCollisionTest")
}
//===============================================================================
