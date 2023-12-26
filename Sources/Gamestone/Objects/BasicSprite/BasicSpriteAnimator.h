// Title: BasicSpriteAnimator

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef BASICSPRITEANIMATOR_H
#define BASICSPRITEANIMATOR_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/SystemTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Properties/Animatable.h>
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimation.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: BasicSpriteAnimator
    // Manages animations for a sprite
    class BasicSpriteAnimator:
        public SpriteAnimator,
        public Animatable
    {
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: BasicSpriteAnimator
        // Default constructor
        BasicSpriteAnimator();
        
        // Destructor: ~BasicSpriteAnimator
        // Destroys object
        virtual ~BasicSpriteAnimator();
        
    //===========================================================
    // From Gamestone::Animatable
    //===========================================================
    public:
        
        // Method: SetAnimating
        // Sets animating status
        //
        // Parameters:
        // animating - Animating status
        virtual void SetAnimating(Bool animating);
        
        // Method: IsAnimating
        // Gets animating status
        //
        // Returns:
        // Animating status
        virtual Bool IsAnimating() const;
        
    //===========================================================
    // BasicSpriteAnimator methods
    //===========================================================
    public:
        
        // Method: AddAnimation
        // Registers an animation with a given name
        virtual void AddAnimation(const String& name, const BasicSpriteAnimation& animation, Float duration);
        
        // Method: PlayAnimation
        // Plays the animation with the given name
        virtual void PlayAnimation(const String& name, Bool loop);
        
        // Method: StopAnimation
        // Interrupts the animation that is currently active
        virtual void StopAnimation();
        
        // Method: IsPlayingAnimation
        // Checks whether an animation is currently playing
        virtual Bool IsPlayingAnimation() const;
        
        // Method: GetPlayingAnimation
        // Returns the name of the currently playing animation
        virtual String GetPlayingAnimation() const;
        
    //===========================================================
    // Internal data
    //===========================================================
    private:
        
        // Variable: mAnimating
        // Animating status
        Bool mAnimating;
    };
};

#endif
