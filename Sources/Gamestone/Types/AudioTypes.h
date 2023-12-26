// Title: AudioTypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef AUDIOTYPES_H
#define AUDIOTYPES_H

// System includes
#include <SFML/Audio.hpp>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: Music
    // Music resource type
    typedef sf::Music Music;
    
    // Type: Sound
    // Sound resource type
    typedef sf::Sound Sound;
    
    // Type: SoundBuffer
    // Sound buffer resource type
    typedef sf::SoundBuffer SoundBuffer;
    
    // Type: SoundSourceEnum
    // Sound source enumeration type
    typedef sf::SoundSource SoundSourceEnum;
    
    // Type: SoundSourceEnumBase
    // Sound source enumeration base type
    typedef sf::SoundSource::Status SoundSourceEnumBase;
    
    // Type: MusicSourceEnum
    // Music source enumeration type
    typedef sf::SoundSource MusicSourceEnum;
    
    // Type: MusicSourceEnumBase
    // Music source enumeration base type
    typedef sf::SoundSource::Status MusicSourceEnumBase;
};

#endif
