// Title: Color

// Gamestone Engine
// Licensed under the LGPL
#ifndef COLOR_H
#define COLOR_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Method: GetPrintableString
    // Gets printable string
    //
    // Parameters:
    // color - Color object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const Color& color);
    
    // Method: ConvertHTMLColor
    // Converts color from HTML notation
    //
    // Parameters:
    // htmlcolor - Color string in HTML notation
    //
    // Returns:
    // Equivalent color
    Color ConvertHTMLColor(const String& htmlcolor);
};

#endif
