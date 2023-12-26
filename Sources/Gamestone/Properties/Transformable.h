// Title: Transformable

// Gamestone Engine
// Licensed under the LGPL
#ifndef TRANSFORMABLE_H
#define TRANSFORMABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Math/Vector.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Transformable
    // Transformable property
    class Transformable
    {
    public:
        
        // Method: SetTransformablePointer
        // Sets transformable pointer
        //
        // Parameters:
        // ptr - Pointer to transformable object
        virtual void SetTransformablePtr(TransformablePtr ptr) = 0;
        
        // Method: GetTransformablePtr
        // Gets transformable pointer
        //
        // Returns:
        // Pointer to transformable object
        virtual TransformablePtr GetTransformablePtr() const = 0;
        
        // Method: SetPosition
        // Sets position
        //
        // Parameters:
        // x - New x position
        // y - New y position
        virtual void SetPosition(Float x, Float y) = 0;
        
        // Method: SetPosition
        // Sets position
        //
        // Parameters:
        // position - New position
        virtual void SetPosition(const Vector2f& position) = 0;
        
        // Method: SetRotation
        // Sets rotation
        //
        // Parameters:
        // angle - New angle
        virtual void SetRotation(Float angle) = 0;
        
        // Method: SetScale
        // Sets scale
        //
        // Parameters:
        // factorx - Scaling x factor
        // factory - Scaling y factor
        virtual void SetScale(Float factorx, Float factory) = 0;
        
        // Method: SetScale
        // Sets scale
        //
        // Parameters:
        // factors - Scaling factor
        virtual void SetScale(const Vector2f& factors) = 0;
        
        // Method: SetOrigin
        // Sets origin
        //
        // Parameters:
        // x - New x origin
        // y - New y origin
        virtual void SetOrigin(Float x, Float y) = 0;
        
        // Method: SetOrigin
        // Sets origin
        //
        // Parameters:
        // origin - New origin
        virtual void SetOrigin(const Vector2f& origin) = 0;
        
        // Method: GetPosition
        // Gets position
        //
        // Returns:
        // Position vector
        virtual const Vector2f& GetPosition() const = 0;
        
        // Method: GetRotation
        // Gets rotation
        //
        // Returns:
        // Float rotation
        virtual Float GetRotation() const = 0;
        
        // Method: GetScale
        // Gets scale
        //
        // Returns:
        // Float scale
        virtual const Vector2f& GetScale() const = 0;
        
        // Method: GetOrigin
        // Gets origin
        //
        // Returns:
        // Vector origin
        virtual const Vector2f& GetOrigin() const = 0;
        
        // Method: Move
        // Moves by the given offset
        //
        // Parameters:
        // offsetx - New x offset
        // offsety - New y offset
        virtual void Move(Float offsetx, Float offsety) = 0;
        
        // Method: Move
        // Moves by the given offset
        //
        // Parameters:
        // offset - New offset
        virtual void Move(const Vector2f& offset) = 0;
        
        // Method: Rotate
        // Rotates by given angle
        //
        // Parameters:
        // angle - New angle
        virtual void Rotate(Float angle) = 0;
        
        // Method: Scale
        // Scales by the given factors
        //
        // Parameters:
        // factorx - New x factor
        // factory - New y factor
        virtual void Scale(Float factorx, Float factory) = 0;
        
        // Method: Scale
        // Scales by the given factor
        //
        // Parameters:
        // factor - New factor
        virtual void Scale(const Vector2f& factor) = 0;
    };
};

#endif
