// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/BasicSprite/BasicSprite.h>
#include <Gamestone/Application/Application.h>

//==================================================================================
Gamestone::BasicSprite::BasicSprite(const TextureResource& texture):
    Obj(),
    mSpritePtr(),
    mTexturePtr(),
    mSpriteAnimatorTable()
{
    // Texture must be valid
    mTexturePtr = texture.resource;
    
    // Create new sprite object
    mSpritePtr.reset(new Sprite(*mTexturePtr.get()));
    
    // Set transformable pointer
    SetTransformablePtr(mSpritePtr.get());
}
//==================================================================================
Gamestone::BasicSprite::~BasicSprite()
{
}
//==================================================================================
void Gamestone::BasicSprite::Update(Float deltatime)
{
    // Iterate over each registered animator
    for (auto it = mSpriteAnimatorTable.begin(); it != mSpriteAnimatorTable.end(); it++)
    {
        // Get animator
        BasicSpriteAnimator& animator(it->second);
        
        // Update the animator
        animator.update(CreateTimeFromSeconds(deltatime));
        
        // If currently animating, apply animator to the sprite
        if (animator.IsAnimating())
        {
            animator.animate(*mSpritePtr);
        }
    }
}
//==================================================================================
void Gamestone::BasicSprite::Render()
{
    // Get application data
    const ApplicationData& appData = Application::GetInstance().GetAppData();
    
    // Render
    if (IsVisible()) { appData.windowPtr->draw(*mSpritePtr.get()); }
}
//===================================================================================
Gamestone::CollisionBox Gamestone::BasicSprite::GetCollisionBox() const
{
    // Get collision box
    return CollisionBox();
}
//==================================================================================
void Gamestone::BasicSprite::SetTextureRect(const RectInt& rect)
{
    // Set texture rect
    mSpritePtr->setTextureRect(rect);
}
//==================================================================================
void Gamestone::BasicSprite::SetColor(const Color& color)
{
    // Set color
    mSpritePtr->setColor(color);
}
//==================================================================================
const Gamestone::RectInt& Gamestone::BasicSprite::GetTextureRect() const
{
    // Get texture rect
    return mSpritePtr->getTextureRect();
}
//==================================================================================
const Gamestone::Color& Gamestone::BasicSprite::GetColor() const
{
    // Get color
    return mSpritePtr->getColor();
}
//==================================================================================
Gamestone::RectFloat Gamestone::BasicSprite::GetLocalBounds() const
{
    // Get local bounds
    return mSpritePtr->getLocalBounds();
}
//==================================================================================
Gamestone::RectFloat Gamestone::BasicSprite::GetGlobalBounds() const
{
    // Get global bounds
    return mSpritePtr->getGlobalBounds();
}
//==================================================================================
void Gamestone::BasicSprite::AddAnimator(const String& name, const BasicSpriteAnimator& animator)
{
    // Add new animator
    mSpriteAnimatorTable[name] = animator;
}
//==================================================================================
void Gamestone::BasicSprite::RemoveAnimator(const String& name)
{
    // Remove animator
    mSpriteAnimatorTable.erase(name);
}
//==================================================================================
Gamestone::BasicSpriteAnimator& Gamestone::BasicSprite::GetAnimator(const String& name)
{
    // Get existing animator
    return mSpriteAnimatorTable.at(name);
}
//==================================================================================
void Gamestone::BasicSprite::ClearAnimators()
{
    // Clear animators
    mSpriteAnimatorTable.clear();
}
//==================================================================================
