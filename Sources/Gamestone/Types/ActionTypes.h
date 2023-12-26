// Title: ActionTypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef ACTIONTYPES_H
#define ACTIONTYPES_H

// System includles
#include <Thor/Input.hpp>

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/Str.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Type: ActionId
    // Action identifier type
    typedef String ActionId;
    
    // Type: Action
    // Action type
    typedef thor::Action Action;
    
    // Type: ActionMap
    // Action mapping type
    typedef thor::ActionMap<ActionId> ActionMap;
    
    // Type: ActionMapSystem
    // Action callback system type
    typedef thor::ActionMap<ActionId>::CallbackSystem ActionMapSystem;
    
    // Type: ActionMapContext
    // Action map context type
    typedef thor::ActionContext<ActionId> ActionMapContext;
    
    // Type: ActionConnection
    // Action connection type
    typedef thor::Connection ActionConnection;
    
    // Type: ActionEnum
    // Action enumeration type
    typedef thor::Action ActionEnum;
    
    // Type: ActionEnumBase
    // Action enumeration base type
    typedef thor::Action::ActionType ActionEnumBase;
};

#endif
