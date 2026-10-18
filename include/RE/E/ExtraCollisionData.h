#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class CollisionData;

	class ExtraCollisionData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCollisionData };
		static constexpr auto VTABLE{ VTABLE::ExtraCollisionData };

		// override (BSExtraData)
		virtual ~ExtraCollisionData() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		CollisionData* pCollisionData;  // 0C
	};
	static_assert(sizeof(ExtraCollisionData) == 0x10);
}
