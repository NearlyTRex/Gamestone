// Title: Printable

// Gamestone Engine
// Licensed under the LGPL
#ifndef PRINTABLE_H
#define PRINTABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Printable
    // Printable property
    class Printable
    {
    public:
        
        // Method: GetPrintableString
        // Gets printable string
        //
        // Returns:
        // Printable string
        virtual String GetPrintableString() const = 0;
    };
};

#endif
