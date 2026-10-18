#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_ELightingMethod.h"
#include "RE/C/CSpeedTreeRT_EStaticLightingStyle.h"

namespace RE
{
	class CTreeFileAccess;

	class CLightingEngine
	{
	public:
		void Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CLightingEngine::Parse);
			static REL::Relocation<func_t> func{ Offsets::CLightingEngine::Parse };
			func(this, cFile);
		}

	public:
		// members
		// not placed: m_eBranchLightingMethod(absent)
		float                             m_afBranchMaterial[13];           // 00
		CSpeedTreeRT_ELightingMethod      m_eLeafLightingMethod;            // 34
		float                             m_afLeafMaterial[13];             // 38
		float                             m_fLeafLightingAdjustmentScalar;  // 6C
		CSpeedTreeRT_EStaticLightingStyle m_eStaticLightingStyle;           // 70
		CSpeedTreeRT_ELightingMethod      m_eFrondLightingMethod;           // 74
		float                             m_afFrondMaterial[13];            // 78
	};
}
