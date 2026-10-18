#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"
#include "RE/H/hkpCdBodyPairCollector.h"
#include "RE/H/hkpRootCdBodyPair.h"

namespace RE
{
	class hkpCdBody;

	class hkpAllCdBodyPairCollector :
		public hkpCdBodyPairCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAllCdBodyPairCollector };
		static constexpr auto VTABLE{ VTABLE::hkpAllCdBodyPairCollector };

		// override (hkpCdBodyPairCollector)
		virtual ~hkpAllCdBodyPairCollector() = default;                                         // 00
		virtual void addCdBodyPair(const hkpCdBody* a_arg1, const hkpCdBody* a_arg2) override;  // 01
		virtual void reset() override;                                                          // 02

		hkpAllCdBodyPairCollector* ctor()
		{
			using func_t = hkpAllCdBodyPairCollector*(__thiscall*)(hkpAllCdBodyPairCollector*);
			static REL::Relocation<func_t> func{ Offsets::hkpAllCdBodyPairCollector::ctor };
			return func(this);
		}

	public:
		// members
		hkInplaceArray<hkpRootCdBodyPair, 16, hkContainerHeapAllocator> m_hits;  // 08
	};
}
