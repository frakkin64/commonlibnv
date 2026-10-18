#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NavMeshInfo;
	class NiTriShape;
	class ReferenceObstacleArray;
	class bhkRigidBody;

	class ObstacleData :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ObstacleData };
		static constexpr auto VTABLE{ VTABLE::ObstacleData };

		// override (NiRefObject)
		virtual ~ObstacleData() = default;  // 00

		// members
		ReferenceObstacleArray*           spParentArray;    // 08
		NiPointer<bhkRigidBody>           pRigidBody;       // 0C
		NiPoint3                          Center;           // 10
		NiMatrix3                         Orientation;      // 1C
		NiPoint3                          BoxMin;           // 40
		NiPoint3                          BoxMax;           // 4C
		NiPoint3                          aabbMin;          // 58
		NiPoint3                          aabbMax;          // 64
		std::uint32_t                     iLastUpdateTime;  // 70
		bool                              bActive;          // 74
		std::uint8_t                      pad75[0x3];       // 75
		BSSimpleArray<NavMeshInfo*, 1024> Navmeshes;        // 78
		NiPointer<NiTriShape>             sp3DNode;         // 88
	};
	static_assert(sizeof(ObstacleData) == 0x8C);
}
