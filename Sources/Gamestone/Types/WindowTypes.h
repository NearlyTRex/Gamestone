// Title: WindowTypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef WINDOWTYPES_H
#define WINDOWTYPES_H

// System includes
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: RenderWindow
    // Render window type
    typedef sf::RenderWindow RenderWindow;
    
    // Type: VideoMode
    // Video mode type
    typedef sf::VideoMode VideoMode;
    
    // Type: KeyboardEnum
    // Keyboard code enumeration type
    typedef sf::Keyboard KeyboardEnum;
    
    // Type: KeyboardEnumBase
    // Keyboard code enumeration base type
    typedef sf::Keyboard::Key KeyboardEnumBase;
    
    // Type: MouseEnum
    // Mouse code enumeration type
    typedef sf::Mouse MouseEnum;
    
    // Type: MouseEnumBase
    // Mouse code enumeration base type
    typedef sf::Mouse::Button MouseEnumBase;
    
    // Type: EventEnum
    // Event code enumeration type
    typedef sf::Event EventEnum;
    
    // Type: EventEnumBase
    // Event code enumeration base type
    typedef sf::Event::EventType EventEnumBase;
    
    // Type: Event
    // Event type
    typedef sf::Event Event;
};

#endif
