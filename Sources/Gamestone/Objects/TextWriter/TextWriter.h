// Title: TextWriter

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef TEXTWRITER_H
#define TEXTWRITER_H

// System includes
#include <SFML/Graphics.hpp>

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Types/Table.h>
#include <Gamestone/Objects/Obj/Obj.h>
#include <Gamestone/Utility/Color.h>
#include <Gamestone/Utility/Resources.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: TextWriter
    // Text writer class
    class TextWriter:
        public Obj
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: TextWriter
        // Font resource constructor
        //
        // Parameters:
        // font - Font resource
        TextWriter(const FontResource& font, const String& string, UInt charsize);
        
        // Destructor: ~TextWriter
        // Destroys object
        virtual ~TextWriter();
        
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
    // TextWriter methods
    //===========================================================
    public:
        
        // Method: SetString
        // Sets text string
        //
        // Parameters:
        // string - String to display
        virtual void SetString(const String& string);
        
        // Method: SetCharacterSize
        // Sets text character size
        //
        // Parameters:
        // size - New size
        virtual void SetCharacterSize(UInt size);
        
        // Method: SetStyle
        // Sets text styling
        //
        // Parameters:
        // style - New style
        virtual void SetStyle(UInt style);
        
        // Method: SetColor
        // Sets text coloring
        //
        // Parameters:
        // color - New color
        virtual void SetColor(const Color& color);
        
        // Method: GetString
        // Gets text string
        //
        // Returns:
        // Text string
        virtual String GetString() const;
        
        // Method: GetCharacterSize
        // Gets character size
        //
        // Returns:
        // Character size
        virtual UInt GetCharacterSize() const;
        
        // Method: GetStyle
        // Gets text styling
        //
        // Returns:
        // Text styling
        virtual UInt GetStyle() const;
        
        // Method: GetColor
        // Gets text coloring
        //
        // Returns:
        // Text coloring
        virtual const Color& GetColor() const;
        
        // Method: FindCharacterPos
        // Finds actual position of the character at the given index
        //
        // Parameters:
        // index - Character index
        //
        // Returns:
        // Vector position
        virtual Vector2f FindCharacterPos(SizeType index) const;
        
        // Method: GetLocalBounds
        // Gets the local bounding rectangle
        //
        // Returns:
        // Local bounding rect
        virtual RectFloat GetLocalBounds() const;
        
        // Method: GetGlobalBounds
        // Gets the global bounding rectangle
        //
        // Returns:
        // Global bounding rectangle
        virtual RectFloat GetGlobalBounds() const;
        
    //===========================================================
    // Internal data
    //===========================================================
    private:
        
        // Variable: mFontPtr
        // Pointer to internal font object
        SharedPtr<Font> mFontPtr;
        
        // Variable: mTextPtr
        // Pointer to internal text object
        SharedPtr<Text> mTextPtr;
    };
};

#endif
