#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkCriticalSection.h"
#include "RE/H/hkMultiThreadCheck.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkReferencedObject_LockMode.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkReferencedObjectLock :
		public hkReferencedObject,  // 00
		public hkSingleton<hkReferencedObjectLock>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkReferencedObjectLock };
		static constexpr auto VTABLE{ VTABLE::hkReferencedObjectLock };

		// override (hkReferencedObject)
		virtual ~hkReferencedObjectLock() = default;  // 00

		hkReferencedObjectLock* ctor()
		{
			using func_t = hkReferencedObjectLock*(__thiscall*)(hkReferencedObjectLock*);
			static REL::Relocation<func_t> func{ Offsets::hkReferencedObjectLock::ctor };
			return func(this);
		}

	public:
		// members
		hkReferencedObject_LockMode m_lockMode;          // 08?
		std::int32_t                m_lockCount;         // 0C?
		hkMultiThreadCheck          m_multiThreadCheck;  // 10?
		hkCriticalSection           m_criticalSection;   // 18?
	};
}
