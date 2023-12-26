// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Camera.h>

//===================================================================================
Gamestone::Camera::Camera():
    View()
{
}
//===================================================================================
Gamestone::Camera::Camera(const RectFloat& rect):
    View(rect)
{
}
//===================================================================================
Gamestone::Camera::Camera(const Vector2f& position, const Vector2f& size):
    View(position, size)
{
}
//===================================================================================
Gamestone::Camera::~Camera()
{
}
//===================================================================================
Gamestone::CollisionBox Gamestone::Camera::GetCollisionBox() const
{
    // Get collision box
    Float rotation(View::getRotation());
    Vector2f size(View::getSize());
    Vector2f center(View::getCenter());
    RectFloat rect(center.x - (size.x / 2), center.y - (size.y / 2), size.x, size.y);
    return CollisionBox(rect, center, rotation);
}
//===================================================================================
Gamestone::String Gamestone::Camera::GetPrintableString() const
{
    // Get printable string
    String printableString = "";
    printableString += String("Position: ") + Gamestone::GetPrintableString(GetPosition()) + String("\n");
    printableString += String("Center: ") + Gamestone::GetPrintableString(GetCenter()) + String("\n");
    printableString += String("Size: ") + Gamestone::GetPrintableString(GetSize()) + String("\n");
    printableString += String("Viewport: ") + Gamestone::GetPrintableString(GetViewport()) + String("\n");
    printableString += String("Rotation: ") + StringCast<String>(GetRotation()) + String("\n");
    return printableString;
}
//===================================================================================
Gamestone::Vector2f Gamestone::Camera::GetPosition() const
{
    // Get position
    return Vector2f(View::getCenter().x - (View::getSize().x / 2), View::getCenter().y - (View::getSize().y / 2));
}
//===================================================================================
void Gamestone::Camera::SetCenter(Float centerx, Float centery)
{
    // Call parent
    View::setCenter(centerx, centery);
}
//===================================================================================
void Gamestone::Camera::SetCenter(const Vector2f& center)
{
    // Call parent
    View::setCenter(center);
}
//===================================================================================
void Gamestone::Camera::SetSize(Float sizex, Float sizey)
{
    // Call parent
    View::setSize(sizex, sizey);
}
//===================================================================================
void Gamestone::Camera::SetSize(const Vector2f& size)
{
    // Call parent
    View::setSize(size);
}
//===================================================================================
void Gamestone::Camera::SetRotation(Float angle)
{
    // Call parent
    View::setRotation(angle);
}
//===================================================================================
void Gamestone::Camera::SetViewport(const RectFloat& viewport)
{
    // Call parent
    View::setViewport(viewport);
}
//===================================================================================
void Gamestone::Camera::Reset(const RectFloat& rect)
{
    // Call parent
    View::reset(rect);
}
//===================================================================================
void Gamestone::Camera::Move(Float offsetx, Float offsety)
{
    // Call parent
    View::move(offsetx, offsety);
}
//===================================================================================
void Gamestone::Camera::Move(const Vector2f& offset)
{
    // Call parent
    View::move(offset);
}
//===================================================================================
void Gamestone::Camera::Rotate(Float angle)
{
    // Call parent
    View::rotate(angle);
}
//===================================================================================
void Gamestone::Camera::Zoom(Float factor)
{
    // Call parent
    View::zoom(factor);
}
//===================================================================================
const Gamestone::Vector2f& Gamestone::Camera::GetCenter() const
{
    // Call parent
    return View::getCenter();
}
//===================================================================================
const Gamestone::Vector2f& Gamestone::Camera::GetSize() const
{
    // Call parent
    return View::getSize();
}
//===================================================================================
Gamestone::Float Gamestone::Camera::GetRotation() const
{
    // Call parent
    return View::getRotation();
}
//===================================================================================
const Gamestone::RectFloat& Gamestone::Camera::GetViewport() const
{
    // Call parent
    return View::getViewport();
}
//===================================================================================
