#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CVec3.h"

namespace RE
{
	class CTreeFileAccess;

	class SIdvWindInfo
	{
	public:
		void Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&SIdvWindInfo::Parse);
			static REL::Relocation<func_t> func{ Offsets::SIdvWindInfo::Parse };
			func(this, cFile);
		}

	public:
		// members
		CVec3 m_cLeafFactors;      // 00
		CVec3 m_cLeafOscillation;  // 0C
		float m_fStrength;         // 18
	};
}
