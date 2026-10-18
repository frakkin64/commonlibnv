#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FffModeGS.h"

namespace RE
{
	class EGMData
	{
	public:
		EGMData* ctor(char const* apEGMFilename)
		{
			using func_t = EGMData*(__thiscall*)(EGMData*, char const*);
			static REL::Relocation<func_t> func{ Offsets::EGMData::ctor };
			return func(this, apEGMFilename);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(EGMData*);
			static REL::Relocation<func_t> func{ Offsets::EGMData::dtor };
			func(this);
		}

	public:
		// members
		std::uint32_t          lEGMBasisKey;  // 00
		stl::vector<FffModeGS> EGMBasis[2];   // 04
	};
}
