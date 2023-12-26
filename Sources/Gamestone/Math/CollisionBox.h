// Title: CollisionBox

// Gamestone Engine
// Licensed under the LGPL
#ifndef COLLISIONBOX_H
#define COLLISIONBOX_H

// Local includes
#include <Gamestone/Math/Rect.h>
#include <Gamestone/Math/Vector.h>
#include <Gamestone/Properties/Printable.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: CollisionBox
    // Class for rotated collision box
    class CollisionBox:
        public Printable
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: CollisionBox
        // Default constructor
        //
        // Parameters:
        // rect - Rectangle to use for collision
        // center - Center point of collision
        // rotation - Amount the collision rect is rotated
        CollisionBox(const RectFloat& rect = RectFloat(), const Vector2f& center = Vector2f(), Float rotation = 0.0f);
        
        // Constructor: CollisionBox
        // Copy constructor
        //
        // Parameters:
        // other - Other object
        CollisionBox(const CollisionBox& other);
        
        // Destructor: ~CollisionBox
        // Destroys object
        virtual ~CollisionBox();
        
    //===========================================================
    // From Gamestone::Printable
    //===========================================================
    public:
        
        // Method: GetPrintableString
        // Gets printable string
        //
        // Returns:
        // Printable string
        virtual String GetPrintableString() const;
        
    //===========================================================
    // CollisionBox methods
    //===========================================================
    public:
        
        // Method: SetPosition
        // Sets the upper left value of the rect to the given position
        //
        // Parameters:
        // position - New position
        virtual void SetPosition(const Vector2f& position);
        
        // Method: SetCenter
        // Sets the center to the given position
        //
        // Parameters:
        // center - New center
        virtual void SetCenter(const Vector2f& center);
        
        // Method: SetRotation
        // Sets the rotation to the given value
        //
        // Parameters:
        // rotation - New rotation
        virtual void SetRotation(Float rotation);
        
        // Method: Move
        // Moves the position of the rect by the given offset
        //
        // Parameters:
        // offset - Position offset
        virtual void Move(const Vector2f& offset);
        
        // Method: Scale
        // Scales the rects width and heights by the given factors
        //
        // Parameters:
        // factor - Scaling factor (x for width, y for height)
        virtual void Scale(const Vector2f& factor);
        
        // Method: IsColliding
        // Checks collision between another collision info
        //
        // Parameters:
        // other - Other collision info
        //
        // Returns:
        // Status of collision
        virtual Bool IsColliding(const CollisionBox& other) const;
        
        // Method: GetUpperLeft
        // Gets upper left corner of collision rect
        //
        // Returns:
        // Vector of upper left position
        virtual Vector2f GetUpperLeft() const;
        
        // Method: GetUpperRight
        // Gets upper right corner of collision rect
        //
        // Returns:
        // Vector of upper right position
        virtual Vector2f GetUpperRight() const;
        
        // Method: GetLowerLeft
        // Gets lower left corner of collision rect
        //
        // Returns:
        // Vector of lower left position
        virtual Vector2f GetLowerLeft() const;
        
        // Method: GetLowerRight
        // Gets lower right corner of collision rect
        //
        // Returns:
        // Vector of lower right position
        virtual Vector2f GetLowerRight() const;
        
        // Method: GetRect
        // Gets collision rect
        //
        // Returns:
        // Const reference to collision rect
        virtual const RectFloat& GetRect() const;
        
        // Method: GetCenter
        // Gets collision center
        //
        // Returns:
        // Const reference to collision center
        virtual const Vector2f& GetCenter() const;
        
        // Method: GetRotation
        // Gets collision rotation
        //
        // Returns:
        // Collision rotation
        virtual Float GetRotation() const;
        
    //===========================================================
    // Private data
    //===========================================================
    private:
        
        // Variable: mCollisionRect
        // Collision rectangle
        RectFloat mCollisionRect;
        
        // Variable: mCollisionCenter
        // Center of collision rect
        Vector2f mCollisionCenter;
        
        // Variable: mCollisionRotation
        // Rotation for collision rect
        Float mCollisionRotation;
    };
};

#endif
