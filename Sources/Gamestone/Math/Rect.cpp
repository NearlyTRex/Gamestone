// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Math/Rect.h>

//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const RectInt& rect)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(rect.left);
    result += ", ";
    result += StringCast<String>(rect.top);
    result += ", ";
    result += StringCast<String>(rect.width);
    result += ", ";
    result += StringCast<String>(rect.height);
    result += ")";
    return result;
}
//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const RectFloat& rect)
{
    // Create printable string
    String result;
    result += "(";
    result += StringCast<String>(rect.left);
    result += ", ";
    result += StringCast<String>(rect.top);
    result += ", ";
    result += StringCast<String>(rect.width);
    result += ", ";
    result += StringCast<String>(rect.height);
    result += ")";
    return result;
}
//===================================================================================
