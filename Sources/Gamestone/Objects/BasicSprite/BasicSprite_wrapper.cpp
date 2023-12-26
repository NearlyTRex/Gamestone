// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/BasicSprite/BasicSprite_wrapper.h>

//===============================================================================================
void register_BasicSprite()
{
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE1(Gamestone::BasicSprite, InitDef<const Gamestone::TextureResource&>(), Gamestone::Obj, "BasicSprite")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::Update, "Update")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::Render, "Render")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::SetTextureRect, "SetTextureRect")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::SetColor, "SetColor")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::BasicSprite::GetTextureRect, "GetTextureRect")
    REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::BasicSprite::GetColor, "GetColor")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::GetLocalBounds, "GetLocalBounds")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::GetGlobalBounds, "GetGlobalBounds")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::AddAnimator, "AddAnimator")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::RemoveAnimator, "RemoveAnimator")
    REGISTER_CLASS_METHOD_RETURNREF(&Gamestone::BasicSprite::GetAnimator, "GetAnimator")
    REGISTER_CLASS_METHOD(&Gamestone::BasicSprite::ClearAnimators, "ClearAnimators")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
