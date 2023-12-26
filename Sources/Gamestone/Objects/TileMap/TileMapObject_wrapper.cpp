// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Objects/TileMap/TileMapObject_wrapper.h>

//===============================================================================================
void register_TileMapObject()
{
    // Expose enum
    REGISTER_ENUM_HEADER(Gamestone::TileMapObjectShapeEnumBase, "TileMapObjectShapeEnum")
    REGISTER_ENUM_VALUE(TileMapObjectRectangleShape, "Rectangle")
    REGISTER_ENUM_VALUE(TileMapObjectEllipseShape, "Ellipse")
    REGISTER_ENUM_VALUE(TileMapObjectCircleShape, "Circle")
    REGISTER_ENUM_VALUE(TileMapObjectPolygonShape, "Polygon")
    REGISTER_ENUM_VALUE(TileMapObjectPolylineShape, "Polyline")
    REGISTER_ENUM_VALUE(TileMapObjectTileShape, "Tile")
    REGISTER_ENUM_FOOTER()
    
    // Typedefs
    typedef void (Gamestone::TileMapObject::*TileMapObject_Void_FloatFloat)(Gamestone::Float, Gamestone::Float);
    typedef void (Gamestone::TileMapObject::*TileMapObject_Void_Vector)(const Gamestone::Vector2f&);
    
    // Overloaded methods
    TileMapObject_Void_FloatFloat TileMapObject_SetPosition1 = &Gamestone::TileMapObject::SetPosition;
    TileMapObject_Void_Vector TileMapObject_SetPosition2 = &Gamestone::TileMapObject::SetPosition;
    TileMapObject_Void_FloatFloat TileMapObject_Move1 = &Gamestone::TileMapObject::Move;
    TileMapObject_Void_Vector TileMapObject_Move2 = &Gamestone::TileMapObject::Move;
    
    // Expose class
    //REGISTER_CLASS_HEADER_CONSTRUCT(Gamestone::TileMapObject, "TileMapObject")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetPropertyString, "GetProperty")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetPosition, "GetPosition")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetCentre, "GetCenterOfMass")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetShapeType, "GetShape")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetName, "GetName")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetType, "GetType")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetParent, "GetParent")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::GetAABB, "GetAABB")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::Visible, "IsVisible")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetProperty, "SetProperty")
    //REGISTER_CLASS_METHOD(TileMapObject_SetPosition1, "SetPosition")
    //REGISTER_CLASS_METHOD(TileMapObject_SetPosition2, "SetPosition")
    //REGISTER_CLASS_METHOD(TileMapObject_Move1, "Move")
    //REGISTER_CLASS_METHOD(TileMapObject_Move2, "Move")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetSize, "SetSize")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetName, "SetName")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetType, "SetType")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetParent, "SetParent")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetShapeType, "SetShape")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::SetVisible, "SetVisible")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::AddPoint, "AddPoint")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::Contains, "Contains")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::Intersects, "Intersects")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::CreateDebugShape, "CreateDebugShape")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::DrawDebugShape, "DrawDebugShape")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::FirstPoint, "GetFirstPoint")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::LastPoint, "GetLastPoint")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::CollisionNormal, "GetCollisionNormal")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::CreateSegments, "CreateSegments")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::Convex, "IsConvex")
    //REGISTER_CLASS_METHOD_RETURNCREF(&Gamestone::TileMapObject::PolyPoints, "GetPolyPoints")
    //REGISTER_CLASS_METHOD(&Gamestone::TileMapObject::ReverseWinding, "ReverseWinding")
    //REGISTER_CLASS_FOOTER()
}
//===============================================================================================
