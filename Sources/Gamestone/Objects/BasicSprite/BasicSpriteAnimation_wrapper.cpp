// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimation_wrapper.h>

//===============================================================================================
void register_BasicSpriteAnimation()
{
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::BasicSpriteFrameAnimation, "BasicSpriteFrameAnimation")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteFrameAnimation::AddFrame, "AddFrame")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
