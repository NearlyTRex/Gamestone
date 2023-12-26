// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/TileMap/TileMap.h>
#include <Gamestone/Application/Application.h>

//==================================================================================
Gamestone::TileMap::TileMap(const String& directory):
    Obj(),
    mMapLoaderPtr(),
    mMapTransformable()
{
    // Create new map loader object
    mMapLoaderPtr.reset(new TileMapLoader(directory));
    
    // Set transformable pointer
    SetTransformablePtr(&mMapTransformable);
}
//==================================================================================
Gamestone::TileMap::~TileMap()
{
    
}
//==================================================================================
void Gamestone::TileMap::Update(Float deltatime)
{
    
}
//==================================================================================
void Gamestone::TileMap::Render()
{
    // Get application data
    const ApplicationData& appData = Application::GetInstance().GetAppData();
    
    // Render
    if (IsVisible()) { appData.windowPtr->draw(*mMapLoaderPtr.get()); }
}
//==================================================================================
Gamestone::Bool Gamestone::TileMap::LoadMap(const String& mapfile)
{
    // Load new map file
    return mMapLoaderPtr->Load(mapfile);
}
//==================================================================================
void Gamestone::TileMap::AddSearchPath(const String& path)
{
    // Add search path
    mMapLoaderPtr->AddSearchPath(path);
}
//==================================================================================
void Gamestone::TileMap::UpdateQuadTree(const RectFloat& area)
{
    // Update quad tree
    mMapLoaderPtr->UpdateQuadTree(area);
}
//==================================================================================
Gamestone::Bool Gamestone::TileMap::IsQuadTreeAvailable() const
{
    // Determine if quad tree support is available
    return mMapLoaderPtr->QuadTreeAvailable();
}
//==================================================================================
Array<Gamestone::TileMapLayer>& Gamestone::TileMap::GetMapLayers()
{
    // Get map layers
    return mMapLoaderPtr->GetLayers();
}
//==================================================================================
Gamestone::Vector2u Gamestone::TileMap::GetMapSize() const
{
    // Get map size
    return mMapLoaderPtr->GetMapSize();
}
//==================================================================================
Gamestone::String Gamestone::TileMap::GetMapProperty(const String& property)
{
    // Get map property
    return mMapLoaderPtr->GetPropertyString(property);
}
//==================================================================================
void Gamestone::TileMap::DrawByType(TileMapDrawEnumBase type, Bool debug)
{
    // Get application data
    const ApplicationData& appData = Application::GetInstance().GetAppData();
    
    // Draw type
    mMapLoaderPtr->Draw(*appData.windowPtr, type, debug);
}
//==================================================================================
void Gamestone::TileMap::DrawByLayer(UInt layer, Bool debug)
{
    // Get application data
    const ApplicationData& appData = Application::GetInstance().GetAppData();
    
    // Draw layer
    mMapLoaderPtr->Draw(*appData.windowPtr, layer, debug);
}
//==================================================================================
Gamestone::Vector2f Gamestone::TileMap::ConvertIsometricToOrthogonal(const Vector2f& isocoords)
{
    // Convert isometric coords to orthogonal
    return mMapLoaderPtr->IsometricToOrthogonal(isocoords);
}
//==================================================================================
Gamestone::Vector2f Gamestone::TileMap::ConvertOrthogonalToIsometric(const Vector2f& orthocoords)
{
    // Convert orthogonal coords to isometric
    return mMapLoaderPtr->OrthogonalToIsometric(orthocoords);
}
//==================================================================================
