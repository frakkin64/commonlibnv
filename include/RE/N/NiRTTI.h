#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiRTTI
	{
	public:
		NiRTTI* ctor(char const* pcName, NiRTTI const* pkBaseRTTI)
		{
			using func_t = NiRTTI*(__thiscall*)(NiRTTI*, char const*, NiRTTI const*);
			static REL::Relocation<func_t> func{ Offsets::NiRTTI::ctor };
			return func(this, pcName, pkBaseRTTI);
		}

	public:
		// members
		const char*   m_pcName;      // 00
		const NiRTTI* m_pkBaseRTTI;  // 04
	};
}
