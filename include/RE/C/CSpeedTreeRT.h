#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_ECollisionObjectType.h"
#include "RE/C/CSpeedTreeRT_ELightingMethod.h"
#include "RE/C/CSpeedTreeRT_EStaticLightingStyle.h"
#include "RE/C/CSpeedTreeRT_EWindMethod.h"
#include "RE/C/CSpeedTreeRT_SGeometry.h"

namespace RE
{
	class CFrondEngine;
	class CIndexedGeometry;
	class CLeafGeometry;
	class CLightingEngine;
	class CProjectedShadow;
	class CSimpleBillboard;
	class CTreeEngine;
	class CTreeFileAccess;
	class CWindEngine;
	class SCollisionObjects;
	class SEmbeddedTexCoords;
	class SInstanceList;
	class STreeInstanceData;

	class CSpeedTreeRT
	{
	public:
		using ECollisionObjectType = CSpeedTreeRT_ECollisionObjectType;
		using ELightingMethod = CSpeedTreeRT_ELightingMethod;
		using EStaticLightingStyle = CSpeedTreeRT_EStaticLightingStyle;
		using EWindMethod = CSpeedTreeRT_EWindMethod;
		using SGeometry = CSpeedTreeRT_SGeometry;

		class STextures;

		enum class ELodMethod : std::int32_t
		{
			kLOD_POP = 0x0,
			kLOD_SMOOTH = 0x1,
			kLOD_NONE = 0x3,
		};

		class STextures
		{
		public:
			STextures* ctor()
			{
				using func_t = STextures*(__thiscall*)(STextures*);
				static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT_STextures::ctor };
				return func(this);
			}

			void dtor()
			{
				using func_t = void(__thiscall*)(STextures*);
				static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT_STextures::dtor };
				func(this);
			}

