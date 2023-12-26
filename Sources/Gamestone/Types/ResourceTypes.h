// Title: ResourceTypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef RESOURCETYPES_H
#define RESOURCETYPES_H

// System includes
#include <Thor/Resources.hpp>

// Define: LoadResourceFromFile
// Create resource from a file
#define LoadResourceFromFile thor::Resources::fromFile

// Define: LoadResourceFromMemory
// Create resource from memory
#define LoadResourceFromMemory thor::Resources::fromMemory

// Define: LoadResourceFromStream
// Create resource from a stream
#define LoadResourceFromStream thor::Resources::fromStream

// Define: LoadResourceFromSamples
// Create resource from samples
#define LoadResourceFromSamples thor::Resources::fromSamples

// Define: LoadResourceFromPixels
// Create resource from pixels
#define LoadResourceFromPixels thor::Resources::fromPixels

// Define: LoadResourceFromColor
// Create resource from color
#define LoadResourceFromColor thor::Resources::fromColor

// Define: LoadResourceFromImage
// Create resource from image
#define LoadResourceFromImage thor::Resources::fromImage

// Define: AutoReleaseStrategy
// Automatic release strategy for resources
#define AutoReleaseStrategy thor::Resources::AutoRelease

// Define: ExplicitReleaseStrategy
// Manual release strategy for resources
#define ExplicitReleaseStrategy thor::Resources::ExplicitRelease

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: MultiCache
    // Multipurpose cache type
    typedef thor::MultiResourceCache MultiResourceCache;
};

#endif
