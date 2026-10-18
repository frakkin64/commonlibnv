#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SIdvLeafTexture.h"

namespace RE
{
	class CTreeFileAccess;

	class SIdvLeafInfo
	{
	public:
		enum class ECollisionType : std::int32_t
		{
			kNONE = 0x0,
			kONE_VALUE = 0x1,
			kTWO_VALUE = 0x2,
			kLEVELED_LIST = 0x3,
			kACTIVATE_CHOICE = 0x4,
		};

		void InitTables(std::int32_t nNumTextures)
		{
			using func_t = decltype(&SIdvLeafInfo::InitTables);
			static REL::Relocation<func_t> func{ Offsets::SIdvLeafInfo::InitTables };
			func(this, nNumTextures);
		}

		void Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&SIdvLeafInfo::Parse);
			static REL::Relocation<func_t> func{ Offsets::SIdvLeafInfo::Parse };
			func(this, cFile);
		}

	public:
		// members
		bool                         m_bDimming;              // 00?
		std::uint8_t                 pad01[0x3];              // 01
		float                        m_fDimmingScalar;        // 04
		float                        m_fBranchDimmingScalar;  // 08
		SIdvLeafInfo::ECollisionType m_eCollisionType;        // 0C
		stl::vector<SIdvLeafTexture> m_vLeafTextures;         // 10?
		float                        m_fSpacingTolerance;     // 28
		float                        m_fBlossomDistance;      // 2C
		float                        m_fBlossomWeighting;     // 30
		std::int32_t                 m_nBlossomLevel;         // 34
		float                        m_fMinimumBudAngle;      // 38
		float                        m_fMaximumBudAngle;      // 3C
		std::int32_t                 m_nNumRockingGroups;     // 40
		std::int32_t                 m_nNumLeafLodLevels;     // 44
		std::int32_t                 m_nNumTextures;          // 48
		float**                      m_pLeafVertexes;         // 4C
		float*                       m_pLeafTexCoords;        // 50
		float*                       m_pTimeOffsets;          // 54
	};
}
