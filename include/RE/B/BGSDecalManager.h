#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDecalManager_DECAL_TYPE.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BGSDecalEmitter;
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class BSTempEffectSimpleDecal;
	class DECAL_CREATION_DATA;
	class NiCamera;
	class TESObjectREFR;

	class BGSDecalManager
	{
	public:
		using DECAL_TYPE = BGSDecalManager_DECAL_TYPE;

		[[nodiscard]] static BGSDecalManager* GetSingleton() noexcept
		{
			static REL::Relocation<BGSDecalManager**> singleton{ Offsets::BGSDecalManager::pInstance };
			return *singleton;
		}

		static BGSDecalManager* GetInstance()
		{
			using func_t = decltype(&BGSDecalManager::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::GetInstance };
			return func();
		}

		void UpdateSimpleDecals()
		{
			using func_t = decltype(&BGSDecalManager::UpdateSimpleDecals);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::UpdateSimpleDecals };
			func(this);
		}

		void IssueDecalOcclusionQuery(BSTempEffectSimpleDecal* apDecal)
		{
			using func_t = decltype(&BGSDecalManager::IssueDecalOcclusionQuery);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::IssueDecalOcclusionQuery };
			func(this, apDecal);
		}

		static bool IsValidDecalImpact(TESObjectREFR* apCollidee, BGSDecalManager_DECAL_TYPE aeDecalType)
		{
			using func_t = decltype(&BGSDecalManager::IsValidDecalImpact);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::IsValidDecalImpact };
			return func(apCollidee, aeDecalType);
		}

		void AddDecal(DECAL_CREATION_DATA& arDecalData, BGSDecalManager_DECAL_TYPE aeDecalType, bool abForceAdd)
		{
			using func_t = decltype(&BGSDecalManager::AddDecal);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::AddDecal };
			func(this, arDecalData, aeDecalType, abForceAdd);
		}

		static void RemoveAllDecals()
		{
			using func_t = decltype(&BGSDecalManager::RemoveAllDecals);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::RemoveAllDecals };
			func();
		}

		void ClearPendingQueries()
		{
			using func_t = decltype(&BGSDecalManager::ClearPendingQueries);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::ClearPendingQueries };
			func(this);
		}

	private:
		bool AddGeometryDecalRecurse(DECAL_CREATION_DATA& arDecalData)
		{
			using func_t = decltype(&BGSDecalManager::AddGeometryDecalRecurse);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::AddGeometryDecalRecurse };
			return func(this, arDecalData);
		}

		bool AddProjectedDecalRecurse(DECAL_CREATION_DATA& arDecalData)
		{
			using func_t = decltype(&BGSDecalManager::AddProjectedDecalRecurse);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalManager::AddProjectedDecalRecurse };
			return func(this, arDecalData);
		}

	public:
		// members
		NiPointer<BSRenderedTexture>                       spQueryTexture;          // 00
		bool                                               bClearQueryTexture;      // 04
		std::uint8_t                                       pad05[0x3];              // 05
		NiTPointerList<NiPointer<BSTempEffectSimpleDecal>> PendingSimpleDecalList;  // 08
		NiTPointerList<BGSDecalEmitter*>                   DecalEmitterList;        // 14
		NiPointer<BSShaderAccumulator>                     spQueryAccum;            // 20
		NiPointer<NiCamera>                                spQueryCamera;           // 24
	};
}
