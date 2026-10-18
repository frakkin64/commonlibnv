#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpEntityListener.h"

namespace RE
{
	class hkpEntity;

	class bhkObstacleRemovalListener :
		public hkpEntityListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkObstacleRemovalListener };
		static constexpr auto VTABLE{ VTABLE::bhkObstacleRemovalListener };

		// override (hkpEntityListener)
		virtual ~bhkObstacleRemovalListener() = default;                 // 00
		virtual void entityRemovedCallback(hkpEntity* entity) override;  // 02
	};
	static_assert(sizeof(bhkObstacleRemovalListener) == 0x4);
}
