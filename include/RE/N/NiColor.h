#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiColor
	{
	public:
		char* GetViewerString(char const* pPrefix) const
		{
			using func_t = decltype(&NiColor::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiColor::GetViewerString };
			return func(this, pPrefix);
		}

	public:
		// members
		float r;  // 00
		float g;  // 04
		float b;  // 08
	};
}
