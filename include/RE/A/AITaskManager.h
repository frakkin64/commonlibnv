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
		AnimationTaskData                            TaskAnimationUpdate;           // 3C
		PackageUpdateTaskData                        TaskDataPackagesUpdate;        // 74
		ActorUpdateTaskData                          TaskDataActorUpdate;           // B8
		ActorsScriptTaskData                         TaskDataActorsScript;          // F4
		MovementTaskData                             TaskDataActorMovement;         // 134
		BSTStaticFreeList<MobileObjectMessage, 4096> MessagePool;                   // 170
		bool                                         bRunningTasksDuringRendering;  // 1017C?
		std::uint8_t                                 pad1017D[0x3];                 // 1017D
	};
}
