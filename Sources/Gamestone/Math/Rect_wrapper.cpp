// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/Rect_wrapper.h>
#include <Gamestone/Math/Vector.h>

//===============================================================================
void register_Rect()
{
    // Typedefs
    typedef Gamestone::Bool (Gamestone::RectInt::*RectInt_Bool_IntInt)(Gamestone::Int, Gamestone::Int) const;
    typedef Gamestone::Bool (Gamestone::RectInt::*RectInt_Bool_Vector)(const Gamestone::Vector2i&) const;
    typedef Gamestone::Bool (Gamestone::RectInt::*RectInt_Bool_Rect)(const Gamestone::RectInt&) const;
    typedef Gamestone::Bool (Gamestone::RectFloat::*RectFloat_Bool_FloatFloat)(Gamestone::Float, Gamestone::Float) const;
    typedef Gamestone::Bool (Gamestone::RectFloat::*RectFloat_Bool_Vector)(const Gamestone::Vector2f&) const;
    typedef Gamestone::Bool (Gamestone::RectFloat::*RectFloat_Bool_Rect)(const Gamestone::RectFloat&) const;
    typedef Gamestone::String (*RectInt_String_Rect)(const Gamestone::RectInt&);
    typedef Gamestone::String (*RectFloat_String_Rect)(const Gamestone::RectFloat&);
    
    // Overloaded methods
    RectInt_Bool_IntInt RectInt_Contains1 = &Gamestone::RectInt::contains;
    RectInt_Bool_Vector RectInt_Contains2 = &Gamestone::RectInt::contains;
    RectInt_Bool_Rect RectInt_Intersects = &Gamestone::RectInt::intersects;
    RectFloat_Bool_FloatFloat RectFloat_Contains1 = &Gamestone::RectFloat::contains;
    RectFloat_Bool_Vector RectFloat_Contains2 = &Gamestone::RectFloat::contains;
    RectFloat_Bool_Rect RectFloat_Intersects = &Gamestone::RectFloat::intersects;
    RectInt_String_Rect RectInt_GetPrintableString = &Gamestone::GetPrintableString;
    RectFloat_String_Rect RectFloat_GetPrintableString = &Gamestone::GetPrintableString;
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::RectInt, "RectInt")
    REGISTER_CLASS_INIT1(const Gamestone::RectInt&)
    REGISTER_CLASS_INIT2(const Gamestone::Vector2i&, const Gamestone::Vector2i&)
    REGISTER_CLASS_INIT4(Gamestone::Int, Gamestone::Int, Gamestone::Int, Gamestone::Int)
    REGISTER_CLASS_METHOD(RectInt_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_METHOD(RectInt_Contains1, "Contains")
    REGISTER_CLASS_METHOD(RectInt_Contains2, "Contains")
    REGISTER_CLASS_METHOD(RectInt_Intersects, "Intersects")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectInt::left, "Left")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectInt::top, "Top")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectInt::width, "Width")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectInt::height, "Height")
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::RectInt())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::RectInt())
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::RectFloat, "RectFloat")
    REGISTER_CLASS_INIT1(const Gamestone::RectFloat&)
    REGISTER_CLASS_INIT2(const Gamestone::Vector2f&, const Gamestone::Vector2f&)
    REGISTER_CLASS_INIT4(Gamestone::Float, Gamestone::Float, Gamestone::Float, Gamestone::Float)
    REGISTER_CLASS_METHOD(RectFloat_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_METHOD(RectFloat_Contains1, "Contains")
    REGISTER_CLASS_METHOD(RectFloat_Contains2, "Contains")
    REGISTER_CLASS_METHOD(RectFloat_Intersects, "Intersects")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectFloat::left, "Left")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectFloat::top, "Top")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectFloat::width, "Width")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::RectFloat::height, "Height")
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::RectFloat())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::RectFloat())
    REGISTER_CLASS_FOOTER()
}
//===============================================================================
