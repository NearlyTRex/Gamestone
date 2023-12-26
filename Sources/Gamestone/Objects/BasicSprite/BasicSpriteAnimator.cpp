// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimator.h>

//==================================================================================
Gamestone::BasicSpriteAnimator::BasicSpriteAnimator():
    SpriteAnimator(),
    mAnimating(false)
{
}
//==================================================================================
Gamestone::BasicSpriteAnimator::~BasicSpriteAnimator()
{
}
//==================================================================================
void Gamestone::BasicSpriteAnimator::SetAnimating(Bool animating)
{
    // Set animating status
    mAnimating = animating;
}
//==================================================================================
Gamestone::Bool Gamestone::BasicSpriteAnimator::IsAnimating() const
{
    // Get animating status
    return mAnimating;
}
//==================================================================================
void Gamestone::BasicSpriteAnimator::AddAnimation(const String& name, const BasicSpriteAnimation& animation, Float duration)
{
    // Add animation
    SpriteAnimator::addAnimation(name, animation, CreateTimeFromSeconds(duration));
}
//==================================================================================
void Gamestone::BasicSpriteAnimator::PlayAnimation(const String& name, Bool loop)
{
    // Play animation
    SpriteAnimator::playAnimation(name, loop);
}
//==================================================================================
void Gamestone::BasicSpriteAnimator::StopAnimation()
{
    // Stop animation
    SpriteAnimator::stopAnimation();
}
//==================================================================================
Gamestone::Bool Gamestone::BasicSpriteAnimator::IsPlayingAnimation() const
{
    // Check whether an animation is currently playing
    return SpriteAnimator::isPlayingAnimation();
}
//==================================================================================
Gamestone::String Gamestone::BasicSpriteAnimator::GetPlayingAnimation() const
{
    // Get current playing animation
    return SpriteAnimator::getPlayingAnimation();
}
//==================================================================================
