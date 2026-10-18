#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkCollisionObject.h"
#include "RE/H/hkpMotion_MotionType.h"

namespace RE
{
	class bhkWorld;

	class bhkBlendCollisionObject :
		public bhkCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkBlendCollisionObject };
		static constexpr auto VTABLE{ VTABLE::bhkBlendCollisionObject };

		// members
		bool                 bRagdollUpdated;  // 14
		std::uint8_t         pad15[0x3];       // 15
		float                fHeirGain;        // 18
		float                fVelGain;         // 1C
		hkpMotion_MotionType ePrevType;        // 20
		bhkWorld*            pStoredWorld;     // 24
		std::int32_t         iForceAddCount;   // 28?
	};
}
