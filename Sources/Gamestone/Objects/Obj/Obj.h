// Title: Obj

// Gamestone Engine
// Licensed under the LGPL
#ifndef OBJ_H
#define OBJ_H

// Type includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/Array.h>
#include <Gamestone/Types/Table.h>

// Property includes
#include <Gamestone/Properties/Active.h>
#include <Gamestone/Properties/Animatable.h>
#include <Gamestone/Properties/Audible.h>
#include <Gamestone/Properties/Collidable.h>
#include <Gamestone/Properties/Loopable.h>
#include <Gamestone/Properties/Printable.h>
#include <Gamestone/Properties/Registerable.h>
#include <Gamestone/Properties/Renderable.h>
#include <Gamestone/Properties/Runnable.h>
#include <Gamestone/Properties/Transformable.h>
#include <Gamestone/Properties/Valid.h>
#include <Gamestone/Properties/Visible.h>

// Utility includes
#include <Gamestone/Utility/Assert.h>
#include <Gamestone/Utility/Debug.h>
#include <Gamestone/Utility/Memory.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Obj
    // General object that encompasses various types.
    class Obj:
        public Printable,
        public Renderable,
        public Transformable,
        public Visible
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: Obj
        // Default constructor
        Obj();
        
        // Destructor: ~Obj
        // Destroys object
        virtual ~Obj();
        
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
    // From Gamestone::Renderable
    //===========================================================
    public:
        
        // Method: SetRenderDepth
        // Sets render depth, which is useful when trying to order things
        // with batching, etc
        //
        // depth - New depth
        virtual void SetRenderDepth(Int depth);
        
        // Method: GetRenderDepth
        // Gets render depth
        //
        // Returns:
        // Current depth
        virtual Int GetRenderDepth() const;
        
    //===========================================================
    // From Gamestone::Transformable
    //===========================================================
    public:
        
        // Method: SetTransformablePointer
        // Sets transformable pointer
        //
        // Parameters:
        // ptr - Pointer to transformable object
        virtual void SetTransformablePtr(TransformablePtr ptr);
        
        // Method: GetTransformablePtr
        // Gets transformable pointer
        //
        // Returns:
        // Pointer to transformable object
        virtual TransformablePtr GetTransformablePtr() const;
        
        // Method: SetPosition
        // Sets position
        //
        // Parameters:
        // x - New x position
        // y - New y position
        virtual void SetPosition(Float x, Float y);
        
        // Method: SetPosition
        // Sets position
        //
        // Parameters:
        // position - New position
        virtual void SetPosition(const Vector2f& position);
        
        // Method: SetRotation
        // Sets rotation
        //
        // Parameters:
        // angle - New angle
        virtual void SetRotation(Float angle);
        
        // Method: SetScale
        // Sets scale
        //
        // Parameters:
        // factorx - Scaling x factor
        // factory - Scaling y factor
        virtual void SetScale(Float factorx, Float factory);
        
        // Method: SetScale
        // Sets scale
        //
        // Parameters:
        // factors - Scaling factor
        virtual void SetScale(const Vector2f& factors);
        
        // Method: SetOrigin
        // Sets origin
        //
        // Parameters:
        // x - New x origin
        // y - New y origin
        virtual void SetOrigin(Float x, Float y);
        
        // Method: SetOrigin
        // Sets origin
        //
        // Parameters:
        // origin - New origin
        virtual void SetOrigin(const Vector2f& origin);
        
        // Method: GetPosition
        // Gets position
        //
        // Returns:
        // Position vector
        virtual const Vector2f& GetPosition() const;
        
        // Method: GetRotation
        // Gets rotation
        //
        // Returns:
        // Float rotation
        virtual Float GetRotation() const;
        
        // Method: GetScale
        // Gets scale
        //
        // Returns:
        // Float scale
        virtual const Vector2f& GetScale() const;
        
        // Method: GetOrigin
        // Gets origin
        //
        // Returns:
        // Vector origin
        virtual const Vector2f& GetOrigin() const;
        
        // Method: Move
        // Moves by the given offset
        //
        // Parameters:
        // offsetx - New x offset
        // offsety - New y offset
        virtual void Move(Float offsetx, Float offsety);
        
        // Method: Move
        // Moves by the given offset
        //
        // Parameters:
        // offset - New offset
        virtual void Move(const Vector2f& offset);
        
        // Method: Rotate
        // Rotates by given angle
        //
        // Parameters:
        // angle - New angle
        virtual void Rotate(Float angle);
        
        // Method: Scale
        // Scales by the given factors
        //
        // Parameters:
        // factorx - New x factor
        // factory - New y factor
        virtual void Scale(Float factorx, Float factory);
        
        // Method: Scale
        // Scales by the given factor
        //
        // Parameters:
        // factor - New factor
        virtual void Scale(const Vector2f& factor);
        
    //===========================================================
    // From Gamestone::Visible
    //===========================================================
    public:
        
        // Method: SetVisible
        // Sets visible status
        //
        // Parameters:
        // v - Visible status
        virtual void SetVisible(Bool visible);
        
        // Method: IsVisible
        // Gets visible status
        //
        // Returns:
        // Visible status
        virtual Bool IsVisible() const;
        
    //===========================================================
    // Internal data
    //===========================================================
    protected:
        
        // Variable: mRenderDepth
        // Depth for this object to be rendered, if applicable
        Int mRenderDepth;
        
        // Variable: mTransformablePtr
        // Transformable object pointer
        TransformablePtr mTransformablePtr;
        
        // Variable: mVisible
        // Visible status
        Bool mVisible;
    };
};

#endif
