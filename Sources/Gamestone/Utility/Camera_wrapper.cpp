// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Camera_wrapper.h>

//===============================================================================================
void register_Camera()
{
    // Typedefs
    typedef void (Gamestone::Camera::*Camera_FloatFloat)(Gamestone::Float, Gamestone::Float);
    typedef void (Gamestone::Camera::*Camera_Vector)(const Gamestone::Vector2f&);
    
    // Overloaded methods
    Camera_FloatFloat Camera_SetCenter1 = &Gamestone::Camera::SetCenter;
    Camera_Vector Camera_SetCenter2 = &Gamestone::Camera::SetCenter;
    Camera_FloatFloat Camera_SetSize1 = &Gamestone::Camera::SetSize;
    Camera_Vector Camera_SetSize2 = &Gamestone::Camera::SetSize;
    Camera_FloatFloat Camera_Move1 = &Gamestone::Camera::Move;
    Camera_Vector Camera_Move2 = &Gamestone::Camera::Move;
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Camera, "Camera")
    REGISTER_CLASS_INIT1(const Gamestone::RectFloat&)
    REGISTER_CLASS_INIT2(const Gamestone::Vector2f&, const Gamestone::Vector2f&)
    REGISTER_CLASS_METHOD(&Gamestone::Camera::GetCollisionBox, "GetCollisionBox")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::GetPosition, "GetPosition")
    REGISTER_CLASS_METHOD(Camera_SetCenter1, "SetCenter")
    REGISTER_CLASS_METHOD(Camera_SetCenter2, "SetCenter")
    REGISTER_CLASS_METHOD(Camera_SetSize1, "SetSize")
    REGISTER_CLASS_METHOD(Camera_SetSize2, "SetSize")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::SetRotation, "SetRotation")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::SetViewport, "SetViewport")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::Reset, "Reset")
    REGISTER_CLASS_METHOD(Camera_Move1, "Move")
    REGISTER_CLASS_METHOD(Camera_Move2, "Move")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::Rotate, "Rotate")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::Zoom, "Zoom")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Camera::GetCenter, "GetCenter")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Camera::GetSize, "GetSize")
    REGISTER_CLASS_METHOD(&Gamestone::Camera::GetRotation, "GetRotation")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Camera::GetViewport, "GetViewport")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
