// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/SoundPlayer/SoundPlayer.h>
#include <Gamestone/Application/Application.h>

//==================================================================================
Gamestone::SoundPlayer::SoundPlayer(const SoundResource& sound):
    Obj(),
    mSoundPtr(),
    mSoundBufferPtr(),
    mPosition3D()
{
    // Set resource data
    mSoundPtr = sound.resource;
    mSoundBufferPtr = sound.resourceBuffer;
    mPosition3D = mSoundPtr->getPosition();
}
//==================================================================================
Gamestone::SoundPlayer::~SoundPlayer()
{
}
//==================================================================================
void Gamestone::SoundPlayer::Update(Float deltatime)
{
}
//==================================================================================
void Gamestone::SoundPlayer::Render()
{
}
//==================================================================================
void Gamestone::SoundPlayer::Play()
{
    // Play sound
    mSoundPtr->play();
}
//==================================================================================
void Gamestone::SoundPlayer::Pause()
{
    // Pause sound
    mSoundPtr->pause();
}
//==================================================================================
void Gamestone::SoundPlayer::Stop()
{
    // Stop sound
    mSoundPtr->stop();
}
//==================================================================================
Gamestone::Bool Gamestone::SoundPlayer::IsPlaying() const
{
    // Is playing
    return (mSoundPtr->getStatus() == SoundSourceEnum::Playing);
}
//==================================================================================
Gamestone::Bool Gamestone::SoundPlayer::IsPaused() const
{
    // Is paused
    return (mSoundPtr->getStatus() == SoundSourceEnum::Paused);
}
//==================================================================================
Gamestone::Bool Gamestone::SoundPlayer::IsStopped() const
{
    // Is stopped
    return (mSoundPtr->getStatus() == SoundSourceEnum::Stopped);
}
//==================================================================================
Gamestone::Bool Gamestone::SoundPlayer::IsRelativeToListener() const
{
    // Is relative to listener
    return mSoundPtr->isRelativeToListener();
}
//==================================================================================
Gamestone::Bool Gamestone::SoundPlayer::GetLoop() const
{
    // Get looping status
    return mSoundPtr->getLoop();
}
//==================================================================================
Gamestone::TimeValue Gamestone::SoundPlayer::GetPlayingOffset() const
{
    // Get playing offset
    return mSoundPtr->getPlayingOffset();
}
//==================================================================================
Gamestone::Float Gamestone::SoundPlayer::GetPitch() const
{
    // Get pitch
    return mSoundPtr->getPitch();
}
//==================================================================================
Gamestone::Float Gamestone::SoundPlayer::GetVolume() const
{
    // Get volume
    return mSoundPtr->getVolume();
}
//==================================================================================
const Gamestone::Vector3f& Gamestone::SoundPlayer::GetPosition3D() const
{
    // Get position
    return mPosition3D;
}
//==================================================================================
Gamestone::Float Gamestone::SoundPlayer::GetMinDistance() const
{
    // Get minimum distance
    return mSoundPtr->getMinDistance();
}
//==================================================================================
Gamestone::Float Gamestone::SoundPlayer::GetAttenuation() const
{
    // Get attenuation
    return mSoundPtr->getAttenuation();
}
//==================================================================================
Gamestone::UInt Gamestone::SoundPlayer::GetSampleRate() const
{
    // Get sample rate
    return mSoundPtr->getBuffer()->getSampleRate();
}
//==================================================================================
Gamestone::UInt Gamestone::SoundPlayer::GetChannelCount() const
{
    // Get channel count
    return mSoundPtr->getBuffer()->getChannelCount();
}
//==================================================================================
Gamestone::TimeValue Gamestone::SoundPlayer::GetDuration() const
{
    // Get duration
    return mSoundPtr->getBuffer()->getDuration();
}
//==================================================================================
void Gamestone::SoundPlayer::SetLoop(Bool loop)
{
    // Set looping status
    mSoundPtr->setLoop(loop);
}
//==================================================================================
void Gamestone::SoundPlayer::SetPlayingOffset(TimeValue offset)
{
    // Set playing time offset
    mSoundPtr->setPlayingOffset(offset);
}
//==================================================================================
void Gamestone::SoundPlayer::SetPitch(Float pitch)
{
    // Set pitch
    mSoundPtr->setPitch(pitch);
}
//==================================================================================
void Gamestone::SoundPlayer::SetVolume(Float volume)
{
    // Set volume
    mSoundPtr->setVolume(volume);
}
//==================================================================================
void Gamestone::SoundPlayer::SetPosition3D(Float x, Float y, Float z)
{
    // Set position
    mSoundPtr->setPosition(x, y, z);
    mPosition3D = mSoundPtr->getPosition();
}
//==================================================================================
void Gamestone::SoundPlayer::SetPosition3D(const Vector3f& position)
{
    // Set position
    mSoundPtr->setPosition(position);
    mPosition3D = mSoundPtr->getPosition();
}
//==================================================================================
void Gamestone::SoundPlayer::SetMinDistance(Float min)
{
    // Set minimum distance
    mSoundPtr->setMinDistance(min);
}
//==================================================================================
void Gamestone::SoundPlayer::SetAttenuation(Float attenuation)
{
    // Set attenuation
    mSoundPtr->setAttenuation(attenuation);
}
//==================================================================================
void Gamestone::SoundPlayer::SetRelativeToListener(Bool relative)
{
    // Set relative to listener
    mSoundPtr->setRelativeToListener(relative);
}
//==================================================================================
