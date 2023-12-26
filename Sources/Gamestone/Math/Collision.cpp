// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/Collision.h>

//===============================================================================
Gamestone::Bool Gamestone::CircleCollisionTest(const Vector2f& size1, const Vector2f& size2, const Vector2f& center1, const Vector2f& center2)
{
    // Simplest circle test possible
    // Distance between points less than or equal to the sum of the radii
    Float radius1 = (size1.x + size1.y) / 4;
    Float radius2 = (size2.x + size2.y) / 4;
    Float xd = center1.x - center2.x;
    Float yd = center1.y - center2.y;
    return sqrt(xd * xd + yd * yd) <= radius1 + radius2;
}
//===============================================================================
Gamestone::Bool Gamestone::OrientedBoxCollisionTest(const RectFloat& rect1, const RectFloat& rect2, const Vector2f& center1, const Vector2f& center2, Float rotation1, Float rotation2)
{
    // Check first rectangle vertical axis for collision and if there is no collision then exit early
    Vector2f axis1(GetUpperLeftCorner(rect1, center1, rotation1) - GetLowerLeftCorner(rect1, center1, rotation1));
    if (!IsAxisCollision(rect1, rect2, center1, center2, rotation1, rotation2, axis1))
    {
        return false;
    }
    
    // Check first rectangle horizontal axis for collision and if there is no collision then exit early
    Vector2f axis2(GetUpperLeftCorner(rect1, center1, rotation1) - GetUpperRightCorner(rect1, center1, rotation1));
    if (!IsAxisCollision(rect1, rect2, center1, center2, rotation1, rotation2, axis2))
    {
        return false;
    }
    
    // Check second rectangle vertical axis for collision and if there is no collision then exit early
    Vector2f axis4(GetUpperRightCorner(rect2, center2, rotation2) - GetLowerRightCorner(rect2, center2, rotation2));
    if (!IsAxisCollision(rect1, rect2, center1, center2, rotation1, rotation2, axis4))
    {
        return false;
    }
    
    // Check second rectangle horizontal axis for collision and if there is no collision then exit early
    Vector2f axis3(GetUpperRightCorner(rect2, center2, rotation2) - GetUpperLeftCorner(rect2, center2, rotation2));
    if (!IsAxisCollision(rect1, rect2, center1, center2, rotation1, rotation2, axis3))
    {
        return false;
    }
    
    // There must be a collision
    return true;
}
//===============================================================================
Gamestone::Bool Gamestone::IsAxisCollision(const RectFloat& rect1, const RectFloat& rect2, const Vector2f& center1, const Vector2f& center2, Float rotation1, Float rotation2, const Vector2f& axis)
{
    // Project the corners of the first rectangle on to the axis and get a scalar value
    Int rectangleAScalar1 = GenerateScalar(GetUpperLeftCorner(rect1, center1, rotation1), axis);
    Int rectangleAScalar2 = GenerateScalar(GetUpperRightCorner(rect1, center1, rotation1), axis);
    Int rectangleAScalar3 = GenerateScalar(GetLowerLeftCorner(rect1, center1, rotation1), axis);
    Int rectangleAScalar4 = GenerateScalar(GetLowerRightCorner(rect1, center1, rotation1), axis);
    
    // Project the corners of the second rectangle on to the axis and get a scalar value
    Int rectangleBScalar1 = GenerateScalar(GetUpperLeftCorner(rect2, center2, rotation2), axis);
    Int rectangleBScalar2 = GenerateScalar(GetUpperRightCorner(rect2, center2, rotation2), axis);
    Int rectangleBScalar3 = GenerateScalar(GetLowerLeftCorner(rect2, center2, rotation2), axis);
    Int rectangleBScalar4 = GenerateScalar(GetLowerRightCorner(rect2, center2, rotation2), axis);
    
    // Get the maximum and minimum scalar values for both rectangles
    Int rectangleAMin = GetMinValue(rectangleAScalar1, rectangleAScalar2, rectangleAScalar3, rectangleAScalar4);
    Int rectangleAMax = GetMaxValue(rectangleAScalar1, rectangleAScalar2, rectangleAScalar3, rectangleAScalar4);
    Int rectangleBMin = GetMinValue(rectangleBScalar1, rectangleBScalar2, rectangleBScalar3, rectangleBScalar4);
    Int rectangleBMax = GetMaxValue(rectangleBScalar1, rectangleBScalar2, rectangleBScalar3, rectangleBScalar4);
    
    // If there are overlaps between the rectangles then there is a collision on this axis
    if (rectangleBMin <= rectangleAMax && rectangleBMax >= rectangleAMax)
    {
        return true;
    }
    else if (rectangleAMin <= rectangleBMax && rectangleAMax >= rectangleBMax)
    {
        return true;
    }
    return false;
}
//===============================================================================
Gamestone::Int Gamestone::GenerateScalar(const Vector2f& corner, const Vector2f& axis)
{
    // Get dot product of the point and axis
    return static_cast<Int>((corner.x * axis.x) + (corner.y * axis.y));
}
//===============================================================================
Gamestone::Vector2f Gamestone::RotatePoint(const Vector2f& point, const Vector2f& center, Float rotation)
{
    // Rotated point
    Vector2f rotatedPoint(point);
    
    // Get sine/cosine of the angle
    Float sine = sin(rotation);
    Float cosine = cos(rotation);
    
    // Translate point back to origin
    rotatedPoint.x -= center.x;
    rotatedPoint.y -= center.y;
    
    // Rotate point
    Float xnew = (rotatedPoint.x * cosine) - (rotatedPoint.y * sine);
    Float ynew = (rotatedPoint.x * sine) + (rotatedPoint.y * cosine);
    
    // Translate point back
    rotatedPoint.x = xnew + center.x;
    rotatedPoint.y = ynew + center.y;
    
    // Return rotated point
    return rotatedPoint;
}
//===============================================================================
Gamestone::Vector2f Gamestone::GetUpperLeftCorner(const RectFloat& rect, const Vector2f& center, Float rotation)
{
    // Get upper left corner
    Vector2f upperLeft(rect.left, rect.top);
    upperLeft = RotatePoint(upperLeft, center, rotation);
    return upperLeft;
}
//===============================================================================
Gamestone::Vector2f Gamestone::GetUpperRightCorner(const RectFloat& rect, const Vector2f& center, Float rotation)
{
    // Get upper right corner
    Vector2f upperRight(rect.left + rect.width, rect.top);
    upperRight = RotatePoint(upperRight, center, rotation);
    return upperRight;
}
//===============================================================================
Gamestone::Vector2f Gamestone::GetLowerLeftCorner(const RectFloat& rect, const Vector2f& center, Float rotation)
{
    // Get lower left corner
    Vector2f lowerLeft(rect.left, rect.top + rect.height);
    lowerLeft = RotatePoint(lowerLeft, center, rotation);
    return lowerLeft;
}
//===============================================================================
Gamestone::Vector2f Gamestone::GetLowerRightCorner(const RectFloat& rect, const Vector2f& center, Float rotation)
{
    // Get lower right corner
    Vector2f lowerRight(rect.left + rect.width, rect.top + rect.height);
    lowerRight = RotatePoint(lowerRight, center, rotation);
    return lowerRight;
}
//===============================================================================
Gamestone::Int Gamestone::GetMinValue(Int a, Int b, Int c, Int d)
{
    // Get min value
    Int min = a;
    min = (b < min ? b : min);
    min = (c < min ? c : min);
    min = (d < min ? d : min);
    return min;
}
//===============================================================================
Gamestone::Int Gamestone::GetMaxValue(Int a, Int b, Int c, Int d)
{
    // Get max value
    Int max = a;
    max = (b > max ? b : max);
    max = (c > max ? c : max);
    max = (d > max ? d : max);
    return max;
}
//===============================================================================
