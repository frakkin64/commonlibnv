#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CFilter.h"
#include "RE/C/COL_LAYER.h"
#include "RE/H/hkpClosestRayHitCollector.h"

namespace RE
{
	class MobileObject;
	class hkpCdBody;
	class hkpShapeRayCastCollectorOutput;

	class alignas(16) SpecificItemCollector :
		public hkpClosestRayHitCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SpecificItemCollector };
		static constexpr auto VTABLE{ VTABLE::SpecificItemCollector };

		// override (hkpClosestRayHitCollector)
		virtual void addRayHit(const hkpCdBody* a_arg1, const hkpShapeRayCastCollectorOutput* a_arg2) override;  // 00
		virtual ~SpecificItemCollector() = default;                                                              // 01

		SpecificItemCollector* ctor(COL_LAYER aePick, MobileObject* apMob)
		{
			using func_t = SpecificItemCollector*(__thiscall*)(SpecificItemCollector*, COL_LAYER, MobileObject*);
			static REL::Relocation<func_t> func{ Offsets::SpecificItemCollector::ctor };
			return func(this, aePick, apMob);
		}

		SpecificItemCollector* ctor(COL_LAYER aePick, CFilter& arFilter)
		{
			using func_t = SpecificItemCollector*(__thiscall*)(SpecificItemCollector*, COL_LAYER, CFilter&);
			static REL::Relocation<func_t> func{ Offsets::SpecificItemCollector::ctor_1 };
			return func(this, aePick, arFilter);
		}

	protected:
		void Init(COL_LAYER aePick, CFilter& arFilter)
		{
			using func_t = decltype(&SpecificItemCollector::Init);
			static REL::Relocation<func_t> func{ Offsets::SpecificItemCollector::Init };
			func(this, aePick, arFilter);
		}

	public:
		// members
		CFilter      iFilter;          // 70
		float        fMinHitFraction;  // 74
		std::uint8_t pad78[0x8];       // 78
	};
}
