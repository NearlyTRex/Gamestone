// Title: Collision

// Gamestone Engine
// Licensed under the LGPL
#ifndef COLLISION_H
#define COLLISION_H

// Local includes
#include <Gamestone/Math/MathDefs.h>
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Math/Vector.h>
#include <Gamestone/Math/Rect.h>
#include <Gamestone/Utility/Exception.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Function: CircleCollisionTest
    // Test for collision using circle collision detection
    // Radius is averaged from the dimensions of the object
    // so roughly circular objects will be much more accurate
    //
    // Parameters:
    // size1 - Object 1 size
    // size2 - Object 2 size
    // pos1 - Object 1 center
    // pos2 - Object 2 center
    //
    // Returns:
    // Collision boolean
    Bool CircleCollisionTest(const Vector2f& size1, const Vector2f& size2, const Vector2f& center1, const Vector2f& center2);
    
    // Function: OrientedBoxCollisionTest
    // Test for collision using the separate axis theorem
    //
    // Parameters:
    // rect1 - First rectangle
    // rect2 - Second rectangle
    // center1 - First center point
    // center2 - Second center point
    // rotation1 - First rotation angle
    // rotation2 - Second rotation angle
    //
    // Returns:
    // Collision boolean
    Bool OrientedBoxCollisionTest(const RectFloat& rect1, const RectFloat& rect2, const Vector2f& center1, const Vector2f& center2, Float rotation1, Float rotation2);
    
    // Function: IsAxisCollision
    // Returns result of collision test along the given axis
    //
    // Parameters:
    // rect1 - First rectangle
    // rect2 - Second rectangle
    // center1 - First center point
    // center2 - Second center point
    // rotation1 - First rotation angle
    // rotation2 - Second rotation angle
    // axis - Collision axis
    //
    // Returns:
    // Axis collision boolean
    Bool IsAxisCollision(const RectFloat& rect1, const RectFloat& rect2, const Vector2f& center1, const Vector2f& center2, Float rotation1, Float rotation2, const Vector2f& axis);
    
    // Function: GenerateScalar
    // Generate scalar of a corner based on the given axis
    //
    // Parameters:
    // corner - Corner point
    // axis - Axis vector
    //
    // Returns:
    // Scalar of the corner point
    Int GenerateScalar(const Vector2f& corner, const Vector2f& axis);
    
    // Function: RotatePoint
    // Rotates the given point around its center given the angle
    //
    // Parameters:
    // point - Point to translate
    // center - Origin point
    // rotation - Angle of rotation
    //
    // Returns:
    // Translated point
    Vector2f RotatePoint(const Vector2f& point, const Vector2f& center, Float rotation);
    
    // Function: GetUpperLeftCorner
    // Get the upper left corner of the given rect
    //
    // Parameters:
    // rect - Source rect
    // center - Rect center
    // rotation - Rect rotation
    //
    // Returns:
    // Upper left corner
    Vector2f GetUpperLeftCorner(const RectFloat& rect, const Vector2f& center, Float rotation);
    
    // Function: GetUpperRightCorner
    // Get the upper right corner of the given rect
    //
    // Parameters:
    // rect - Source rect
    // center - Rect center
    // rotation - Rect rotation
    //
    // Returns:
    // Upper right corner
    Vector2f GetUpperRightCorner(const RectFloat& rect, const Vector2f& center, Float rotation);
    
    // Function: GetLowerLeftCorner
    // Get the lower left corner of the given rect
    //
    // Parameters:
    // rect - Source rect
    // center - Rect center
    // rotation - Rect rotation
    //
    // Returns:
    // Lower left corner
    Vector2f GetLowerLeftCorner(const RectFloat& rect, const Vector2f& center, Float rotation);
    
    // Function: GetLowerRightCorner
    // Get the lower right corner of the given rect
    //
    // Parameters:
    // rect - Source rect
    // center - Rect center
    // rotation - Rect rotation
    //
    // Returns:
    // Lower right corner
    Vector2f GetLowerRightCorner(const RectFloat& rect, const Vector2f& center, Float rotation);
    
    // Function: GetMinValue
    // Get the minimum value among the points
    //
    // Parameters:
    // a - First point
    // b - Second point
    // c - Third point
    // d - Fourth point
    //
    // Returns:
    // Minimum value
    Int GetMinValue(Int a, Int b, Int c, Int d);
    
    // Function: GetMaxValue
    // Get the maximum value among the points
    //
    // Parameters:
    // a - First point
    // b - Second point
    // c - Third point
    // d - Fourth point
    //
    // Returns:
    // Maximum value
    Int GetMaxValue(Int a, Int b, Int c, Int d);
}

#endif
