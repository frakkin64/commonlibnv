#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/S/SCENE_INFO_DATA_STRUCT.h"

namespace RE
{
	class NiAVObject;
	class NiNode;
	class TESForm;
	class TESObjectCELL;

	class __declspec(novtable) BGSSceneInfo
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSceneInfo };
		static constexpr auto VTABLE{ VTABLE::BGSSceneInfo };

		// add
		virtual ~BGSSceneInfo() = default;  // 00

		BGSSceneInfo* ctor()
		{
			using func_t = BGSSceneInfo*(__thiscall*)(BGSSceneInfo*);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::ctor };
			return func(this);
		}

		void CollectWaterSceneDataFromCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&BGSSceneInfo::CollectWaterSceneDataFromCell);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::CollectWaterSceneDataFromCell };
			func(this, apCell);
		}

		void CollectSceneDataFromAddonNodes()
		{
			using func_t = decltype(&BGSSceneInfo::CollectSceneDataFromAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::CollectSceneDataFromAddonNodes };
			func(this);
		}

		void CollectSceneDataFromNode(NiNode* apNode, bool abIncludeAddonNodes, bool abTrackActors)
		{
			using func_t = decltype(&BGSSceneInfo::CollectSceneDataFromNode);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::CollectSceneDataFromNode };
			func(this, apNode, abIncludeAddonNodes, abTrackActors);
		}

		void CollectSceneDataRecursive(NiAVObject* ap3D, SCENE_INFO_DATA_STRUCT* pStructToFill, bool abTrackActors, NiAVObject* apParent)
		{
			using func_t = decltype(&BGSSceneInfo::CollectSceneDataRecursive);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::CollectSceneDataRecursive };
			func(this, ap3D, pStructToFill, abTrackActors, apParent);
		}

		static void CollectSceneDataForLoadedArea(float& afOutTNumber, float& afOutMNumber, bool abCollectTextures, bool abIncludeAddonNodes)
		{
			using func_t = decltype(&BGSSceneInfo::CollectSceneDataForLoadedArea);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::CollectSceneDataForLoadedArea };
			func(afOutTNumber, afOutMNumber, abCollectTextures, abIncludeAddonNodes);
		}

		static void ReloadBudgetCaps()
		{
			using func_t = decltype(&BGSSceneInfo::ReloadBudgetCaps);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::ReloadBudgetCaps };
			func();
		}

		static std::uint32_t GetLoadedAreaNonActorMemoryBudgetCap()
		{
			using func_t = decltype(&BGSSceneInfo::GetLoadedAreaNonActorMemoryBudgetCap);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::GetLoadedAreaNonActorMemoryBudgetCap };
			return func();
		}

		static void BuildMNumberString(float a_arg1, BSStringT<char>& a_arg2, bool aOutText)
		{
			using func_t = decltype(&BGSSceneInfo::BuildMNumberString);
			static REL::Relocation<func_t> func{ Offsets::BGSSceneInfo::BuildMNumberString };
			func(a_arg1, a_arg2, aOutText);
		}

	public:
		// members
		SCENE_INFO_DATA_STRUCT SceneData;        // 04
		TESForm*               pAssociatedForm;  // 44
	};
	static_assert(sizeof(BGSSceneInfo) == 0x48);
}
