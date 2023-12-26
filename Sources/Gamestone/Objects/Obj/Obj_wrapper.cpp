// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/Obj/Obj_wrapper.h>

//===============================================================================================
void register_Obj()
{
    // Typedefs
    typedef void (Gamestone::Obj::*Obj_FloatFloat)(Gamestone::Float, Gamestone::Float);
    typedef void (Gamestone::Obj::*Obj_Vector)(const Gamestone::Vector2f&);
    
    // Overloaded methods
    Obj_FloatFloat Obj_SetPosition1 = &Gamestone::Obj::SetPosition;
    Obj_Vector Obj_SetPosition2 = &Gamestone::Obj::SetPosition;
    Obj_FloatFloat Obj_SetScale1 = &Gamestone::Obj::SetScale;
    Obj_Vector Obj_SetScale2 = &Gamestone::Obj::SetScale;
    Obj_FloatFloat Obj_SetOrigin1 = &Gamestone::Obj::SetOrigin;
    Obj_Vector Obj_SetOrigin2 = &Gamestone::Obj::SetOrigin;
    Obj_FloatFloat Obj_Move1 = &Gamestone::Obj::Move;
    Obj_Vector Obj_Move2 = &Gamestone::Obj::Move;
    Obj_FloatFloat Obj_Scale1 = &Gamestone::Obj::Scale;
    Obj_Vector Obj_Scale2 = &Gamestone::Obj::Scale;
    
    // Expose class
    REGISTER_CLASS_HEADER_ABSTRACT(Gamestone::Obj, "Obj")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::SetRenderDepth, "SetRenderDepth")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::GetRenderDepth, "GetRenderDepth")
    REGISTER_CLASS_METHOD(Obj_SetPosition1, "SetPosition")
    REGISTER_CLASS_METHOD(Obj_SetPosition2, "SetPosition")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::SetRotation, "SetRotation")
    REGISTER_CLASS_METHOD(Obj_SetScale1, "SetScale")
    REGISTER_CLASS_METHOD(Obj_SetScale2, "SetScale")
    REGISTER_CLASS_METHOD(Obj_SetOrigin1, "SetOrigin")
    REGISTER_CLASS_METHOD(Obj_SetOrigin2, "SetOrigin")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Obj::GetPosition, "GetPosition")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::GetRotation, "GetRotation")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Obj::GetScale, "GetScale")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::Obj::GetOrigin, "GetOrigin")
    REGISTER_CLASS_METHOD(Obj_Move1, "Move")
    REGISTER_CLASS_METHOD(Obj_Move2, "Move")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::Rotate, "Rotate")
    REGISTER_CLASS_METHOD(Obj_Scale1, "Scale")
    REGISTER_CLASS_METHOD(Obj_Scale2, "Scale")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::SetVisible, "SetVisible")
    REGISTER_CLASS_METHOD(&Gamestone::Obj::IsVisible, "IsVisible")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
