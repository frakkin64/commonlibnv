#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class bhkRigidBody;

	class ImpactMixer_COLLISION_SOUND
	{
	public:
		// members
		NiPoint3      Location;        // 00?
		float         fVelocity;       // 0C?
		float         fFriction;       // 10?
		char          cMaterialType1;  // 14?
		char          cMaterialType2;  // 15?
		std::uint16_t pad16;           // 16
		std::int32_t  iID;             // 18?
		bhkRigidBody* pBody1;          // 1C?
		bhkRigidBody* pBody2;          // 20?
	};
}
