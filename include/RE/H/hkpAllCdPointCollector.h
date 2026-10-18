#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"
#include "RE/H/hkpCdPointCollector.h"
#include "RE/H/hkpRootCdPoint.h"

namespace RE
{
	class hkpCdPoint;

	class alignas(16) hkpAllCdPointCollector :
		public hkpCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAllCdPointCollector };
		static constexpr auto VTABLE{ VTABLE::hkpAllCdPointCollector };

		// override (hkpCdPointCollector)
		virtual ~hkpAllCdPointCollector() = default;                 // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1) override;  // 01
		virtual void reset() override;                               // 02

		// add
		virtual void addRootCdPoint(hkpRootCdPoint const& event);  // 03

		hkpAllCdPointCollector* ctor()
		{
			using func_t = hkpAllCdPointCollector*(__thiscall*)(hkpAllCdPointCollector*);
			static REL::Relocation<func_t> func{ Offsets::hkpAllCdPointCollector::ctor };
			return func(this);
		}

		void sortHits()
		{
			using func_t = decltype(&hkpAllCdPointCollector::sortHits);
			static REL::Relocation<func_t> func{ Offsets::hkpAllCdPointCollector::sortHits };
			func(this);
		}

	public:
		// members
		std::uint8_t                                                pad08[0x8];  // 08
		hkInplaceArray<hkpRootCdPoint, 8, hkContainerHeapAllocator> m_hits;      // 10
	};
}
