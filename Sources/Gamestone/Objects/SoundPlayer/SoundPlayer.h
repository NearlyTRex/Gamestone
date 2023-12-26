// Title: SoundPlayer

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef SOUNDPLAYER_H
#define SOUNDPLAYER_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/AudioTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/Table.h>
#include <Gamestone/Objects/Obj/Obj.h>
#include <Gamestone/Utility/Resources.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: SoundPlayer
    // Sound player class
    class SoundPlayer:
        public Obj
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: SoundPlayer
        // Sound resource constructor
        //
        // Parameters:
        // sound - Sound resource
        SoundPlayer(const SoundResource& sound);
        
        // Destructor: ~SoundPlayer
        // Destroys object
        virtual ~SoundPlayer();
        
    //===========================================================
    // From Gamestone::Renderable
    //===========================================================
    public:
        
        // Method: Update
        // Update from latest frame
        //
        // Parameters:
        // deltatime - Time since last frame
        virtual void Update(Float deltatime);
        
        // Method: Render
        // Renders current frame
        virtual void Render();
        
    //===========================================================
    // From Gamestone::Audible
    //===========================================================
    public:
        
        // Method: Play
        // Starts playing audio
        virtual void Play();
        
        // Method: Pause
        // Pauses audio
        virtual void Pause();
        
        // Method: Stop
        // Stops audio
        virtual void Stop();
        
        // Method: IsPlaying
        // Determines if currently playing
        //
        // Returns:
        // Playing status
        virtual Bool IsPlaying() const;
        
        // Method: IsPaused
        // Determines if currently paused
        //
        // Returns:
        // Paused status
        virtual Bool IsPaused() const;
        
        // Method: IsStopped
        // Determines if currently stopped
        //
        // Returns:
        // Stopped status
        virtual Bool IsStopped() const;
        
        // Method: IsRelativeToListener
        // Returns whether audio is relative to the listener
        //
        // Returns:
        // Relative to listener boolean
        virtual Bool IsRelativeToListener() const;
        
        // Method: GetLoop
        // Gets audio looping status
        //
        // Returns:
        // Looping status
        virtual Bool GetLoop() const;
        
        // Method: GetPlayingOffset
        // Gets playing offset
        //
        // Returns:
        // Offset value
        virtual TimeValue GetPlayingOffset() const;
        
        // Method: GetPitch
        // Gets audio pitch
        //
        // Returns:
        // Pitch value
        virtual Float GetPitch() const;
        
        // Method: GetVolume
        // Gets audio volume
        //
        // Returns:
        // Volume value
        virtual Float GetVolume() const;
        
        // Method: GetPosition3D
        // Gets source position in 3D space
        //
        // Returns:
        // Source position
        virtual const Vector3f& GetPosition3D() const;
        
        // Method: GetMinDistance
        // Gets minimum distance
        //
        // Returns:
        // Min distance value
        virtual Float GetMinDistance() const;
        
        // Method: GetAttenuation
        // Gets attenuation
        //
        // Returns:
        // Attenuation value
        virtual Float GetAttenuation() const;
        
        // Method: GetSampleRate
        // Gets sample rate
        //
        // Returns:
        // Sample rate
        virtual UInt GetSampleRate() const;
        
        // Method: GetChannelCount
        // Gets channel count
        //
        // Returns:
        // Channel count
        virtual UInt GetChannelCount() const;
        
        // Method: GetDuration
        // Gets duration
        //
        // Returns:
        // Duration value
        virtual TimeValue GetDuration() const;
        
        // Method: SetLoop
        // Sets audio looping
        //
        // Parameters:
        // loop - Looping boolean
        virtual void SetLoop(Bool loop);
        
        // Method: SetPlayingOffset
        // Sets playing offset
        //
        // Parameters:
        // offset - Offset value
        virtual void SetPlayingOffset(TimeValue offset);
        
        // Method: SetPitch
        // Sets audio pitch
        //
        // Parameters:
        // pitch - New pitch value
        virtual void SetPitch(Float pitch);
        
        // Method: SetVolume
        // Sets audio volume
        //
        // Parameters:
        // volume - New volume
        virtual void SetVolume(Float volume);
        
        // Method: SetPosition3D
        // Sets audio source position in 3D space
        //
        // Parameters:
        // x - New x position
        // y - New y position
        // z - New z position
        virtual void SetPosition3D(Float x, Float y, Float z);
        
        // Method: SetPosition3D
        // Sets audio source position in 3D space
        //
        // Parameters:
        // position - New source position
        virtual void SetPosition3D(const Vector3f& position);
        
        // Method: SetMinDistance
        // Sets audio minimum distance
        //
        // Parameters:
        // min - New min distance
        virtual void SetMinDistance(Float distance);
        
        // Method: SetAttenuation
        // Sets audio attenuation
        //
        // Parameters:
        // attenuation - New attenuation
        virtual void SetAttenuation(Float attenuation);
        
        // Method: SetRelativeToListener
        // Sets whether audio is relative to the listener
        //
        // Parameters:
        // relative - Relative boolean
        virtual void SetRelativeToListener(Bool relative);
        
    //===========================================================
    // Internal data
    //===========================================================
    private:
        
        // Variable: mSoundPtr
        // Pointer to internal sound object
        SharedPtr<Sound> mSoundPtr;
        
        // Variable: mSoundBufferPtr
        // Pointer to internal sound buffer object
        SharedPtr<SoundBuffer> mSoundBufferPtr;
        
        // Variable: mPosition3D
        // Position of audio source in 3D space
        Vector3f mPosition3D;
    };
};

#endif
