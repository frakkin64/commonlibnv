#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpBroadPhaseListener.h"

namespace RE
{
	class hkpWorld;

	class hkpEntityEntityBroadPhaseListener :
		public hkReferencedObject,  // 00
		public hkpBroadPhaseListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpEntityEntityBroadPhaseListener };
		static constexpr auto VTABLE{ VTABLE::hkpEntityEntityBroadPhaseListener };

		// override (hkReferencedObject)
		virtual ~hkpEntityEntityBroadPhaseListener() = default;  // 00

		hkpEntityEntityBroadPhaseListener* ctor(hkpWorld* world)
		{
			using func_t = hkpEntityEntityBroadPhaseListener*(__thiscall*)(hkpEntityEntityBroadPhaseListener*, hkpWorld*);
			static REL::Relocation<func_t> func{ Offsets::hkpEntityEntityBroadPhaseListener::ctor };
			return func(this, world);
		}

	public:
		// members
		hkpWorld* m_world;  // 0C?
	};
}
