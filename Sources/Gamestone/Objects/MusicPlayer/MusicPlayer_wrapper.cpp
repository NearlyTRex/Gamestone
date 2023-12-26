// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/MusicPlayer/MusicPlayer_wrapper.h>

//===============================================================================================
void register_MusicPlayer()
{
    // Typedefs
    typedef void (Gamestone::MusicPlayer::*MusicPlayer_Void_FloatFloatFloat)(Gamestone::Float, Gamestone::Float, Gamestone::Float);
    typedef void (Gamestone::MusicPlayer::*MusicPlayer_Void_Vector)(const Gamestone::Vector3f&);
    
    // Overloaded methods
    MusicPlayer_Void_FloatFloatFloat MusicPlayer_SetPosition3D1 = &Gamestone::MusicPlayer::SetPosition3D;
    MusicPlayer_Void_Vector MusicPlayer_SetPosition3D2 = &Gamestone::MusicPlayer::SetPosition3D;
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE1(Gamestone::MusicPlayer, InitDef<const Gamestone::MusicResource&>(), Gamestone::Obj, "MusicPlayer")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::Play, "Play")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::Pause, "Pause")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::Stop, "Stop")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::IsPlaying, "IsPlaying")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::IsPaused, "IsPaused")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::IsStopped, "IsStopped")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::IsRelativeToListener, "IsRelativeToListener")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetLoop, "GetLoop")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetPlayingOffset, "GetPlayingOffset")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetPitch, "GetPitch")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetVolume, "GetVolume")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::MusicPlayer::GetPosition3D, "GetPosition3D")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetMinDistance, "GetMinDistance")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetAttenuation, "GetAttenuation")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetSampleRate, "GetSampleRate")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetChannelCount, "GetChannelCount")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::GetDuration, "GetDuration")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetLoop, "SetLoop")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetPlayingOffset, "SetPlayingOffset")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetPitch, "SetPitch")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetVolume, "SetVolume")
    REGISTER_CLASS_METHOD(MusicPlayer_SetPosition3D1, "SetPosition3D")
    REGISTER_CLASS_METHOD(MusicPlayer_SetPosition3D2, "SetPosition3D")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetMinDistance, "SetMinDistance")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetAttenuation, "SetAttenuation")
    REGISTER_CLASS_METHOD(&Gamestone::MusicPlayer::SetRelativeToListener, "SetRelativeToListener")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
