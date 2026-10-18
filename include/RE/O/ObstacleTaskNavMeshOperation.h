#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshPtr.h"
#include "RE/N/NiPointer.h"
#include "RE/O/OBSTACLE_TASK_RESULT.h"
#include "RE/O/OBSTACLE_TASK_TYPE.h"

namespace RE
{
	class ObstacleData;

	class ObstacleTaskNavMeshOperation
	{
	public:
		// members
		NiPointer<ObstacleData> spObstacle;  // 00
		OBSTACLE_TASK_TYPE      eType;       // 04
		OBSTACLE_TASK_RESULT    eResult;     // 08
		NavMeshPtr              spNavMesh;   // 0C
	};
	static_assert(sizeof(ObstacleTaskNavMeshOperation) == 0x10);
}
