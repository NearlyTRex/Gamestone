// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Color_wrapper.h>

//=====================================================================================
void register_Color()
{
    // Expose functions
    REGISTER_FUNCTION(&Gamestone::ConvertHTMLColor, "ConvertHTMLColor")
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::Color, "Color")
    REGISTER_CLASS_INIT4(Gamestone::UChar, Gamestone::UChar, Gamestone::UChar, Gamestone::UChar)
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Color::r, "R")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Color::g, "G")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Color::b, "B")
    REGISTER_CLASS_DATA_READWRITE(&Gamestone::Color::a, "A")
    REGISTER_CLASS_OPERATOR(SelfObject + Gamestone::Color())
    REGISTER_CLASS_OPERATOR(SelfObject * Gamestone::Color())
    REGISTER_CLASS_OPERATOR(SelfObject += Gamestone::Color())
    REGISTER_CLASS_OPERATOR(SelfObject *= Gamestone::Color())
    REGISTER_CLASS_OPERATOR(SelfObject == Gamestone::Color())
    REGISTER_CLASS_OPERATOR(SelfObject != Gamestone::Color())
    REGISTER_CLASS_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::ColorGradient, "ColorGradient")
    REGISTER_CLASS_FOOTER()
}
//=====================================================================================
