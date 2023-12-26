// Title: Rect

// Gamestone Engine
// Licensed under the LGPL
#ifndef RECT_H
#define RECT_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/MathTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Function: GetPrintableString
    // Get printable string
    //
    // Parameters:
    // rect - Rect object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const RectInt& rect);
    
    // Function: GetPrintableString
    // Get printable string
    //
    // Parameters:
    // rect - Rect object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const RectFloat& rect);
};

#endif
