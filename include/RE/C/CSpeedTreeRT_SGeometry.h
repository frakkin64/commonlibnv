#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_SGeometry_SBillboard.h"
#include "RE/C/CSpeedTreeRT_SGeometry_SIndexed.h"
#include "RE/C/CSpeedTreeRT_SGeometry_SLeaf.h"

namespace RE
{
	class CSpeedTreeRT_SGeometry
	{
	public:
		using SBillboard = CSpeedTreeRT_SGeometry_SBillboard;
		using SIndexed = CSpeedTreeRT_SGeometry_SIndexed;
		using SLeaf = CSpeedTreeRT_SGeometry_SLeaf;

		CSpeedTreeRT_SGeometry* ctor()
		{
			using func_t = CSpeedTreeRT_SGeometry*(__thiscall*)(CSpeedTreeRT_SGeometry*);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT_SGeometry::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(CSpeedTreeRT_SGeometry*);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT_SGeometry::dtor };
			func(this);
		}

	public:
		// members
		CSpeedTreeRT_SGeometry_SIndexed   m_sBranches;              // 00
		float                             m_fBranchAlphaTestValue;  // 38
		CSpeedTreeRT_SGeometry_SIndexed   m_sFronds;                // 3C
		float                             m_fFrondAlphaTestValue;   // 74
		CSpeedTreeRT_SGeometry_SLeaf      m_sLeaves0;               // 78
		CSpeedTreeRT_SGeometry_SLeaf      m_sLeaves1;               // B4
		CSpeedTreeRT_SGeometry_SBillboard m_sBillboard0;            // F0
		CSpeedTreeRT_SGeometry_SBillboard m_sBillboard1;            // 104
		CSpeedTreeRT_SGeometry_SBillboard m_sHorizontalBillboard;   // 118
	};
}
