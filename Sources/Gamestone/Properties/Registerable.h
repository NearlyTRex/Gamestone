// Title: Registerable

// Gamestone Engine
// Licensed under the LGPL
#ifndef REGISTERABLE_H
#define REGISTERABLE_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: ObjectID
    // Object identifier
    typedef Int ObjectID;
    
    // Type: ObjectName
    // Object name
    typedef String ObjectName;
    
    // Class: Registerable
    // Registerable property
    class Registerable
    {
    public:
        
        // Method: SetID
        // Sets registerable ID
        //
        // Parameters:
        // name - Registerable ID
        virtual void SetID(ObjectID id) = 0;
        
        // Method: GetID
        // Gets registerable ID
        //
        // Returns:
        // Registerable ID
        virtual ObjectID GetID() const = 0;
        
        // Method: SetName
        // Sets registerable name
        //
        // Parameters:
        // name - Registerable name
        virtual void SetName(const ObjectName& name) = 0;
        
        // Method: GetName
        // Gets registerable name
        //
        // Returns:
        // Registerable name
        virtual const ObjectName& GetName() const = 0;
        
        // Method: ID
        // Gets registerable ID
        //
        // Returns:
        // Registerable ID
        virtual ObjectID ID() const = 0;
        
        // Method: Name
        // Gets registerable name
        //
        // Returns:
        // Registerable name
        virtual const ObjectName& Name() const = 0;
    };
};

#endif
