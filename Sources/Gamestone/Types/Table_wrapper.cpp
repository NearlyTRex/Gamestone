// Gamestone Engine
// Licensed under the LGPL

// Local includes
#include <Gamestone/Types/Table_wrapper.h>

//===============================================================================================
void register_Table()
{
    // Expose tables
    REGISTER_CLASS_TABLE(Gamestone::OrderedTableStrStr, "OrderedTableStrStr");
    REGISTER_CLASS_TABLE(Gamestone::UnorderedTableStrStr, "UnorderedTableStrStr");
}
//===============================================================================================
