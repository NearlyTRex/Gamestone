// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/TileMap/TileMap_wrapper.h>

//===============================================================================================
void register_TileMap()
{
    // Expose enum
    REGISTER_ENUM_HEADER(Gamestone::TileMapOrientationEnumBase, "TileMapOrientationEnumBase")
    REGISTER_ENUM_VALUE(TileMapOrthogonalOrientation, "Orthogonal")
    REGISTER_ENUM_VALUE(TileMapIsometricOrientation, "Isometric")
    REGISTER_ENUM_VALUE(TileMapSteppedIsometricOrientation, "SteppedIsometric")
    REGISTER_ENUM_FOOTER()
    
    // Expose class
    REGISTER_CLASS_HEADER_CONSTRUCT_INIT_BASE1(Gamestone::TileMap, InitDef<const Gamestone::String&>(), Gamestone::Obj, "TileMap")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::Update, "Update")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::Render, "Render")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::LoadMap, "LoadMap")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::AddSearchPath, "AddSearchPath")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::UpdateQuadTree, "UpdateQuadTree")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::IsQuadTreeAvailable, "IsQuadTreeAvailable")
    REGISTER_CLASS_METHOD_RETURNREF(&Gamestone::TileMap::GetMapLayers, "GetMapLayers")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::GetMapSize, "GetMapSize")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::GetMapProperty, "GetMapProperty")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::DrawByType, "DrawByType")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::DrawByLayer, "DrawByLayer")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::ConvertIsometricToOrthogonal, "ConvertIsometricToOrthogonal")
    REGISTER_CLASS_METHOD(&Gamestone::TileMap::ConvertOrthogonalToIsometric, "ConvertOrthogonalToIsometric")
    REGISTER_CLASS_FOOTER()
}
//===============================================================================================
