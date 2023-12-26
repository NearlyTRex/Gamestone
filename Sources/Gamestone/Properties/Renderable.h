// Title: Renderable

// Gamestone Engine
// Licensed under the LGPL
#ifndef RENDERABLE_H
#define RENDERABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Renderable
    // Renderable property
    class Renderable
    {
    public:
        
        // Method: Update
        // Update from latest frame
        //
        // Parameters:
        // deltatime - Time since last frame
        virtual void Update(Float deltatime) = 0;
        
        // Method: Render
        // Renders current frame
        virtual void Render() = 0;
        
        // Method: SetRenderDepth
        // Sets render depth, which is useful when trying to order things
        // with batching, etc
        //
        // depth - New depth
        virtual void SetRenderDepth(Int depth) = 0;
        
        // Method: GetRenderDepth
        // Gets render depth
        //
        // Returns:
        // Current depth
        virtual Int GetRenderDepth() const = 0;
    };
};

#endif
