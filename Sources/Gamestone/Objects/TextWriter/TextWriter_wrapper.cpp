// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/TextWriter/TextWriter_wrapper.h>

//===============================================================================================
void register_TextWriter()
{
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE1(Gamestone::TextWriter, (InitDef<const Gamestone::FontResource&, const Gamestone::String&, Gamestone::UInt>()), Gamestone::Obj, "TextWriter")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::Update, "Update")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::Render, "Render")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::SetString, "SetString")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::SetCharacterSize, "SetCharacterSize")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::SetStyle, "SetStyle")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::SetColor, "SetColor")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::GetString, "GetString")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::GetCharacterSize, "GetCharacterSize")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::GetStyle, "GetStyle")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::TextWriter::GetColor, "GetColor")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::FindCharacterPos, "FindCharacterPos")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::GetLocalBounds, "GetLocalBounds")
    REGISTER_CLASS_METHOD(&Gamestone::TextWriter::GetGlobalBounds, "GetGlobalBounds")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
