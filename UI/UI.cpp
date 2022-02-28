// UI.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UI.h"


// This is an example of an exported variable
UI_API int nUI=0;

// This is an example of an exported function.
UI_API int fnUI(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUI::CUI()
{
    return;
}
