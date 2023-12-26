// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/TextWriter/TextWriter.h>
#include <Gamestone/Application/Application.h>

//==================================================================================
Gamestone::TextWriter::TextWriter(const FontResource& font, const String& string, UInt charsize):
    Obj(),
    mFontPtr(),
    mTextPtr()
{
    // Set resource data
    mFontPtr = font.resource;
    
    // Create new text object
    mTextPtr.reset(new Text(string, *mFontPtr, charsize));
    
    // Set transformable pointer
    SetTransformablePtr(mTextPtr.get());
}
//==================================================================================
Gamestone::TextWriter::~TextWriter()
{
}
//==================================================================================
void Gamestone::TextWriter::Update(Float deltatime)
{
}
//==================================================================================
void Gamestone::TextWriter::Render()
{
    // Get application data
    const ApplicationData& appData = Application::GetInstance().GetAppData();
    
    // Render
    appData.windowPtr->draw(*mTextPtr.get());
}
//==================================================================================
void Gamestone::TextWriter::SetString(const String& string)
{
    // Set string
    mTextPtr->setString(string);
}
//==================================================================================
void Gamestone::TextWriter::SetCharacterSize(UInt size)
{
    // Set character size
    mTextPtr->setCharacterSize(size);
}
//==================================================================================
void Gamestone::TextWriter::SetStyle(UInt style)
{
    // Set style
    mTextPtr->setStyle(style);
}
//==================================================================================
void Gamestone::TextWriter::SetColor(const Color& color)
{
    // Set color
    mTextPtr->setColor(color);
}
//==================================================================================
Gamestone::String Gamestone::TextWriter::GetString() const
{
    // Get string
    return mTextPtr->getString();
}
//==================================================================================
Gamestone::UInt Gamestone::TextWriter::GetCharacterSize() const
{
    // Get character size
    return mTextPtr->getCharacterSize();
}
//==================================================================================
Gamestone::UInt Gamestone::TextWriter::GetStyle() const
{
    // Get style
    return mTextPtr->getStyle();
}
//==================================================================================
const Gamestone::Color& Gamestone::TextWriter::GetColor() const
{
    // Get color
    return mTextPtr->getColor();
}
//==================================================================================
Gamestone::Vector2f Gamestone::TextWriter::FindCharacterPos(SizeType index) const
{
    // Find character position
    return mTextPtr->findCharacterPos(index);
}
//==================================================================================
Gamestone::RectFloat Gamestone::TextWriter::GetLocalBounds() const
{
    // Get local bounds
    return mTextPtr->getLocalBounds();
}
//==================================================================================
Gamestone::RectFloat Gamestone::TextWriter::GetGlobalBounds() const
{
    // Get global bounds
    return mTextPtr->getGlobalBounds();
}
//==================================================================================
