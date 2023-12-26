// Title: Pointer

// Gamestone Engine
// Licensed under the LGPL
#ifndef POINTER_H
#define POINTER_H

// Standard includes
#include <memory>

// Define: SharedPtr
// Shared pointer to data which is automatically reference counted
#define SharedPtr std::shared_ptr

// Define: dynamicPointerCast
// Dynamic pointer cast for shared pointers
#define dynamicPointerCast std::dynamic_pointer_cast

// Define: staticPointerCast
// Static pointer cast for shared pointers
#define staticPointerCast std::static_pointer_cast

// Define: constPointerCast
// Const pointer cast for shared pointers
#define constPointerCast std::const_pointer_cast

#endif
