// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/CollisionBox.h>
#include <Gamestone/Math/Collision.h>

//==================================================================================
Gamestone::CollisionBox::CollisionBox(const RectFloat& rect, const Vector2f& center, Float rotation):
    mCollisionRect(rect),
    mCollisionCenter(center),
    mCollisionRotation(rotation)
{
}
//==================================================================================
Gamestone::CollisionBox::CollisionBox(const CollisionBox& other):
    mCollisionRect(other.GetRect()),
    mCollisionCenter(other.GetCenter()),
    mCollisionRotation(other.GetRotation())
{
}
//==================================================================================
Gamestone::CollisionBox::~CollisionBox()
{
}
//==================================================================================
Gamestone::String Gamestone::CollisionBox::GetPrintableString() const
{
    // Get printable string
    String printableString = "";
    printableString += "Rect" + Gamestone::GetPrintableString(mCollisionRect);
    printableString += " ";
    printableString += "Center" + Gamestone::GetPrintableString(mCollisionCenter);
    printableString += " ";
    printableString += "Rotation(" + StringCast<String>(mCollisionRotation) + ")";
    return printableString;
}
//==================================================================================
void Gamestone::CollisionBox::SetPosition(const Vector2f& position)
{
    // Set position
    mCollisionRect.left = position.x;
    mCollisionRect.top = position.y;
}
//==================================================================================
void Gamestone::CollisionBox::SetCenter(const Vector2f& center)
{
    // Set center
    mCollisionCenter = center;
}
//==================================================================================
void Gamestone::CollisionBox::SetRotation(Float rotation)
{
    // Set rotation
    mCollisionRotation = rotation;
}
//==================================================================================
void Gamestone::CollisionBox::Move(const Vector2f& offset)
{
    // Move both position and center by the given offset
    mCollisionRect.left += offset.x;
    mCollisionRect.top += offset.y;
    mCollisionCenter.x += offset.x;
    mCollisionCenter.y += offset.y;
}
//==================================================================================
void Gamestone::CollisionBox::Scale(const Vector2f& factor)
{
    // Scale both width and height of the rect
    mCollisionRect.width *= factor.x;
    mCollisionRect.height *= factor.y;
}
//==================================================================================
Gamestone::Bool Gamestone::CollisionBox::IsColliding(const CollisionBox& other) const
{
    // Check collision
    return OrientedBoxCollisionTest(mCollisionRect, other.GetRect(), mCollisionCenter, other.GetCenter(), mCollisionRotation, other.GetRotation());
}
//==================================================================================
Gamestone::Vector2f Gamestone::CollisionBox::GetUpperLeft() const
{
    // Get corner
    return GetUpperLeftCorner(mCollisionRect, mCollisionCenter, mCollisionRotation);
}
//==================================================================================
Gamestone::Vector2f Gamestone::CollisionBox::GetUpperRight() const
{
    // Get corner
    return GetUpperRightCorner(mCollisionRect, mCollisionCenter, mCollisionRotation);
}
//==================================================================================
Gamestone::Vector2f Gamestone::CollisionBox::GetLowerLeft() const
{
    // Get corner
    return GetLowerLeftCorner(mCollisionRect, mCollisionCenter, mCollisionRotation);
}
//==================================================================================
Gamestone::Vector2f Gamestone::CollisionBox::GetLowerRight() const
{
    // Get corner
    return GetLowerRightCorner(mCollisionRect, mCollisionCenter, mCollisionRotation);
}
//==================================================================================
const Gamestone::RectFloat& Gamestone::CollisionBox::GetRect() const
{
    // Get rect
    return mCollisionRect;
}
//==================================================================================
const Gamestone::Vector2f& Gamestone::CollisionBox::GetCenter() const
{
    // Get center
    return mCollisionCenter;
}
//==================================================================================
Gamestone::Float Gamestone::CollisionBox::GetRotation() const
{
    // Get rotation
    return mCollisionRotation;
}
//==================================================================================
