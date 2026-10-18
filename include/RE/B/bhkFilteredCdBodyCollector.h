#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpAllCdBodyPairCollector.h"

namespace RE
{
	class hkpCdBody;

	class bhkFilteredCdBodyCollector :
		public hkpAllCdBodyPairCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkFilteredCdBodyCollector };
		static constexpr auto VTABLE{ VTABLE::bhkFilteredCdBodyCollector };

		// override (hkpAllCdBodyPairCollector)
		virtual ~bhkFilteredCdBodyCollector() = default;                                        // 00
		virtual void addCdBodyPair(const hkpCdBody* a_arg1, const hkpCdBody* a_arg2) override;  // 01

		bhkFilteredCdBodyCollector* ctor()
		{
			using func_t = bhkFilteredCdBodyCollector*(__thiscall*)(bhkFilteredCdBodyCollector*);
			static REL::Relocation<func_t> func{ Offsets::bhkFilteredCdBodyCollector::ctor };
			return func(this);
		}
	};
}
