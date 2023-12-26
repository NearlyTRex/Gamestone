// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Resources_wrapper.h>

//===============================================================================================
void register_Resources()
{
    // Expose class
    REGISTER_CLASS_HEADER_NONCONSTRUCT(Gamestone::Glyph, "Glyph")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Glyph::advance, "Advance")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Glyph::bounds, "Bounds")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Glyph::textureRect, "TextureRect")
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_NONCONSTRUCT(Gamestone::TextureResource, "TextureResource")
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_NONCONSTRUCT(Gamestone::FontResource, "FontResource")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::FontResource::GetGlyph, "GetGlyph")
    REGISTER_CLASS_METHOD(&Gamestone::FontResource::GetKerning, "GetKerning")
    REGISTER_CLASS_METHOD(&Gamestone::FontResource::GetLineSpacing, "GetLineSpacing")
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_NONCONSTRUCT(Gamestone::MusicResource, "MusicResource")
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_NONCONSTRUCT(Gamestone::SoundResource, "SoundResource")
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::ResourceCache, "ResourceCache")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::AcquireTexture, "AcquireTexture")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::AcquireFont, "AcquireFont")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::AcquireMusic, "AcquireMusic")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::AcquireSound, "AcquireSound")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::ReleaseTexture, "ReleaseTexture")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::ReleaseFont, "ReleaseFont")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::ReleaseMusic, "ReleaseMusic")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::ReleaseSound, "ReleaseSound")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::SetAutoRelease, "SetAutoRelease")
    REGISTER_CLASS_METHOD(&Gamestone::ResourceCache::SetExplicitRelease, "SetExplicitRelease")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
