#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class bhkRigidBody;

	class DamageImpactData
	{
	public:
		// members
		NiPointer<bhkRigidBody> spBody;     // 00?
		NiPoint3                kLocation;  // 04
		NiPoint3                kNormal;    // 10
		NiPoint3                kVelocity;  // 1C?
	};
}
