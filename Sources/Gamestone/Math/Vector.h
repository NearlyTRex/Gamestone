// Title: Vector

// Gamestone Engine
// Licensed under the LGPL
#ifndef VECTOR_H
#define VECTOR_H

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
    // vector - Vector object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const Vector2f& vector);
    
    // Function: GetPrintableString
    // Get printable string
    //
    // Parameters:
    // vector - Vector object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const Vector2u& vector);
    
    // Function: GetPrintableString
    // Get printable string
    //
    // Parameters:
    // vector - Vector object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const Vector2i& vector);
    
    // Function: GetPrintableString
    // Get printable string
    //
    // Parameters:
    // vector - Vector object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const Vector3f& vector);
    
    // Function: GetPrintableString
    // Get printable string
    //
    // Parameters:
    // vector - Vector object
    //
    // Returns:
    // Printable string
    String GetPrintableString(const Vector3i& vector);
};

#endif
