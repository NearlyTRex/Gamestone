// Title: TileMap

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef TILEMAP_H
#define TILEMAP_H

// Local includes
#include <Gamestone/Objects/Obj/Obj.h>
#include <Gamestone/Utility/Resources.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: TileMap
    // Tilemap class
    class TileMap:
        public Obj
    {
    
    //===========================================================
    // Construction/destruction
    //===========================================================
    public:
        
        // Constructor: TileMap
        // Tilemap constructor
        //
        // Parameters:
        // directory - Map directory to use
        TileMap(const String& directory);
        
        // Destructor: ~TileMap
        // Destroys object
        virtual ~TileMap();
        
    //===========================================================
    // From Gamestone::Renderable
    //===========================================================
    public:
        
        // Method: Update
        // Update from latest frame
        //
        // Parameters:
        // deltatime - Time since last frame
        virtual void Update(Float deltatime);
        
        // Method: Render
        // Renders current frame
        virtual void Render();
        
    //===========================================================
    // Loading methods
    //===========================================================
    public:
        
        // Method: LoadMap
        // Loads given map file
        //
        // Parameters:
        // mapfile - Location of map file
        //
        // Returns:
        // True if loaded successfully, false otherwise
        Bool LoadMap(const String& mapfile);
        
        // Method: AddSearchPath
        // Adds give path to list of directories to search for assets, such as tile sets
        //
        // Parameters:
        // path - Path to add for searching
        void AddSearchPath(const String& path);
        
    //===========================================================
    // QuadTree methods
    //===========================================================
    public:
        
        // Method: UpdateQuadTree
        // Updates the map's quad tree. Not necessary when not querying the quad tree
        // The root area is the are covered by root node, for example the screen size
        void UpdateQuadTree(const RectFloat& area);
        
        // Method: isQuadTreeAvailable
        // Determine if quad tree support is available
        Bool IsQuadTreeAvailable() const;
        
    //===========================================================
    // Property methods
    //===========================================================
    public:
        
        // Method: GetMapLayers
        // Gets array of map layers
        //
        // Returns:
        // Reference to array of tile map layers
        Array<TileMapLayer>& GetMapLayers();
        
        // Method: GetMapSize
        // Gets size of map in pixels
        //
        // Returns:
        // Vector containing width and height of map
        Vector2u GetMapSize() const;
        
        // Method: GetMapProperty
        // Gets map property
        //
        // Parameters:
        // property - Map property
        //
        // Returns:
        // Property string or empty if not found
        String GetMapProperty(const String& property);
        
    //===========================================================
    // Drawing methods
    //===========================================================
    public:
        
        // Method: DrawByType
        // Draws tile map by type (front, back, all, debug)
        //
        // Parameters:
        // type - Drawing type
        // debug - Whether to draw outline of objects
        void DrawByType(TileMapDrawEnumBase type, Bool debug = false);
        
        // Method: DrawByLayer
        // Draws specific layer
        //
        // Parameters:
        // layer - Target layer
        // debug - Whether to draw outlines of objects
        void DrawByLayer(UInt layer, Bool debug = false);
        
    //===========================================================
    // Misc methods
    //===========================================================
    public:
        
        // Method: ConvertIsometricToOrthogonal
        // Converts isometric world coords to orthongonal world coords
        //
        // Parameters:
        // isocoords - Isometric world coords
        //
        // Returns:
        // Vector of converted coords if available, otherwise original value
        Vector2f ConvertIsometricToOrthogonal(const Vector2f& isocoords);
        
        // Method: ConvertOrthogonalToIsometric
        // Converts orthogonal world coords to isometric world coords
        //
        // Parameters:
        // orthocoords - Orthogonal world coords
        //
        // Returns:
        // Vector of converted coords if available, otherwise original value
        Vector2f ConvertOrthogonalToIsometric(const Vector2f& orthocoords);
        
    //===========================================================
    // Internal data
    //===========================================================
    private:
        
        // Variable: mMapLoaderPtr
        // Pointer to map loader
        SharedPtr<TileMapLoader> mMapLoaderPtr;
        
        // Variable: mMapTransformable
        // Transformable object
        TransformableOrig mMapTransformable;
    };
};

#endif
