#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BoundsTriangleInfo.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTMap.h"
#include "RE/P/PortalEdgeSwap.h"

namespace RE
{
	class ObstacleData;

	class ObstacleUndoData :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ObstacleUndoData };
		static constexpr auto VTABLE{ VTABLE::ObstacleUndoData };

		enum class OBSTACLE_UNDO_STATE : std::int32_t
		{
			kOBSTACLE_UNDO_STATE_INVALID = 0x0,
			kOBSTACLE_UNDO_STATE_ACTIVE = 0x1,
			kOBSTACLE_UNDO_STATE_WANT_TO_UNDO = 0x2,
			kOBSTACLE_UNDO_STATE_UNDONE = 0x3,
			kOBSTACLE_UNDO_STATE_DELETED = 0x4,
		};

		// override (NiRefObject)
		virtual ~ObstacleUndoData() = default;  // 00

		ObstacleUndoData* ctor()
		{
			using func_t = ObstacleUndoData*(__thiscall*)(ObstacleUndoData*);
			static REL::Relocation<func_t> func{ Offsets::ObstacleUndoData::ctor };
			return func(this);
		}

	public:
		// members
		ObstacleUndoData::OBSTACLE_UNDO_STATE          eState;                        // 08
		NiPointer<ObstacleData>                        spObstacle;                    // 0C
		std::uint32_t                                  iFirstAddedVertexIndex;        // 10
		std::uint32_t                                  iAddedVertexCount;             // 14
		std::uint32_t                                  iFirstAddedTriangleIndex;      // 18
		std::uint32_t                                  iAddedTriangleCount;           // 1C
		BSSimpleArray<std::uint16_t, 1024>             OverlappedTriangles;           // 20
		BSSimpleArray<BoundsTriangleInfo, 1024>        BoundsTriangles;               // 30
		NiTMap<std::uint16_t, NiPointer<ObstacleData>> RemovedTriangleToObstacleMap;  // 40
		BSSimpleArray<PortalEdgeSwap, 1024>            EdgeSwap;                      // 50
		BSSimpleArray<std::uint16_t, 1024>             AddedPOVs;                     // 60
	};
	static_assert(sizeof(ObstacleUndoData) == 0x70);
}
