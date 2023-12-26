// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Utility/Actions.h>

//===================================================================================
Gamestone::Action Gamestone::ActionLogicalOR(const Action& ac1, const Action& ac2)
{
    // Logical OR operation
    return (ac1 || ac2);
}
//===================================================================================
Gamestone::Action Gamestone::ActionLogicalAND(const Action& ac1, const Action& ac2)
{
    // Logical AND operation
    return (ac1 && ac2);
}
//===================================================================================
Gamestone::Action Gamestone::ActionLogicalNOT(const Action& ac)
{
    // Logical NOT operation
    return !ac;
}
//===================================================================================


//===================================================================================
Gamestone::ActionCallback::ActionCallback():
    mCallback()
{
}
//===================================================================================
Gamestone::ActionCallback::ActionCallback(PythonObject callback):
    mCallback(callback)
{
}
//===================================================================================
void Gamestone::ActionCallback::SetCallback(PythonObject callback)
{
    // Set callback
    mCallback = callback;
}
//===================================================================================
PythonObject Gamestone::ActionCallback::GetCallback() const
{
    // Get callback
    return mCallback;
}
//===================================================================================
void Gamestone::ActionCallback::operator()(ActionMapContext context)
{
    // Run callback
    if (!mCallback.is_none())
    {
        mCallback();
    }
}
//===================================================================================
