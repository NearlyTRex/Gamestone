// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Assert.h>
#include <Gamestone/Utility/Debug.h>
#include <Gamestone/Utility/Resources.h>
#include <Gamestone/Utility/Exception.h>

//===================================================================================
Gamestone::TextureResource::TextureResource():
    resource()
{
}
//===================================================================================
Gamestone::TextureResource::TextureResource(const SharedPtr<Texture>& ptr):
    resource(ptr)
{
}
//===================================================================================


//===================================================================================
Gamestone::FontResource::FontResource():
    resource()
{
}
//===================================================================================
Gamestone::FontResource::FontResource(const SharedPtr<Font>& ptr):
    resource(ptr)
{
}
//===================================================================================
const Gamestone::Glyph& Gamestone::FontResource::GetGlyph(UInt codepoint, UInt charsize, Bool bold) const
{
    // Get glyph
    return resource->getGlyph(codepoint, charsize, bold);
}
//===================================================================================
Gamestone::Float Gamestone::FontResource::GetKerning(UInt first, UInt second, UInt charsize) const
{
    // Get kerning
    return resource->getKerning(first, second, charsize);
}
//===================================================================================
Gamestone::Float Gamestone::FontResource::GetLineSpacing(UInt charsize) const
{
    // Get line spacing
    return resource->getLineSpacing(charsize);
}
//===================================================================================


//===================================================================================
Gamestone::MusicResource::MusicResource():
    resource()
{
}
//===================================================================================
Gamestone::MusicResource::MusicResource(const SharedPtr<Music>& ptr):
    resource(ptr)
{
}
//===================================================================================


//===================================================================================
Gamestone::SoundResource::SoundResource():
    resource()
{
}
//===================================================================================
Gamestone::SoundResource::SoundResource(const SharedPtr<Sound>& ptr, const SharedPtr<SoundBuffer>& ptrBuffer):
    resource(ptr),
    resourceBuffer(ptrBuffer)
{
}
//===================================================================================


//===================================================================================
Gamestone::ResourceCache::ResourceCache():
    cache()
{
}
//===================================================================================
Gamestone::ResourceCache::ResourceCache(const ResourceCache& other):
    cache()
{
}
//===================================================================================
Gamestone::TextureResource Gamestone::ResourceCache::AcquireTexture(const String& file)
{
    // Load resource if necessary
    return TextureResource(cache.acquire(LoadResourceFromFile<Texture>(file)));
}
//===================================================================================
Gamestone::FontResource Gamestone::ResourceCache::AcquireFont(const String& file)
{
    // Load resource if necessary
    return FontResource(cache.acquire(LoadResourceFromFile<Font>(file)));
}
//===================================================================================
Gamestone::MusicResource Gamestone::ResourceCache::AcquireMusic(const String& file)
{
    // Load resource but since the cache does not store it, return the only pointer
    SharedPtr<Music> music(new Music());
    ASSERT_ERROR(music->openFromFile(file.c_str()), "Could not open music from file %s", file.c_str());
    return MusicResource(music);
}
//===================================================================================
Gamestone::SoundResource Gamestone::ResourceCache::AcquireSound(const String& file)
{
    // Load resource if necessary
    SharedPtr<SoundBuffer> soundBuffer(cache.acquire(LoadResourceFromFile<SoundBuffer>(file)));
    SharedPtr<Sound> sound(new Sound());
    sound->setBuffer(*soundBuffer);
    return SoundResource(sound, soundBuffer);
}
//===================================================================================
Gamestone::Bool Gamestone::ResourceCache::ReleaseTexture(const String& file)
{
    // Release resource if possible
    return cache.release(LoadResourceFromFile<Texture>(file));
}
//===================================================================================
Gamestone::Bool Gamestone::ResourceCache::ReleaseFont(const String& file)
{
    // Release resource if possible
    return cache.release(LoadResourceFromFile<Font>(file));
}
//===================================================================================
Gamestone::Bool Gamestone::ResourceCache::ReleaseMusic(const String& file)
{
    // Resource is never loaded into cache, so no need to do anything
    return true;
}
//===================================================================================
Gamestone::Bool Gamestone::ResourceCache::ReleaseSound(const String& file)
{
    // Release resource if possible
    return cache.release(LoadResourceFromFile<SoundBuffer>(file));
}
//===================================================================================
void Gamestone::ResourceCache::SetAutoRelease()
{
    // Set to auto release
    cache.setReleaseStrategy(AutoReleaseStrategy);
}
//===================================================================================
void Gamestone::ResourceCache::SetExplicitRelease()
{
    // Set to explicit release
    cache.setReleaseStrategy(ExplicitReleaseStrategy);
}
//===================================================================================
