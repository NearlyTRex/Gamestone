// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/Obj/Obj.h>

//==================================================================================
Gamestone::Obj::Obj():
    mRenderDepth(),
    mTransformablePtr(nullptr),
    mVisible(false)
{
}
//==================================================================================
Gamestone::Obj::~Obj()
{
}
//==================================================================================
Gamestone::String Gamestone::Obj::GetPrintableString() const
{
    // Get printable string
    String printableString = "";
    printableString += String("Position: ") + Gamestone::GetPrintableString(mTransformablePtr->getPosition()) + String("\n");
    printableString += String("Scale: ") + Gamestone::GetPrintableString(mTransformablePtr->getScale()) + String("\n");
    printableString += String("Origin: ") + Gamestone::GetPrintableString(mTransformablePtr->getOrigin()) + String("\n");
    printableString += String("Rotation: ") + StringCast<String>(mTransformablePtr->getRotation()) + String("\n");
    printableString += String("Depth: ") + StringCast<String>(mRenderDepth) + String("\n");
    printableString += String("Visible: ") + StringCast<String>(mVisible) + String("\n");
    return printableString;
}
//==================================================================================
void Gamestone::Obj::SetRenderDepth(Int depth)
{
    // Set render depth
    mRenderDepth = depth;
}
//==================================================================================
Gamestone::Int Gamestone::Obj::GetRenderDepth() const
{
    // Get render depth
    return mRenderDepth;
}
//==================================================================================
void Gamestone::Obj::SetTransformablePtr(TransformablePtr ptr)
{
    // Set transformable pointer
    ASSERT_ERROR(ptr, "Object was created with an invalid transformable pointer");
    mTransformablePtr = ptr;
}
//==================================================================================
Gamestone::TransformablePtr Gamestone::Obj::GetTransformablePtr() const
{
    // Get transformable pointer
    return mTransformablePtr;
}
//==================================================================================
void Gamestone::Obj::SetPosition(Float x, Float y)
{
    // Set position
    mTransformablePtr->setPosition(x, y);
}
//==================================================================================
void Gamestone::Obj::SetPosition(const Vector2f& position)
{
    // Set position
    mTransformablePtr->setPosition(position);
}
//==================================================================================
void Gamestone::Obj::SetRotation(Float angle)
{
    // Set rotation
    mTransformablePtr->setRotation(angle);
}
//==================================================================================
void Gamestone::Obj::SetScale(Float factorx, Float factory)
{
    // Set scale
    mTransformablePtr->setScale(factorx, factory);
}
//==================================================================================
void Gamestone::Obj::SetScale(const Vector2f& factors)
{
    // Set scale
    mTransformablePtr->setScale(factors);
}
//==================================================================================
void Gamestone::Obj::SetOrigin(Float x, Float y)
{
    // Set origin
    mTransformablePtr->setOrigin(x, y);
}
//==================================================================================
void Gamestone::Obj::SetOrigin(const Vector2f& origin)
{
    // Set origin
    mTransformablePtr->setOrigin(origin);
}
//==================================================================================
const Gamestone::Vector2f& Gamestone::Obj::GetPosition() const
{
    // Get position
    return mTransformablePtr->getPosition();
}
//==================================================================================
Gamestone::Float Gamestone::Obj::GetRotation() const
{
    // Get rotation
    return mTransformablePtr->getRotation();
}
//==================================================================================
const Gamestone::Vector2f& Gamestone::Obj::GetScale() const
{
    // Get scale
    return mTransformablePtr->getScale();
}
//==================================================================================
const Gamestone::Vector2f& Gamestone::Obj::GetOrigin() const
{
    // Get origin
    return mTransformablePtr->getOrigin();
}
//==================================================================================
void Gamestone::Obj::Move(Float offsetx, Float offsety)
{
    // Move
    mTransformablePtr->move(offsetx, offsety);
}
//==================================================================================
void Gamestone::Obj::Move(const Vector2f& offset)
{
    // Move
    mTransformablePtr->move(offset);
}
//==================================================================================
void Gamestone::Obj::Rotate(Float angle)
{
    // Rotate
    mTransformablePtr->rotate(angle);
}
//==================================================================================
void Gamestone::Obj::Scale(Float factorx, Float factory)
{
    // Scale
    mTransformablePtr->scale(factorx, factory);
}
//==================================================================================
void Gamestone::Obj::Scale(const Vector2f& factor)
{
    // Scale
    mTransformablePtr->scale(factor);
}
//==================================================================================
void Gamestone::Obj::SetVisible(Bool v)
{
    // Set visible
    mVisible = v;
}
//==================================================================================
Gamestone::Bool Gamestone::Obj::IsVisible() const
{
    // Get visible
    return mVisible;
}
//==================================================================================
