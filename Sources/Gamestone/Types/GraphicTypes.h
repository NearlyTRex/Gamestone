// Title: GraphicTypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef GRAPHICTYPES_H
#define GRAPHICTYPES_H

// System includes
#include <SFML/Graphics.hpp>
#include <Thor/Graphics.hpp>
#include <tmx/MapLoader.h>
#include <tmx/MapLayer.h>
#include <tmx/MapObject.h>

// Type: TileMapOrthogonalOrientation
// Tile map orthogonal orientation
#define TileMapOrthogonalOrientation tmx::Orthogonal

// Type: TileMapIsometricOrientation
// Tile map isometric orientation
#define TileMapIsometricOrientation tmx::Isometric

// Type: TileMapSteppedIsometricOrientation
// Tile map stepped isometric orientation
#define TileMapSteppedIsometricOrientation tmx::SteppedIsometric

// Type: TileMapObjectRectangleShape
// Tile map object rectangle shape
#define TileMapObjectRectangleShape tmx::Rectangle

// Type: TileMapObjectEllipseShape
// Tile map object ellipse shape
#define TileMapObjectEllipseShape tmx::Ellipse

// Type: TileMapObjectCircleShape
// Tile map object circle shape
#define TileMapObjectCircleShape tmx::Circle

// Type: TileMapObjectPolygonShape
// Tile map object polygon shape
#define TileMapObjectPolygonShape tmx::Polygon

// Type: TileMapObjectPolylineShape
// Tile map object polyline shape
#define TileMapObjectPolylineShape tmx::Polyline

// Type: TileMapObjectTileShape
// Tile map object tile shape
#define TileMapObjectTileShape tmx::Tile

// Type: TileMapGeneralLayer
// Tile map general layer
#define TileMapGeneralLayer tmx::Layer

// Type: TileMapObjectLayer
// Tile map object layer
#define TileMapObjectLayer tmx::ObjectGroup

// Type: TileMapImageLayer
// Tile map image layer
#define TileMapImageLayer tmx::ImageLayer

// Type: TileMapFrontDrawType
// Tile map front draw type
#define TileMapFrontDrawType tmx::MapLayer::Front

// Type: TileMapBackDrawType
// Tile map back draw type
#define TileMapBackDrawType tmx::MapLayer::Back

// Type: TileMapDebugDrawType
// Tile map debug draw type
#define TileMapDebugDrawType tmx::MapLayer::Debug

// Type: TileMapAllDrawType
// Tile map all draw type
#define TileMapAllDrawType tmx::MapLayer::All

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: View
    // View type
    typedef sf::View View;
    
    // Type: Sprite
    // Sprite object
    typedef sf::Sprite Sprite;
    
    // Type: Font
    // Font resource type
    typedef sf::Font Font;
    
    // Type: Glyph
    // Glyph resource type
    typedef sf::Glyph Glyph;
    
    // Type: Text
    // Text type
    typedef sf::Text Text;
    
    // Type: Texture
    // Texture resource type
    typedef sf::Texture Texture;
    
    // Type: Color
    // Color type
    typedef sf::Color Color;
    
    // Type: TransformableOrig
    // Original transformable type
    typedef sf::Transformable TransformableOrig;
    
    // Type: TransformablePtr
    // Pointer to original transformable type
    typedef sf::Transformable* TransformablePtr;
    
    // Type: ColorGradient
    // Color gradient type
    typedef thor::ColorGradient ColorGradient;
    
    // Type: TileMapLoader
    // Tile map loader type
    typedef tmx::MapLoader TileMapLoader;
    
    // Type: TileMapObject
    // Tile map object type
    typedef tmx::MapObject TileMapObject;
    
    // Type: TileMapLayer
    // Tile map layer type
    typedef tmx::MapLayer TileMapLayer;
    
    // Type: TileMapLayerSet
    // Tile map layerset type
    typedef tmx::LayerSet TileMapLayerSet;
    
    // Type: TileMapOrientationType
    // Tile map orientation enum base
    typedef tmx::MapOrientation TileMapOrientationEnumBase;
    
    // Type: TileMapObjectShapeEnumBase
    // Tile map object shape enum base
    typedef tmx::MapObjectShape TileMapObjectShapeEnumBase;
    
    // Type: TileMapLayerType
    // Tile map layer enum base
    typedef tmx::MapLayerType TileMapLayerEnumBase;
    
    // Type: TileMapDrawType
    // Tile map draw enum base
    typedef tmx::MapLayer::DrawType TileMapDrawEnumBase;
    
    // Type: TileMapQuadType
    // Tile map quad enum base
    typedef tmx::TileQuad TileMapQuad;
};

#endif
