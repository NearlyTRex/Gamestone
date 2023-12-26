// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/TileMap/TileMapLayer_wrapper.h>

//===============================================================================================
void register_TileMapLayer()
{
    // Expose enum
    REGISTER_ENUM_HEADER(Gamestone::TileMapDrawEnumBase, "TileMapDrawEnumBase")
    REGISTER_ENUM_VALUE(TileMapFrontDrawType, "Front")
    REGISTER_ENUM_VALUE(TileMapBackDrawType, "Back")
    REGISTER_ENUM_VALUE(TileMapDebugDrawType, "Debug")
    REGISTER_ENUM_VALUE(TileMapAllDrawType, "All")
    REGISTER_ENUM_FOOTER()
    
    // Expose class
    //REGISTER_CLASS_HEADER_CONSTRUCT_INIT(Gamestone::TileMapLayer, InitDef<Gamestone::TileMapLayerEnumBase>(), "TileMapLayer")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapLayer::Cull, "Cull")
    //REGISTER_CLASS_DATA_READWRITE(&Gamestone::TileMapLayer::name, "Name")
    //REGISTER_CLASS_DATA_READWRITE(&Gamestone::TileMapLayer::opacity, "Opacity")
    //REGISTER_CLASS_DATA_READWRITE(&Gamestone::TileMapLayer::visible, "Visible")
    //REGISTER_CLASS_DATA_READWRITE(&Gamestone::TileMapLayer::type, "Type")
    //REGISTER_CLASS_DATA_READWRITE(&Gamestone::TileMapLayer::properties, "Properties")
    //REGISTER_CLASS_FOOTER()
}
//===============================================================================================
