// Title: BasicSprite

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef BASICSPRITE_H
#define BASICSPRITE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Types/SystemTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/Table.h>
#include <Gamestone/Objects/Obj/Obj.h>
#include <Gamestone/Objects/BasicSprite/BasicSpriteAnimator.h>
#include <Gamestone/Utility/Color.h>
#include <Gamestone/Utility/Resources.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: BasicSprite
    // Basic sprite class
    class BasicSprite:
        public Obj,
        public Collidable
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: BasicSprite
        // Texture resource constructor
        //
        // Parameters:
        // texture - Texture resource
        BasicSprite(const TextureResource& texture);
        
        // Destructor: ~BasicSprite
        // Destroys object
        virtual ~BasicSprite();
        
    //===========================================================
    // From Gamestone::Renderable
    //===========================================================
    public:
        
        // Method: Update
        // Update from latest frame
        //
        // Parameters:
        // deltatime - Time since last frame
        virtual void Update(Float deltatime);
        
        // Method: Render
        // Renders current frame
        virtual void Render();
        
    //===========================================================
    // From Gamestone::Collidable
    //===========================================================
    public:
        
        // Method: GetCollisionBox
        // Get collision box
        //
        // Returns:
        // Collision box
        virtual CollisionBox GetCollisionBox() const;
        
    //===========================================================
    // BasicSprite methods
    //===========================================================
    public:
        
        // Method: SetTextureRect
        // Set the rect of the texture that the sprite will display
        //
        // Parameters:
        // rect - New rect
        virtual void SetTextureRect(const RectInt& rect);
        
        // Method: SetColor
        // Set the global color of the sprite
        //
        // Parameters:
        // color - New color
        virtual void SetColor(const Color& color);
        
        // Method: GetTextureRect
        // Get the rect of the texture displayed by the sprite
        //
        // Parameters:
        // Const reference to rect
        virtual const RectInt& GetTextureRect() const;
        
        // Method: GetColor
        // Get the global color of the sprite
        //
        // Returns:
        // Const reference to color
        virtual const Color& GetColor() const;
        
        // Method: GetLocalBounds
        // Get the local bounding rect of the sprite
        //
        // Returns:
        // Bounding rect
        virtual RectFloat GetLocalBounds() const;
        
        // Method: GetGlobalBounds
        // Get the global bounding rect of the sprite
        //
        // Returns:
        // Bounding rect
        virtual RectFloat GetGlobalBounds() const;
        
        // Method: AddAnimator
        // Adds new animator with the given name
        // Name must be unique and not already used
        //
        // Parameters:
        // name - Animator name
        // animator - Animator object
        virtual void AddAnimator(const String& name, const BasicSpriteAnimator& animator);
        
        // Method: RemoveAnimator
        // Removes animator with the given name
        //
        // Parameters:
        // name - Animator name
        virtual void RemoveAnimator(const String& name);
        
        // Method: GetAnimator
        // Gets existing animator
        //
        // Parameters:
        // name - Animator name
        //
        // Returns:
        // Reference to animator object
        virtual BasicSpriteAnimator& GetAnimator(const String& name);
        
        // Method: ClearAnimators
        // Clears all existing animators
        virtual void ClearAnimators();
        
    //===========================================================
    // Internal data
    //===========================================================
    private:
        
        // Variable: mSpritePtr
        // Pointer to internal sprite object
        SharedPtr<Sprite> mSpritePtr;
        
        // Variable: mTexturePtr
        // Pointer to internal texture object
        SharedPtr<Texture> mTexturePtr;
        
        // Variable: mSpriteAnimatorTable
        // BasicSprite animator table
        UnorderedTable<String, BasicSpriteAnimator> mSpriteAnimatorTable;
    };
};

#endif
