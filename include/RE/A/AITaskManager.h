#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorUpdateTaskData.h"
#include "RE/A/ActorsScriptTaskData.h"
#include "RE/A/AnimationTaskData.h"
#include "RE/B/BSTStaticFreeList.h"
#include "RE/D/DetectionTaskData.h"
#include "RE/M/MobileObjectMessage.h"
#include "RE/M/MovementTaskData.h"
#include "RE/P/PackageUpdateTaskData.h"

namespace RE
{
	class AITaskManager
	{
	public:
		AITaskManager* ctor()
		{
			using func_t = AITaskManager*(__thiscall*)(AITaskManager*);
			static REL::Relocation<func_t> func{ Offsets::AITaskManager::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(AITaskManager*);
			static REL::Relocation<func_t> func{ Offsets::AITaskManager::dtor };
			func(this);
		}

		void UpdateTasks()
		{
			using func_t = decltype(&AITaskManager::UpdateTasks);
			static REL::Relocation<func_t> func{ Offsets::AITaskManager::UpdateTasks };
			func(this);
		}

		void StartTasksDuringRendering()
		{
			using func_t = decltype(&AITaskManager::StartTasksDuringRendering);
			static REL::Relocation<func_t> func{ Offsets::AITaskManager::StartTasksDuringRendering };
			func(this);
		}

	public:
		// members
		DetectionTaskData                            TaskDataDetection;             // 00
		AnimationTaskData                            TaskAnimationUpdate;           // 40
		PackageUpdateTaskData                        TaskDataPackagesUpdate;        // 78
		ActorUpdateTaskData                          TaskDataActorUpdate;           // BC
		ActorsScriptTaskData                         TaskDataActorsScript;          // F8
		MovementTaskData                             TaskDataActorMovement;         // 138
		BSTStaticFreeList<MobileObjectMessage, 4096> MessagePool;                   // 174
		bool                                         bRunningTasksDuringRendering;  // 10180
		std::uint8_t                                 pad10181[0x3];                 // 10181
	};
}
