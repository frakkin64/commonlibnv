#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkRigidBody.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) bhkRigidBodyT :
		public bhkRigidBody  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRigidBodyT };
		static constexpr auto VTABLE{ VTABLE::bhkRigidBodyT };

		// members
		std::uint32_t pad1C;     // 1C
		hkQuaternion  LocalRot;  // 20?
		hkVector4     LocalPos;  // 30?
	};
}
