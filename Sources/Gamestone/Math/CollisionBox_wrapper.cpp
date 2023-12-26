// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/CollisionBox_wrapper.h>

//===============================================================================
void register_CollisionBox()
{
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::CollisionBox, "CollisionBox")
    REGISTER_CLASS_INIT3(const Gamestone::RectFloat&, const Gamestone::Vector2f&, Gamestone::Float)
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::IsColliding, "IsColliding")
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::GetUpperLeft, "GetUpperLeft")
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::GetUpperRight, "GetUpperRight")
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::GetLowerLeft, "GetLowerLeft")
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::GetLowerRight, "GetLowerRight")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::CollisionBox::GetRect, "GetRect")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::CollisionBox::GetCenter, "GetCenter")
    REGISTER_CLASS_METHOD(&Gamestone::CollisionBox::GetRotation, "GetRotation")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================
