#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SFrondGuide.h"
#include "RE/S/SFrondTexture.h"

namespace RE
{
	class CIdvBezierSpline;
	class CIndexedGeometry;
	class CLightingEngine;
	class CTreeFileAccess;

	class CFrondEngine
	{
	public:
		enum class EFrondType : std::int32_t
		{
			kFROND_BLADES = 0x0,
			kFROND_EXTRUSION = 0x1,
			kNUM_FROND_TYPES = 0x2,
		};

		CFrondEngine* ctor()
		{
			using func_t = CFrondEngine*(__thiscall*)(CFrondEngine*);
			static REL::Relocation<func_t> func{ Offsets::CFrondEngine::ctor };
			return func(this);
		}

		void Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CFrondEngine::Parse);
			static REL::Relocation<func_t> func{ Offsets::CFrondEngine::Parse };
			func(this, cFile);
		}

		void Compute(CIndexedGeometry* pGeometry, CLightingEngine* pLightingEngine)
		{
			using func_t = decltype(&CFrondEngine::Compute);
			static REL::Relocation<func_t> func{ Offsets::CFrondEngine::Compute };
			func(this, pGeometry, pLightingEngine);
		}

	public:
		// members
		CIndexedGeometry*                     m_pGeometry;               // 00
		CLightingEngine*                      m_pLightingEngine;         // 04
		stl::vector<SFrondGuide>              m_vGuides;                 // 08
		stl::vector<stl::vector<SFrondGuide>> m_vGuideLods;              // 20
		CFrondEngine::EFrondType              m_eFrondType;              // 38
		std::uint32_t                         m_nNumBlades;              // 3C
		CIdvBezierSpline*                     m_pProfile;                // 40
		std::uint32_t                         m_nProfileSegments;        // 44
		std::uint32_t                         m_nLevel;                  // 48
		bool                                  m_bEnabled;                // 4C
		std::uint8_t                          pad4D[0x3];                // 4D
		stl::vector<SFrondTexture>            m_vTextures;               // 50
		std::uint32_t                         m_nNumLodLevels;           // 68
		float                                 m_fMaxSurfaceAreaPercent;  // 6C
		float                                 m_fMinSurfaceAreaPercent;  // 70
		float                                 m_fReductionFuzziness;     // 74
		float                                 m_fLargeRetentionPercent;  // 78
		std::uint32_t                         m_nMinLengthSegments;      // 7C
		std::uint32_t                         m_nMinCrossSegments;       // 80
	};
	static_assert(sizeof(CFrondEngine) == 0x84);
}