		public:
			// members
			const char*   m_pBranchTextureFilename;  // 00
			std::uint32_t m_uiLeafTextureCount;      // 04
			const char**  m_pLeafTextureFilenames;   // 08
			std::uint32_t m_uiFrondTextureCount;     // 0C?
			const char**  m_pFrondTextureFilenames;  // 10?
			const char*   m_pCompositeFilename;      // 14?
			const char*   m_pSelfShadowFilename;     // 18?
		};

		void DeleteTransientData()
		{
			using func_t = decltype(&CSpeedTreeRT::DeleteTransientData);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::DeleteTransientData };
			func(this);
		}

		bool LoadTree(char const* pFilename)
		{
			using func_t = bool (CSpeedTreeRT::*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::LoadTree };
			return func(this, pFilename);
		}

		bool LoadTree(std::uint8_t const* pBlock, std::uint32_t nNumBytes)
		{
			using func_t = bool (CSpeedTreeRT::*)(std::uint8_t const*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::LoadTree_1 };
			return func(this, pBlock, nNumBytes);
		}

		void SetTreeSize(float fNewSize, float fNewVariance)
		{
			using func_t = decltype(&CSpeedTreeRT::SetTreeSize);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetTreeSize };
			func(this, fNewSize, fNewVariance);
		}

		void SetBranchLightingMethod(CSpeedTreeRT_ELightingMethod eMethod)
		{
			using func_t = decltype(&CSpeedTreeRT::SetBranchLightingMethod);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetBranchLightingMethod };
			func(this, eMethod);
		}

		void SetLeafLightingMethod(CSpeedTreeRT_ELightingMethod eMethod)
		{
			using func_t = decltype(&CSpeedTreeRT::SetLeafLightingMethod);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetLeafLightingMethod };
			func(this, eMethod);
		}

		void SetFrondLightingMethod(CSpeedTreeRT_ELightingMethod eMethod)
		{
			using func_t = decltype(&CSpeedTreeRT::SetFrondLightingMethod);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetFrondLightingMethod };
			func(this, eMethod);
		}

		static void GetCamera(float* pPosition, float* pDirection)
		{
			using func_t = decltype(&CSpeedTreeRT::GetCamera);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::GetCamera };
			func(pPosition, pDirection);
		}

		static void SetCamera(float const* pPosition, float const* pDirection)
		{
			using func_t = decltype(&CSpeedTreeRT::SetCamera);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetCamera };
			func(pPosition, pDirection);
		}

		void SetNumLeafRockingGroups(std::uint32_t nRockingGroups)
		{
			using func_t = decltype(&CSpeedTreeRT::SetNumLeafRockingGroups);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetNumLeafRockingGroups };
			func(this, nRockingGroups);
		}

		void SetLeafWindMethod(CSpeedTreeRT_EWindMethod eMethod)
		{
			using func_t = decltype(&CSpeedTreeRT::SetLeafWindMethod);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetLeafWindMethod };
			func(this, eMethod);
		}

		void SetBranchWindMethod(CSpeedTreeRT_EWindMethod eMethod)
		{
			using func_t = decltype(&CSpeedTreeRT::SetBranchWindMethod);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetBranchWindMethod };
			func(this, eMethod);
		}

		void SetFrondWindMethod(CSpeedTreeRT_EWindMethod eMethod)
		{
			using func_t = decltype(&CSpeedTreeRT::SetFrondWindMethod);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetFrondWindMethod };
			func(this, eMethod);
		}

		void SetLocalMatrices(std::uint32_t nStartingMatrix, std::uint32_t nMatrixSpan)
		{
			using func_t = decltype(&CSpeedTreeRT::SetLocalMatrices);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetLocalMatrices };
			func(this, nStartingMatrix, nMatrixSpan);
		}

		void SetLodLevel(float fLevel)
		{
			using func_t = decltype(&CSpeedTreeRT::SetLodLevel);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::SetLodLevel };
			func(this, fLevel);
		}

		void GetBoundingBox(float* pBounds) const
		{
			using func_t = decltype(&CSpeedTreeRT::GetBoundingBox);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::GetBoundingBox };
			func(this, pBounds);
		}

		void GetCollisionObject(std::uint32_t nIndex, CSpeedTreeRT_ECollisionObjectType& eType, float* pPosition, float* pDimensions)
		{
			using func_t = decltype(&CSpeedTreeRT::GetCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::GetCollisionObject };
			func(this, nIndex, eType, pPosition, pDimensions);
		}

	private:
		void ParseLodInfo(CTreeFileAccess* pFile)
		{
			using func_t = decltype(&CSpeedTreeRT::ParseLodInfo);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::ParseLodInfo };
			func(this, pFile);
		}

		void ParseWindInfo(CTreeFileAccess* pFile)
		{
			using func_t = decltype(&CSpeedTreeRT::ParseWindInfo);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::ParseWindInfo };
			func(this, pFile);
		}

		void ParseTextureCoordInfo(CTreeFileAccess* pFile)
		{
			using func_t = decltype(&CSpeedTreeRT::ParseTextureCoordInfo);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::ParseTextureCoordInfo };
			func(this, pFile);
		}

		void ParseCollisionObjects(CTreeFileAccess* pFile)
		{
			using func_t = decltype(&CSpeedTreeRT::ParseCollisionObjects);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::ParseCollisionObjects };
			func(this, pFile);
		}

		void GetBranchGeometry(CSpeedTreeRT_SGeometry& sGeometry, std::int16_t sOverrideLodValue)
		{
			using func_t = decltype(&CSpeedTreeRT::GetBranchGeometry);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::GetBranchGeometry };
			func(this, sGeometry, sOverrideLodValue);
		}

		void GetFrondGeometry(CSpeedTreeRT_SGeometry& sGeometry, std::int16_t sOverrideLodValue)
		{
			using func_t = decltype(&CSpeedTreeRT::GetFrondGeometry);
			static REL::Relocation<func_t> func{ Offsets::CSpeedTreeRT::GetFrondGeometry };
			func(this, sGeometry, sOverrideLodValue);
		}

	public:
		// members
		CTreeEngine*             m_pEngine;                   // 00
		CIndexedGeometry*        m_pBranchGeometry;           // 04
		CLeafGeometry*           m_pLeafGeometry;             // 08
		CLightingEngine*         m_pLightingEngine;           // 0C
		CWindEngine*             m_pWindEngine;               // 10
		CSimpleBillboard*        m_pSimpleBillboard;          // 14
		CSpeedTreeRT::ELodMethod m_eLeafLodMethod;            // 18
		float                    m_fLeafLodTransitionRadius;  // 1C
		float                    m_fLeafLodCurveExponent;     // 20
		float                    m_fLeafSizeIncreaseFactor;   // 24
		float                    m_fLeafTransitionFactor;     // 28
		float*                   m_pLeafLodSizeFactors;       // 2C
		std::uint32_t*           m_pInstanceRefCount;         // 30
		STreeInstanceData*       m_pInstanceData;             // 34
		SInstanceList*           m_pInstanceList;             // 38
		std::int32_t             m_nFrondLevel;               // 3C
		float*                   m_pTreeSizes;                // 40
		std::uint8_t             m_ucTargetAlphaValue;        // 44
		bool                     m_bTreeComputed;             // 45
		std::uint16_t            pad46;                       // 46
		std::int32_t             m_nBranchWindLevel;          // 48
		SEmbeddedTexCoords*      m_pEmbeddedTexCoords;        // 4C
		CProjectedShadow*        m_pProjectedShadow;          // 50
		std::uint16_t            m_usNum360Billboards;        // 54
		std::uint16_t            pad56;                       // 56
		SCollisionObjects*       m_pCollisionObjects;         // 58
		CFrondEngine*            m_pFrondEngine;              // 5C
		CIndexedGeometry*        m_pFrondGeometry;            // 60
		std::uint16_t            m_usNumFrondLodLevels;       // 64
		std::uint16_t            pad66;                       // 66
		char*                    m_pUserData;                 // 68
		bool                     m_b360Billboard;             // 6C
		bool                     m_bHorizontalBillboard;      // 6D
		std::uint16_t            pad6E;                       // 6E
		float                    m_afHorizontalCoords[12];    // 70?
	};
}
