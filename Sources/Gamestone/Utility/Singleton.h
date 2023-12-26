// Title: Singleton

// Gamestone Engine
// Licensed under the LGPL
#ifndef SINGLETON_H
#define SINGLETON_H

// About: Singleton
// A note about this class is that it does not guarantee to prevent construction in
// other manners (hidden constructors, etc).  All classes deriving from this should
// only access via the GetInstance method.
// The reason for not doing this is Boost.Python seems to have a fit with private
// constructors, and also it is offers the no_init for similar purposes anyway.

// Local includes
#include <Gamestone/Utility/Debug.h>

// Namespace: Gamestone
// The Gamestone namespace
namespace Gamestone
{
    // Class: Singleton
    // Singleton base class
    template <typename T> 
    class Singleton
    {
    public:
        
        // Method: GetInstance
        // Gets instance of the class
        //
        // Returns:
        // Reference to class instance
        static T& GetInstance()
        {
            if (mInstance == NULL)
            {
                mInstance = new T;
            }
            return *mInstance;
        }
        
        // Method: DestroyInstance
        // Destroys instance of the class
        static void DestroyInstance()
        {
            delete mInstance;
            mInstance = NULL;
        }
    
    private:
        
        // Instance
        static T* mInstance;
    };
    
    // Static initialization
    template <typename T> T* Singleton<T>::mInstance = NULL;
};

#endif
