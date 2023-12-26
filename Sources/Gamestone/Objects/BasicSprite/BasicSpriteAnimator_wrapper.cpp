// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimator_wrapper.h>

//===============================================================================================
void register_BasicSpriteAnimator()
{
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::BasicSpriteAnimator, "BasicSpriteAnimator")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::SetAnimating, "SetAnimating")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::IsAnimating, "IsAnimating")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::AddAnimation, "AddAnimation")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::PlayAnimation, "PlayAnimation")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::StopAnimation, "StopAnimation")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::IsPlayingAnimation, "IsPlayingAnimation")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSpriteAnimator::GetPlayingAnimation, "GetPlayingAnimation")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
