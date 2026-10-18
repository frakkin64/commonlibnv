#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FffModeTexS.h"

namespace RE
{
	class EGTData
	{
	public:
		EGTData* ctor(char const* apEGTFilename)
		{
			using func_t = EGTData*(__thiscall*)(EGTData*, char const*);
			static REL::Relocation<func_t> func{ Offsets::EGTData::ctor };
			return func(this, apEGTFilename);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(EGTData*);
			static REL::Relocation<func_t> func{ Offsets::EGTData::dtor };
			func(this);
		}

	public:
		// members
		std::uint32_t            lEGTBasisKey;  // 00?
		stl::vector<FffModeTexS> EGTBasis[2];   // 04
	};
	static_assert(sizeof(EGTData) == 0x34);
}
