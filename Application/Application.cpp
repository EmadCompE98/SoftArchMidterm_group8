// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"


// This is an example of an exported variable
APPLICATION_API int nApplication=0;

// This is an example of an exported function.
APPLICATION_API int fnApplication(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CApplication::CApplication()
{
    return;
}
