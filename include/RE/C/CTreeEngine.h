#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CIdvCamera.h"
#include "RE/C/CIdvRandom.h"
#include "RE/S/SIdvLeafInfo.h"
#include "RE/S/SIdvTreeInfo.h"
#include "RE/S/SIdvWindInfo.h"

namespace RE
{
	class CBillboardLeaf;
	class CIdvBranch;
	class CIndexedGeometry;
	class CTreeFileAccess;
	class SIdvBranchInfo;

	class CTreeEngine :
		public CIdvCamera  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CTreeEngine };
		static constexpr auto VTABLE{ VTABLE::CTreeEngine };

		// override (CIdvCamera)
		virtual ~CTreeEngine() = default;  // 00

		void Compute(float fLeafSizeIncreaseFactor)
		{
			using func_t = decltype(&CTreeEngine::Compute);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::Compute };
			func(this, fLeafSizeIncreaseFactor);
		}

		bool Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::Parse);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::Parse };
			return func(this, cFile);
		}

		void ParseTreeInfo(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::ParseTreeInfo);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::ParseTreeInfo };
			func(this, cFile);
		}

		void ParseLodInfo(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::ParseLodInfo);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::ParseLodInfo };
			func(this, cFile);
		}

		void ParseTextureControls(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::ParseTextureControls);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::ParseTextureControls };
			func(this, cFile);
		}

		void ParseFlareInfo(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::ParseFlareInfo);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::ParseFlareInfo };
			func(this, cFile);
		}

	private:
		void ParseBranchInfo(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::ParseBranchInfo);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::ParseBranchInfo };
			func(this, cFile);
		}

		void ParseLeafCluster(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CTreeEngine::ParseLeafCluster);
			static REL::Relocation<func_t> func{ Offsets::CTreeEngine::ParseLeafCluster };
			func(this, cFile);
		}

	public:
		// members
		float                         m_fBillboardSize;             // 10
		float                         m_fLod;                       // 14
		float                         m_fOverrideTreeSize;          // 18
		float                         m_fOverrideTreeVariance;      // 1C
		CIdvRandom                    m_cRandom;                    // 20
		bool                          m_bTransientDataIntact;       // 21
		std::uint16_t                 pad22;                        // 22
		SIdvTreeInfo                  m_sTreeInfo;                  // 24
		CIdvBranch*                   m_pBranch;                    // 58
		CIndexedGeometry*             m_pBranchGeometry;            // 5C
		stl::vector<SIdvBranchInfo*>  m_vBranchInfo;                // 60
		std::uint32_t                 m_nNumBranchLodLevels;        // 78
		stl::vector<CBillboardLeaf*>  m_vBillboardLeaves;           // 7C
		SIdvLeafInfo                  m_sLeafInfo;                  // 94
		stl::vector<CBillboardLeaf*>* m_vLeafLods;                  // EC
		bool                          m_bParsedLeafLods;            // F0
		std::uint8_t                  padF1[0x3];                   // F1
		float                         m_fMinBranchVolumePercent;    // F4
		float                         m_fMaxBranchVolumePercent;    // F8
		float                         m_fLeafReductionPercentage;   // FC
		float                         m_fBranchReductionFuzziness;  // 100
		float                         m_fLargeBranchPercent;        // 104
		std::int32_t                  m_nBranchesWeightLevel;       // 108
		SIdvWindInfo                  m_sWindInfo;                  // 10C
	};
	static_assert(sizeof(CTreeEngine) == 0x128);
}
