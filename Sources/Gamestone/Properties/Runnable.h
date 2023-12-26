// Title: Runnable

// Gamestone Engine
// Licensed under the LGPL
#ifndef RUNNABLE_H
#define RUNNABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Runnable
    // Runnable property
    class Runnable
    {
    public:
        
        // Method: SetRunning
        // Sets running status
        //
        // Parameters:
        // running - Running status
        virtual void SetRunning(Bool running) = 0;
        
        // Method: IsRunning
        // Gets running status
        //
        // Returns:
        // Running status
        virtual Bool IsRunning() const = 0;
    };
};

#endif
