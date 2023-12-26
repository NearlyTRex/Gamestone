// Title: Resources

// Gamestone Engine
// Licensed under the LGPL
#ifndef RESOURCES_H
#define RESOURCES_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/AudioTypes.h>
#include <Gamestone/Types/GraphicTypes.h>
#include <Gamestone/Types/ResourceTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/Pointer.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: TextureResource
    // Texture resource class
    class TextureResource
    {
    public:
        
        // Constructor: TextureResource
        // Default constructor
        TextureResource();
        
        // Constructor: TextureResource
        // Pointer constructor
        //
        // Parameters:
        // ptr - Pointer to resource
        TextureResource(const SharedPtr<Texture>& ptr);
        
        // Variable: resource
        // Resource pointer
        SharedPtr<Texture> resource;
    };
    
    // Class: FontResource
    // Font resource class
    class FontResource
    {
    public:
        
        // Constructor: FontResource
        // Default constructor
        FontResource();
        
        // Constructor: FontResource
        // Pointer constructor
        //
        // Parameters:
        // ptr - Pointer to resource
        FontResource(const SharedPtr<Font>& ptr);
        
        // Method: GetGlyph
        // Gets a glyph of the font
        //
        // Parameters:
        // codepoint - Unicode code point of the character to get
        // charsize - Character size
        // bold - Retrieve bold or regular version
        //
        // Returns:
        // Corresponding glyph
        const Glyph& GetGlyph(UInt codepoint, UInt charsize, Bool bold) const;
        
        // Method: GetKerning
        // Gets kerning offset of two glyphs
        //
        // Parameters:
        // first - Unicode code point of the first character
        // second - Unicode code point of the second character
        // charsize - Character size
        //
        // Returns:
        // Kerning value for the first and second, in pixels
        Float GetKerning(UInt first, UInt second, UInt charsize) const;
        
        // Method: GetLineSpacing
        // Gets line spacing
        //
        // Parameters:
        // charsize - Character size
        //
        // Returns:
        // Line spacing
        Float GetLineSpacing(UInt charsize) const;
        
        // Variable: resource
        // Resource pointer
        SharedPtr<Font> resource;
    };
    
    // Class: MusicResource
    // Music resource class
    class MusicResource
    {
    public:
        
        // Constructor: MusicResource
        // Default constructor
        MusicResource();
        
        // Constructor: MusicResource
        // Pointer constructor
        //
        // Parameters:
        // ptr - Pointer to resource
        MusicResource(const SharedPtr<Music>& ptr);
        
        // Variable: resource
        // Resource pointer
        SharedPtr<Music> resource;
    };
    
    // Class: SoundResource
    // Sound resource class
    class SoundResource
    {
    public:
        
        // Constructor: SoundResource
        // Default constructor
        SoundResource();
        
        // Constructor: SoundResource
        // Pointer constructor
        //
        // Parameters:
        // ptr - Pointer to resource
        SoundResource(const SharedPtr<Sound>& ptr, const SharedPtr<SoundBuffer>& ptrBuffer);
        
        // Variable: resource
        // Resource pointer
        SharedPtr<Sound> resource;
        
        // Variable: resourceBuffer
        // Resource buffer pointer
        SharedPtr<SoundBuffer> resourceBuffer;
    };
    
    // Class: ResourceCache
    // Resource cache class
    class ResourceCache
    {
    public:
        
        // Constructor: ResourceCache
        // Default constructor
        ResourceCache();
        
        // Constructor: ResourceCache
        // Copy constructor
        //
        // Parameters:
        // other - Other object
        ResourceCache(const ResourceCache& other);
        
        // Method: AcquireTexture
        // Acquires texture resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // Texture resource
        TextureResource AcquireTexture(const String& file);
        
        // Method: AcquireFont
        // Acquires font resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // Font resource
        FontResource AcquireFont(const String& file);
        
        // Method: AcquireMusic
        // Acquires music resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // Music resource
        MusicResource AcquireMusic(const String& file);
        
        // Method: AcquireSound
        // Acquires sound resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // Sound resource
        SoundResource AcquireSound(const String& file);
        
        // Method: ReleaseTexture
        // Releases texture resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // True if resource was unused, false otherwise
        Bool ReleaseTexture(const String& file);
        
        // Method: ReleaseFont
        // Releases font resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // True if resource was unused, false otherwise
        Bool ReleaseFont(const String& file);
        
        // Method: ReleaseMusic
        // Releases music resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // True if resource was unused, false otherwise
        Bool ReleaseMusic(const String& file);
        
        // Method: ReleaseSound
        // Releases sound resource
        //
        // Parameters:
        // file - Resource file
        //
        // Returns:
        // True if resource was unused, false otherwise
        Bool ReleaseSound(const String& file);
        
        // Method: SetAutoRelease
        // Resources are immediately released as soon as they are unused
        void SetAutoRelease();
        
        // Method: SetExplicitRelease
        // Unused resources are kept in memory until they are explicitly released or the ResourceCache is destroyed
        void SetExplicitRelease();
        
        // Variable: cache
        // Resource cache
        MultiResourceCache cache;
    };
};

#endif
