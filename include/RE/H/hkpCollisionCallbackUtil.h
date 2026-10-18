#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpConstraintListener.h"
#include "RE/H/hkpEndOfStepCallbackUtil.h"
#include "RE/H/hkpWorldDeletionListener.h"

namespace RE
{
	class hkpWorld;

	class hkpCollisionCallbackUtil :
		public hkReferencedObject,  // 00
		public hkpConstraintListener,  // 08
		public hkpWorldDeletionListener  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCollisionCallbackUtil };
		static constexpr auto VTABLE{ VTABLE::hkpCollisionCallbackUtil };

		// override (hkReferencedObject)
		virtual ~hkpCollisionCallbackUtil() = default;  // 00

		static void addCollisionCallbackUtil(hkpWorld* world)
		{
			using func_t = decltype(&hkpCollisionCallbackUtil::addCollisionCallbackUtil);
			static REL::Relocation<func_t> func{ Offsets::hkpCollisionCallbackUtil::addCollisionCallbackUtil };
			func(world);
		}

	protected:
		hkpCollisionCallbackUtil* ctor()
		{
			using func_t = hkpCollisionCallbackUtil*(__thiscall*)(hkpCollisionCallbackUtil*);
			static REL::Relocation<func_t> func{ Offsets::hkpCollisionCallbackUtil::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t            m_count;                  // 10
		hkpEndOfStepCallbackUtil m_endOfStepCallbackUtil;  // 14
	};
}
