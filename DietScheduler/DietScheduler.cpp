// DietScheduler.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DietScheduler.h"
#include <string>
#include "../FoodInformation/FoodInformation.h"


// This is an example of an exported variable
DIETSCHEDULER_API int nDietScheduler=0;

// This is an example of an exported function.
DIETSCHEDULER_API int fnDietScheduler(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDietScheduler::CDietScheduler()
{
    return;
}

std::string CDietScheduler::getWhatToEat(std::string food) {
	if (food.empty()) {
		CFoodInformation foodInfo = CFoodInformation();
		food = foodInfo.getApple();
	}
	return food + " at noon";
}
