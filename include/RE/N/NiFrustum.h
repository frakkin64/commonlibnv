#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiFrustum
	{
	public:
		NiFrustum* ctor(bool bOrtho)
		{
			using func_t = NiFrustum*(__thiscall*)(NiFrustum*, bool);
			static REL::Relocation<func_t> func{ Offsets::NiFrustum::ctor };
			return func(this, bOrtho);
		}

		char* GetViewerString(char const* pcPrefix) const
		{
			using func_t = decltype(&NiFrustum::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiFrustum::GetViewerString };
			return func(this, pcPrefix);
		}

	public:
		// members
		float        m_fLeft;     // 00
		float        m_fRight;    // 04
		float        m_fTop;      // 08
		float        m_fBottom;   // 0C
		float        m_fNear;     // 10
		float        m_fFar;      // 14
		bool         m_bOrtho;    // 18
		std::uint8_t pad19[0x3];  // 19
	};
}
