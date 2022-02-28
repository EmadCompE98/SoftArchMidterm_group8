// FoodInformation.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "FoodInformation.h"
#include <string>


// This is an example of an exported variable
FOODINFORMATION_API int nFoodInformation=0;

// This is an example of an exported function.
FOODINFORMATION_API int fnFoodInformation(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CFoodInformation::CFoodInformation()
{
    return;
}

std::string CFoodInformation::getApple() {
	return "apple";
}
