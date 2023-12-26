// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/Vector.h>

//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const Vector2f& vector)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(vector.x);
    result += ", ";
    result += StringCast<String>(vector.y);
    result += ")";
    return result;
}
//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const Vector2u& vector)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(vector.x);
    result += ", ";
    result += StringCast<String>(vector.y);
    result += ")";
    return result;
}
//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const Vector2i& vector)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(vector.x);
    result += ", ";
    result += StringCast<String>(vector.y);
    result += ")";
    return result;
}
//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const Vector3f& vector)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(vector.x);
    result += ", ";
    result += StringCast<String>(vector.y);
    result += ", ";
    result += StringCast<String>(vector.z);
    result += ")";
    return result;
}
//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const Vector3i& vector)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(vector.x);
    result += ", ";
    result += StringCast<String>(vector.y);
    result += ", ";
    result += StringCast<String>(vector.z);
    result += ")";
    return result;
}
//===================================================================================
