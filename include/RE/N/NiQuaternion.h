#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiQuaternion
	{
	public:
		char* GetViewerString(char const* pcPrefix) const
		{
			using func_t = decltype(&NiQuaternion::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiQuaternion::GetViewerString };
			return func(this, pcPrefix);
		}

	public:
		// members
		float m_fW;  // 00
		float m_fX;  // 04
		float m_fY;  // 08
		float m_fZ;  // 0C
	};
	static_assert(sizeof(NiQuaternion) == 0x10);
}
