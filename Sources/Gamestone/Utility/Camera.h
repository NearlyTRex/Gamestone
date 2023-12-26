// Title: Camera

// Gamestone Engine
// Licensed under the LGPL
#ifndef CAMERA_H
#define CAMERA_H

// Local includes
#include <Gamestone/Types/Pointer.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Properties/Collidable.h>
#include <Gamestone/Properties/Printable.h>
#include <Gamestone/Properties/Positionable.h>
#include <Gamestone/Math/CollisionBox.h>
#include <Gamestone/Math/Rect.h>
#include <Gamestone/Math/Vector.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Camera
    // Camera from which to view the rendered scene
    class Camera:
        public View,
        public Collidable,
        public Printable,
        public Positionable
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: Camera
        // Default constructor
        Camera();
        
        // Constructor: Camera
        // Rect constructor
        //
        // Parameters:
        // rect - Rect to define camera view
        Camera(const RectFloat& rect);
        
        // Constructor: Camera
        // Vector constructor
        //
        // Parameters:
        // position - Position of new camera
        // size - Size of camera rect
        Camera(const Vector2f& position, const Vector2f& size);
        
        // Destructor: ~Camera
        // Destroys object
        virtual ~Camera();
        
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
    // From Gamestone::Positionable
    //===========================================================
    public:
        
        // Method: GetPosition
        // Gets current position
        //
        // Returns:
        // Current position
        virtual Vector2f GetPosition() const;
        
    //===========================================================
    // Camera methods
    //===========================================================
    public:
        
        // Method: SetCenter
        // Sets camera center
        //
        // Parameters:
        // centerx - New x coordinate for center
        // centery - New y coordinate for center
        virtual void SetCenter(Float centerx, Float centery);
        
        // Method: SetCenter
        // Sets camera center
        //
        // Parameters:
        // center - New center coordinate
        virtual void SetCenter(const Vector2f& center);
        
        // Method: SetSize
        // Sets camera size
        //
        // Parameters:
        // sizex - New x value for width
        // sizey - New y value for height
        virtual void SetSize(Float sizex, Float sizey);
        
        // Method: SetSize
        // Sets camera size
        //
        // Parameters:
        // size - New value for width and height
        virtual void SetSize(const Vector2f& size);
        
        // Method: SetRotation
        // Set camera rotation
        //
        // Parameters:
        // angle - New orientation angle
        virtual void SetRotation(Float angle);
        
        // Method: SetViewport
        // Set camera target viewport
        //
        // Parameters:
        // viewport - New target viewport
        virtual void SetViewport(const RectFloat& viewport);
        
        // Method: Reset
        // Reset camera to given rect
        //
        // Parameters:
        // rect - New rect definition for the camera
        virtual void Reset(const RectFloat& rect);
        
        // Method: Move
        // Move camera relative to current position
        //
        // Parameters:
        // offsetx - Offset to move in the x direction
        // offsety - Offset to move in the y direction
        virtual void Move(Float offsetx, Float offsety);
        
        // Method: Move
        // Move camera relative to current position
        //
        // Parameters:
        // offset - Offset to move in both directions
        virtual void Move(const Vector2f& offset);
        
        // Method: Rotate
        // Rotate camera relative to current orientation
        //
        // Parameters:
        // angle - Relative angle to move camera
        virtual void Rotate(Float angle);
        
        // Method: Zoom
        // Resize camera rectangle relative to current size
        //
        // Parameters:
        // factor - Factor to resize the camera rectangle
        virtual void Zoom(Float factor);
        
        // Method: GetCenter
        // Get camera center point
        //
        // Returns:
        // Const reference to center
        virtual const Vector2f& GetCenter() const;
        
        // Method: GetSize
        // Get camera size dimensions
        //
        // Returns:
        // Const reference to size
        virtual const Vector2f& GetSize() const;
        
        // Method: GetRotation
        // Get camera rotation
        //
        // Returns:
        // Rotation angle
        virtual Float GetRotation() const;
        
        // Method: GetViewport
        // Get camera target viewport
        //
        // Returns:
        // Const reference to viewport rect
        virtual const RectFloat& GetViewport() const;
    };  
};

#endif
