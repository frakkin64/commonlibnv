#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpPhantomOverlapListener.h"

namespace RE
{
	class hkpCollidable;

	class hkpRejectChassisListener :
		public hkReferencedObject,  // 00
		public hkpPhantomOverlapListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRejectChassisListener };
		static constexpr auto VTABLE{ VTABLE::hkpRejectChassisListener };

		// override (hkReferencedObject)
		virtual ~hkpRejectChassisListener() = default;  // 00

		// members
		const hkpCollidable* m_chassis;  // 0C?
	};
}
