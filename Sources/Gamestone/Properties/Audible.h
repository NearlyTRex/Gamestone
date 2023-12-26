// Title: Audible

// Gamestone Engine
// Licensed under the LGPL
#ifndef AUDIBLE_H
#define AUDIBLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/AudioTypes.h>
#include <Gamestone/Types/SystemTypes.h>
#include <Gamestone/Math/Vector.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Audible
    // Audible property
    class Audible
    {
    public:
        
        // Method: Play
        // Starts playing audio
        virtual void Play() = 0;
        
        // Method: Pause
        // Pauses audio
        virtual void Pause() = 0;
        
        // Method: Stop
        // Stops audio
        virtual void Stop() = 0;
        
        // Method: IsPlaying
        // Determines if currently playing
        //
        // Returns:
        // Playing status
        virtual Bool IsPlaying() const = 0;
        
        // Method: IsPaused
        // Determines if currently paused
        //
        // Returns:
        // Paused status
        virtual Bool IsPaused() const = 0;
        
        // Method: IsStopped
        // Determines if currently stopped
        //
        // Returns:
        // Stopped status
        virtual Bool IsStopped() const = 0;
        
        // Method: IsRelativeToListener
        // Returns whether audio is relative to the listener
        //
        // Returns:
        // Relative to listener boolean
        virtual Bool IsRelativeToListener() const = 0;
        
        // Method: GetLoop
        // Gets audio looping status
        //
        // Returns:
        // Looping status
        virtual Bool GetLoop() const = 0;
        
        // Method: GetPlayingOffset
        // Gets playing offset
        //
        // Returns:
        // Offset value
        virtual TimeValue GetPlayingOffset() const = 0;
        
        // Method: GetPitch
        // Gets audio pitch
        //
        // Returns:
        // Pitch value
        virtual Float GetPitch() const = 0;
        
        // Method: GetVolume
        // Gets audio volume
        //
        // Returns:
        // Volume value
        virtual Float GetVolume() const = 0;
        
        // Method: GetPosition3D
        // Gets source position in 3D space
        //
        // Returns:
        // Source position
        virtual const Vector3f& GetPosition3D() const = 0;
        
        // Method: GetMinDistance
        // Gets minimum distance
        //
        // Returns:
        // Min distance value
        virtual Float GetMinDistance() const = 0;
        
        // Method: GetAttenuation
        // Gets attenuation
        //
        // Returns:
        // Attenuation value
        virtual Float GetAttenuation() const = 0;
        
        // Method: GetSampleRate
        // Gets sample rate
        //
        // Returns:
        // Sample rate
        virtual UInt GetSampleRate() const = 0;
        
        // Method: GetChannelCount
        // Gets channel count
        //
        // Returns:
        // Channel count
        virtual UInt GetChannelCount() const = 0;
        
        // Method: GetDuration
        // Gets duration
        //
        // Returns:
        // Duration value
        virtual TimeValue GetDuration() const = 0;
        
        // Method: SetLoop
        // Sets audio looping
        //
        // Parameters:
        // loop - Looping boolean
        virtual void SetLoop(Bool loop) = 0;
        
        // Method: SetPlayingOffset
        // Sets playing offset
        //
        // Parameters:
        // offset - Offset value
        virtual void SetPlayingOffset(TimeValue offset) = 0;
        
        // Method: SetPitch
        // Sets audio pitch
        //
        // Parameters:
        // pitch - New pitch value
        virtual void SetPitch(Float pitch) = 0;
        
        // Method: SetVolume
        // Sets audio volume
        //
        // Parameters:
        // volume - New volume
        virtual void SetVolume(Float volume) = 0;
        
        // Method: SetPosition3D
        // Sets audio source position in 3D space
        //
        // Parameters:
        // x - New x position
        // y - New y position
        // z - New z position
        virtual void SetPosition3D(Float x, Float y, Float z) = 0;
        
        // Method: SetPosition3D
        // Sets audio source position in 3D space
        //
        // Parameters:
        // position - New source position
        virtual void SetPosition3D(const Vector3f& position) = 0;
        
        // Method: SetMinDistance
        // Sets audio minimum distance
        //
        // Parameters:
        // min - New min distance
        virtual void SetMinDistance(Float distance) = 0;
        
        // Method: SetAttenuation
        // Sets audio attenuation
        //
        // Parameters:
        // attenuation - New attenuation
        virtual void SetAttenuation(Float attenuation) = 0;
        
        // Method: SetRelativeToListener
        // Sets whether audio is relative to the listener
        //
        // Parameters:
        // relative - Relative boolean
        virtual void SetRelativeToListener(Bool relative) = 0;
    };
};

#endif
