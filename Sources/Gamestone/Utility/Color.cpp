// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Color.h>

//===================================================================================
Gamestone::String Gamestone::GetPrintableString(const Color& color)
{
    // Get printable string
    String printableString = "";
    printableString += "(";
    printableString += StringCast<String>(static_cast<Int>(color.r));
    printableString += ", ";
    printableString += StringCast<String>(static_cast<Int>(color.g));
    printableString += ", ";
    printableString += StringCast<String>(static_cast<Int>(color.b));
    printableString += ", ";
    printableString += StringCast<String>(static_cast<Int>(color.a));
    printableString += ")";
    return printableString;
}
//===================================================================================
Gamestone::Color Gamestone::ConvertHTMLColor(const String& htmlcolor)
{
    // Color string
    String colorstring = htmlcolor;
    
    // Remove # prefix
    if (colorstring.find("#") != String::npos)
    {
        colorstring = colorstring.substr(1);
    }
    
    // Get color integer
    UInt colorinteger;
    StringStream stringconverter;
    stringconverter << HexFormat << colorstring;
    stringconverter >> colorinteger;
    
    // Build result
    Color result;
    result.r = ((colorinteger >> 16) & 0xFF);
    result.g = ((colorinteger >> 8) & 0xFF);
    result.b = ((colorinteger >> 0) & 0xFF);
    result.a = (255);
    
    // Return result
    return result;
}
//===================================================================================
