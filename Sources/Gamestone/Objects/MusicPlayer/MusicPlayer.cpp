// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/MusicPlayer/MusicPlayer.h>
#include <Gamestone/Application/Application.h>

//==================================================================================
Gamestone::MusicPlayer::MusicPlayer(const MusicResource& music):
    Obj(),
    mMusicPtr(),
    mPosition3D()
{
    // Set resource data
    mMusicPtr = music.resource;
    mPosition3D = mMusicPtr->getPosition();
}
//==================================================================================
Gamestone::MusicPlayer::~MusicPlayer()
{
}
//==================================================================================
void Gamestone::MusicPlayer::Update(Float deltatime)
{
}
//==================================================================================
void Gamestone::MusicPlayer::Render()
{
}
//==================================================================================
void Gamestone::MusicPlayer::Play()
{
    // Play music
    mMusicPtr->play();
}
//==================================================================================
void Gamestone::MusicPlayer::Pause()
{
    // Pause music
    mMusicPtr->pause();
}
//==================================================================================
void Gamestone::MusicPlayer::Stop()
{
    // Stop music
    mMusicPtr->stop();
}
//==================================================================================
Gamestone::Bool Gamestone::MusicPlayer::IsPlaying() const
{
    // Is playing
    return (mMusicPtr->getStatus() == MusicSourceEnum::Playing);
}
//==================================================================================
Gamestone::Bool Gamestone::MusicPlayer::IsPaused() const
{
    // Is paused
    return (mMusicPtr->getStatus() == MusicSourceEnum::Paused);
}
//==================================================================================
Gamestone::Bool Gamestone::MusicPlayer::IsStopped() const
{
    // Is stopped
    return (mMusicPtr->getStatus() == MusicSourceEnum::Stopped);
}
//==================================================================================
Gamestone::Bool Gamestone::MusicPlayer::IsRelativeToListener() const
{
    // Is relative to listener
    return mMusicPtr->isRelativeToListener();
}
//==================================================================================
Gamestone::Bool Gamestone::MusicPlayer::GetLoop() const
{
    // Get loop status
    return mMusicPtr->getLoop();
}
//==================================================================================
Gamestone::TimeValue Gamestone::MusicPlayer::GetPlayingOffset() const
{
    // Get playing offset
    return mMusicPtr->getPlayingOffset();
}
//==================================================================================
Gamestone::Float Gamestone::MusicPlayer::GetPitch() const
{
    // Get pitch
    return mMusicPtr->getPitch();
}
//==================================================================================
Gamestone::Float Gamestone::MusicPlayer::GetVolume() const
{
    // Get volume
    return mMusicPtr->getVolume();
}
//==================================================================================
const Gamestone::Vector3f& Gamestone::MusicPlayer::GetPosition3D() const
{
    // Get position
    return mPosition3D;
}
//==================================================================================
Gamestone::Float Gamestone::MusicPlayer::GetMinDistance() const
{
    // Get minimum distance
    return mMusicPtr->getMinDistance();
}
//==================================================================================
Gamestone::Float Gamestone::MusicPlayer::GetAttenuation() const
{
    // Get attenuation
    return mMusicPtr->getAttenuation();
}
//==================================================================================
Gamestone::UInt Gamestone::MusicPlayer::GetSampleRate() const
{
    // Get sample rate
    return mMusicPtr->getSampleRate();
}
//==================================================================================
Gamestone::UInt Gamestone::MusicPlayer::GetChannelCount() const
{
    // Get channel count
    return mMusicPtr->getChannelCount();
}
//==================================================================================
Gamestone::TimeValue Gamestone::MusicPlayer::GetDuration() const
{
    // Get duration
    return mMusicPtr->getDuration();
}
//==================================================================================
void Gamestone::MusicPlayer::SetLoop(Bool loop)
{
    // Set looping status
    mMusicPtr->setLoop(loop);
}
//==================================================================================
void Gamestone::MusicPlayer::SetPlayingOffset(TimeValue offset)
{
    // Set playing offset
    mMusicPtr->setPlayingOffset(offset);
}
//==================================================================================
void Gamestone::MusicPlayer::SetPitch(Float pitch)
{
    // Set pitch
    mMusicPtr->setPitch(pitch);
}
//==================================================================================
void Gamestone::MusicPlayer::SetVolume(Float volume)
{
    // Set volume
    mMusicPtr->setVolume(volume);
}
//==================================================================================
void Gamestone::MusicPlayer::SetPosition3D(Float x, Float y, Float z)
{
    // Set position
    mMusicPtr->setPosition(x, y, z);
    mPosition3D = mMusicPtr->getPosition();
}
//==================================================================================
void Gamestone::MusicPlayer::SetPosition3D(const Vector3f& position)
{
    // Set position
    mMusicPtr->setPosition(position);
    mPosition3D = mMusicPtr->getPosition();
}
//==================================================================================
void Gamestone::MusicPlayer::SetMinDistance(Float distance)
{
    // Set minimum distance
    mMusicPtr->setMinDistance(distance);
}
//==================================================================================
void Gamestone::MusicPlayer::SetAttenuation(Float attenuation)
{
    // Set attenuation
    mMusicPtr->setAttenuation(attenuation);
}
//==================================================================================
void Gamestone::MusicPlayer::SetRelativeToListener(Bool relative)
{
    // Set relative to listener
    mMusicPtr->setRelativeToListener(relative);
}
//==================================================================================
