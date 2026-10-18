#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiColorA
	{
	public:
		NiColorA* ctor(float fR, float fG, float fB, float fA)
		{
			using func_t = NiColorA*(__thiscall*)(NiColorA*, float, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::NiColorA::ctor };
			return func(this, fR, fG, fB, fA);
		}

		char* GetViewerString(char const* pPrefix) const
		{
			using func_t = decltype(&NiColorA::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiColorA::GetViewerString };
			return func(this, pPrefix);
		}

	public:
		// members
		float r;  // 00
		float g;  // 04
		float b;  // 08
		float a;  // 0C
	};
	static_assert(sizeof(NiColorA) == 0x10);
}
