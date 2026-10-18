#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBlendCollisionObject.h"
#include "RE/N/NiMatrix3.h"

namespace RE
{
	class bhkBlendCollisionObjectAddRotation :
		public bhkBlendCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkBlendCollisionObjectAddRotation };
		static constexpr auto VTABLE{ VTABLE::bhkBlendCollisionObjectAddRotation };

		// members
		NiMatrix3 AdditionalRotation;  // 2C?
	};
}
