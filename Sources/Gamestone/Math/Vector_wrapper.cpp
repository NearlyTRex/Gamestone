// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/Vector_wrapper.h>

//===============================================================================
void register_Vector()
{
    // Typedefs
    typedef Gamestone::String (*Vector2_String_Vector2f)(const Gamestone::Vector2f&);
    typedef Gamestone::String (*Vector2_String_Vector2u)(const Gamestone::Vector2u&);
    typedef Gamestone::String (*Vector2_String_Vector2i)(const Gamestone::Vector2i&);
    typedef Gamestone::String (*Vector3_String_Vector3f)(const Gamestone::Vector3f&);
    typedef Gamestone::String (*Vector3_String_Vector3i)(const Gamestone::Vector3i&);
    
    // Overloaded methods
    Vector2_String_Vector2f Vector2Float_GetPrintableString = &Gamestone::GetPrintableString;
    Vector2_String_Vector2u Vector2Unsigned_GetPrintableString = &Gamestone::GetPrintableString;
    Vector2_String_Vector2i Vector2Int_GetPrintableString = &Gamestone::GetPrintableString;
    Vector3_String_Vector3f Vector3Float_GetPrintableString = &Gamestone::GetPrintableString;
    Vector3_String_Vector3i Vector3Int_GetPrintableString = &Gamestone::GetPrintableString;
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Vector2f, "Vector2f")
    REGISTER_CLASS_INIT2(Gamestone::Float, Gamestone::Float)
    REGISTER_CLASS_METHOD(Vector2Float_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector2f::x, "X")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector2f::y, "Y")
    REGISTER_CLASS_OPERATOR(-SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject += Gamestone::Vector2f())
    REGISTER_CLASS_OPERATOR(SelfObject -= Gamestone::Vector2f())
    REGISTER_CLASS_OPERATOR(SelfObject + Gamestone::Vector2f())
    REGISTER_CLASS_OPERATOR(SelfObject - Gamestone::Vector2f())
    REGISTER_CLASS_OPERATOR(SelfObject * Gamestone::Float())
    REGISTER_CLASS_OPERATOR(Gamestone::Float() * SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject *= Gamestone::Float())
    REGISTER_CLASS_OPERATOR(SelfObject / Gamestone::Float())
    REGISTER_CLASS_OPERATOR(SelfObject /= Gamestone::Float())
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::Vector2f())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::Vector2f())
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Vector2u, "Vector2u")
    REGISTER_CLASS_INIT2(Gamestone::UInt, Gamestone::UInt)
    REGISTER_CLASS_METHOD(Vector2Unsigned_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector2u::x, "X")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector2u::y, "Y")
    REGISTER_CLASS_OPERATOR(-SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject += Gamestone::Vector2u())
    REGISTER_CLASS_OPERATOR(SelfObject -= Gamestone::Vector2u())
    REGISTER_CLASS_OPERATOR(SelfObject + Gamestone::Vector2u())
    REGISTER_CLASS_OPERATOR(SelfObject - Gamestone::Vector2u())
    REGISTER_CLASS_OPERATOR(SelfObject * Gamestone::UInt())
    REGISTER_CLASS_OPERATOR(Gamestone::UInt() * SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject *= Gamestone::UInt())
    REGISTER_CLASS_OPERATOR(SelfObject / Gamestone::UInt())
    REGISTER_CLASS_OPERATOR(SelfObject /= Gamestone::UInt())
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::Vector2u())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::Vector2u())
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Vector2i, "Vector2i")
    REGISTER_CLASS_INIT2(Gamestone::Int, Gamestone::Int)
    REGISTER_CLASS_METHOD(Vector2Int_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector2i::x, "X")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector2i::x, "Y")
    REGISTER_CLASS_OPERATOR(-SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject += Gamestone::Vector2i())
    REGISTER_CLASS_OPERATOR(SelfObject -= Gamestone::Vector2i())
    REGISTER_CLASS_OPERATOR(SelfObject + Gamestone::Vector2i())
    REGISTER_CLASS_OPERATOR(SelfObject - Gamestone::Vector2i())
    REGISTER_CLASS_OPERATOR(SelfObject * Gamestone::Int())
    REGISTER_CLASS_OPERATOR(Gamestone::Int() * SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject *= Gamestone::Int())
    REGISTER_CLASS_OPERATOR(SelfObject / Gamestone::Int())
    REGISTER_CLASS_OPERATOR(SelfObject /= Gamestone::Int())
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::Vector2i())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::Vector2i())
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Vector3f, "Vector3f")
    REGISTER_CLASS_INIT3(Gamestone::Float, Gamestone::Float, Gamestone::Float)
    REGISTER_CLASS_METHOD(Vector3Float_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector3f::x, "X")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector3f::x, "Y")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector3f::z, "Z")
    REGISTER_CLASS_OPERATOR(-SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject += Gamestone::Vector3f())
    REGISTER_CLASS_OPERATOR(SelfObject -= Gamestone::Vector3f())
    REGISTER_CLASS_OPERATOR(SelfObject + Gamestone::Vector3f())
    REGISTER_CLASS_OPERATOR(SelfObject - Gamestone::Vector3f())
    REGISTER_CLASS_OPERATOR(SelfObject * Gamestone::Float())
    REGISTER_CLASS_OPERATOR(Gamestone::Float() * SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject *= Gamestone::Float())
    REGISTER_CLASS_OPERATOR(SelfObject / Gamestone::Float())
    REGISTER_CLASS_OPERATOR(SelfObject /= Gamestone::Float())
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::Vector3f())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::Vector3f())
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Vector3i, "Vector3i")
    REGISTER_CLASS_INIT3(Gamestone::Int, Gamestone::Int, Gamestone::Int)
    REGISTER_CLASS_METHOD(Vector3Int_GetPrintableString, "GetPrintableString")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector3i::x, "X")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector3i::x, "Y")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Vector3i::z, "Z")
    REGISTER_CLASS_OPERATOR(-SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject += Gamestone::Vector3i())
    REGISTER_CLASS_OPERATOR(SelfObject -= Gamestone::Vector3i())
    REGISTER_CLASS_OPERATOR(SelfObject + Gamestone::Vector3i())
    REGISTER_CLASS_OPERATOR(SelfObject - Gamestone::Vector3i())
    REGISTER_CLASS_OPERATOR(SelfObject * Gamestone::Int())
    REGISTER_CLASS_OPERATOR(Gamestone::Int() * SelfObject)
    REGISTER_CLASS_OPERATOR(SelfObject *= Gamestone::Int())
    REGISTER_CLASS_OPERATOR(SelfObject / Gamestone::Int())
    REGISTER_CLASS_OPERATOR(SelfObject /= Gamestone::Int())
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::Vector3i())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::Vector3i())
    REGISTER_CLASS_FOOTER()
}
//===============================================================================
