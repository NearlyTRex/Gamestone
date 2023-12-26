// Title: Actions

// Gamestone Engine
// Licensed under the LGPL
#ifndef ACTIONS_H
#define ACTIONS_H

// Local includes
#include <Gamestone/Types/BasicTypes.h>
#include <Gamestone/Types/ActionTypes.h>
#include <Gamestone/Types/WindowTypes.h>
#include <Gamestone/Types/Str.h>
#include <Gamestone/Utility/Wrapper.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Function: ActionLogicalOR
    // Logical OR operation on two actions
    // Temporarily here until operators work properly in Boost.Python
    //
    // Parameters:
    // ac1 - First action
    // ac2 - Second action
    //
    // Returns:
    // Logical result
    Action ActionLogicalOR(const Action& ac1, const Action& ac2);
    
    // Function: ActionLogicalAND
    // Logical AND operation on two actions
    // Temporarily here until operators work properly in Boost.Python
    //
    // Parameters:
    // ac1 - First action
    // ac2 - Second action
    //
    // Returns:
    // Logical result
    Action ActionLogicalAND(const Action& ac1, const Action& ac2);
    
    // Function: ActionLoicalNOT
    // Logical NOT operation on an action
    // Temporarily here until operators work properly in Boost.Python
    //
    // Parameters:
    // ac - Single action
    //
    // Returns:
    // Logical result
    Action ActionLogicalNOT(const Action& ac);
    
    // Class: ActionCallback
    // Action callback class
    class ActionCallback
    {
    public:
        
        // Constructor: ActionCallback
        // Default constructor
        ActionCallback();
        
        // Constructor: ActionCallback
        // Constructor which takes the callback object
        //
        // Parameters:
        // callback - Action callback
        ActionCallback(PythonObject callback);
        
        // Method: SetCallback
        // Sets action callback
        //
        // Parameters:
        // callback - Action callback
        void SetCallback(PythonObject callback);
        
        // Method: GetCallback
        // Gets action callback
        //
        // Returns:
        // Action callback
        PythonObject GetCallback() const;
        
    public:
        
        // Operator: Callable operator
        // Executes callback method
        //
        // Parameters:
        // context - Action context
        void operator()(ActionMapContext context);
        
    private:
        
        // Variable: mCallback
        // Callback python object
        PythonObject mCallback;
    };
};

#endif
