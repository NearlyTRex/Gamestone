// Title: BasicSpriteAnimation

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef BASICSPRITEANIMATION_H
#define BASICSPRITEANIMATION_H

// System includes
#include <Thor/Animations.hpp>

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Types/MathTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: SpriteAnimator
    // Sprite animator type
    typedef thor::Animator<Sprite, String> SpriteAnimator;
    
    // Type: FrameAnimationObject
    // Frame animation type
    typedef thor::FrameAnimation FrameAnimation;
    
    // Class: BasicSpriteAnimation
    // Base class for all sprite animations
    class BasicSpriteAnimation
    {
    public:
        
        // Constructor: BasicSpriteAnimation
        // Default constructor
        BasicSpriteAnimation();
        
        // Destructor: ~BasicSpriteAnimation
        // Destroys object
        virtual ~BasicSpriteAnimation();
        
        // Method: operator()
        // Animates the sprite by setting the texture rect
        //
        // Parameters:
        // target - BasicSprite to animate
        // progress - Current progress on animation
        virtual void operator()(Sprite& target, Float progress) const;
    };
    
    // Class: BasicSpriteFrameAnimation
    // BasicSprite frame animation
    class BasicSpriteFrameAnimation:
        public BasicSpriteAnimation
    {
    public:
        
        // Constructor: BasicSpriteFrameAnimation
        // Default constructor
        BasicSpriteFrameAnimation();
        
        // Destructor: ~BasicSpriteFrameAnimation
        // Destroys object
        virtual ~BasicSpriteFrameAnimation();
        
        // Method: AddFrame
        // Adds frame to the animation with a relative duration
        //
        // Parameters:
        // duration - Relative duration
        // subrect - Rect defining the frame
        virtual void AddFrame(Float duration, const RectInt& subrect);
        
        // Method: operator()
        // Animates the sprite by setting the texture rect
        //
        // Parameters:
        // target - BasicSprite to animate
        // progress - Current progress on animation
        virtual void operator()(Sprite& target, Float progress) const;
        
    private:
        
        // Variable: mAnimation
        // Frame animation object
        FrameAnimation mAnimation;
    };
};

#endif
