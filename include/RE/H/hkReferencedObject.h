#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBaseObject.h"
#include "RE/H/hkReferencedObject_LockMode.h"

namespace RE
{
	class hkClass;
	class hkStatisticsCollector;

	class hkReferencedObject :
		public hkBaseObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkReferencedObject };
		static constexpr auto VTABLE{ VTABLE::hkReferencedObject };

		using LockMode = hkReferencedObject_LockMode;

		// override (hkBaseObject)
		virtual ~hkReferencedObject() = default;  // 00

		// add
		virtual const hkClass* getClassType() const;                                                     // 01
		virtual void calcContentStatistics(hkStatisticsCollector* a_arg1, const hkClass* a_arg2) const;  // 02

		static void operator_delete(void* p)
		{
			using func_t = decltype(&hkReferencedObject::operator_delete);
			static REL::Relocation<func_t> func{ Offsets::hkReferencedObject::operator_delete };
			func(p);
		}

		hkReferencedObject* ctor()
		{
			using func_t = hkReferencedObject*(__thiscall*)(hkReferencedObject*);
			static REL::Relocation<func_t> func{ Offsets::hkReferencedObject::ctor };
			return func(this);
		}

		void removeReferenceLockUnchecked() const
		{
			using func_t = decltype(&hkReferencedObject::removeReferenceLockUnchecked);
			static REL::Relocation<func_t> func{ Offsets::hkReferencedObject::removeReferenceLockUnchecked };
			func(this);
		}

	public:
		// members
		std::uint16_t m_memSizeAndFlags;  // 04
		std::int16_t  m_referenceCount;   // 06
	};
	static_assert(sizeof(hkReferencedObject) == 0x8);
}
