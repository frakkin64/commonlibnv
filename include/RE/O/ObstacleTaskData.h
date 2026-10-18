#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSWin32TaskletData.h"
#include "RE/N/NiPointer.h"
#include "RE/O/OBSTACLE_TASK_TYPE.h"
#include "RE/O/ObstacleTaskNavMeshOperation.h"
#include "RE/T/TaskPortalSwap.h"

namespace RE
{
	class NavMeshInfo;
	class ObstacleData;

	class ObstacleTaskData :
		public BSWin32TaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ObstacleTaskData };
		static constexpr auto VTABLE{ VTABLE::ObstacleTaskData };

		// override (BSWin32TaskletData)
		virtual ~ObstacleTaskData() = default;  // 00
		virtual void Process() override;        // 02

		ObstacleTaskData* ctor(NavMeshInfo* apNavMesh)
		{
			using func_t = ObstacleTaskData*(__thiscall*)(ObstacleTaskData*, NavMeshInfo*);
			static REL::Relocation<func_t> func{ Offsets::ObstacleTaskData::ctor };
			return func(this, apNavMesh);
		}

		bool AddOperation(NiPointer<ObstacleData> const& apObstacle, OBSTACLE_TASK_TYPE aeType)
		{
			using func_t = decltype(&ObstacleTaskData::AddOperation);
			static REL::Relocation<func_t> func{ Offsets::ObstacleTaskData::AddOperation };
			return func(this, apObstacle, aeType);
		}

		static std::int32_t SortOperationsFunction(void const* apOp1, void const* apOp2)
		{
			using func_t = decltype(&ObstacleTaskData::SortOperationsFunction);
			static REL::Relocation<func_t> func{ Offsets::ObstacleTaskData::SortOperationsFunction };
			return func(apOp1, apOp2);
		}

		bool ReplaceNavMesh()
		{
			using func_t = decltype(&ObstacleTaskData::ReplaceNavMesh);
			static REL::Relocation<func_t> func{ Offsets::ObstacleTaskData::ReplaceNavMesh };
			return func(this);
		}

	public:
		// members
		// not placed: spSrcMesh(absent), spNewNavMesh(absent)
		NavMeshInfo*                                      pInfo;            // 20
		BSSimpleArray<ObstacleTaskNavMeshOperation, 1024> Operations;       // 24
		TaskPortalSwap                                    PortalSwaps;      // 34
		bool                                              bPortalModified;  // 54
		std::uint8_t                                      pad55[0x3];       // 55
	};
	static_assert(sizeof(ObstacleTaskData) == 0x58);
}
