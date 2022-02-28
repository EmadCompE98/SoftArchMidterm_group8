// WorkoutScheduler.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "WorkoutScheduler.h"

#include <string>
#include "../WorkoutInformation/WorkoutInformation.h"

// This is an example of an exported variable
WORKOUTSCHEDULER_API int nWorkoutScheduler=0;

// This is an example of an exported function.
WORKOUTSCHEDULER_API int fnWorkoutScheduler(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CWorkoutScheduler::CWorkoutScheduler()
{
    return;
}

std::string CWorkoutScheduler::getWorkout(std::string exercise) {
	if (exercise.empty()) {
		CWorkoutInformation workoutInfo = CWorkoutInformation();
		exercise = workoutInfo.getBench();
	}
	return exercise + " at 3:30";
 }