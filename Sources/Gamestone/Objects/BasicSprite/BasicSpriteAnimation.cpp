// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimation.h>

//===============================================================================================
Gamestone::BasicSpriteAnimation::BasicSpriteAnimation()
{
}
//===============================================================================================
Gamestone::BasicSpriteAnimation::~BasicSpriteAnimation()
{
}
//===============================================================================================
void Gamestone::BasicSpriteAnimation::operator()(Sprite& target, Float progress) const
{
}
//===============================================================================================


//===============================================================================================
Gamestone::BasicSpriteFrameAnimation::BasicSpriteFrameAnimation():
    BasicSpriteAnimation(),
    mAnimation()
{
}
//===============================================================================================
Gamestone::BasicSpriteFrameAnimation::~BasicSpriteFrameAnimation()
{
}
//===============================================================================================
void Gamestone::BasicSpriteFrameAnimation::AddFrame(Float duration, const RectInt& subrect)
{
    // Add animation
    mAnimation.addFrame(duration, subrect);
}
//===============================================================================================
void Gamestone::BasicSpriteFrameAnimation::operator()(Sprite& target, Float progress) const
{
    // Animates target
    mAnimation(target, progress);
}
//===============================================================================================
