// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/SoundPlayer/SoundPlayer_wrapper.h>

//===============================================================================================
void register_SoundPlayer()
{
    // Typedefs
    typedef void (Gamestone::SoundPlayer::*SoundPlayer_Void_FloatFloatFloat)(Gamestone::Float, Gamestone::Float, Gamestone::Float);
    typedef void (Gamestone::SoundPlayer::*SoundPlayer_Void_Vector)(const Gamestone::Vector3f&);
    
    // Overloaded methods
    SoundPlayer_Void_FloatFloatFloat SoundPlayer_SetPosition3D1 = &Gamestone::SoundPlayer::SetPosition3D;
    SoundPlayer_Void_Vector SoundPlayer_SetPosition3D2 = &Gamestone::SoundPlayer::SetPosition3D;
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE1(Gamestone::SoundPlayer, InitDef<const Gamestone::SoundResource&>(), Gamestone::Obj, "SoundPlayer")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::Play, "Play")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::Pause, "Pause")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::Stop, "Stop")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::IsPlaying, "IsPlaying")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::IsPaused, "IsPaused")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::IsStopped, "IsStopped")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::IsRelativeToListener, "IsRelativeToListener")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetLoop, "GetLoop")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetPlayingOffset, "GetPlayingOffset")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetPitch, "GetPitch")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetVolume, "GetVolume")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::SoundPlayer::GetPosition3D, "GetPosition3D")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetMinDistance, "GetMinDistance")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetAttenuation, "GetAttenuation")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetSampleRate, "GetSampleRate")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetChannelCount, "GetChannelCount")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::GetDuration, "GetDuration")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetLoop, "SetLoop")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetPlayingOffset, "SetPlayingOffset")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetPitch, "SetPitch")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetVolume, "SetVolume")
    REGISTER_CLASS_METHOD(SoundPlayer_SetPosition3D1, "SetPosition3D")
    REGISTER_CLASS_METHOD(SoundPlayer_SetPosition3D2, "SetPosition3D")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetMinDistance, "SetMinDistance")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetAttenuation, "SetAttenuation")
    REGISTER_CLASS_METHOD(&Gamestone::SoundPlayer::SetRelativeToListener, "SetRelativeToListener")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
