#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LockFreeMap.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BSTreeModel;
	class BSTreeNode;
	class BSXFlags;
	class NiAlphaProperty;
	class NiCamera;
	class NiMaterialProperty;
	class NiTexture;
	class TESObjectREFR;
	class TESObjectTREE;

	class BSTreeManager
	{
	public:
		static bool GetUseCanopyShadows()
		{
			using func_t = decltype(&BSTreeManager::GetUseCanopyShadows);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetUseCanopyShadows };
			return func();
		}

		static bool CanTreesLoad()
		{
			using func_t = decltype(&BSTreeManager::CanTreesLoad);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::CanTreesLoad };
			return func();
		}

		static bool AreTreesVisible()
		{
			using func_t = decltype(&BSTreeManager::AreTreesVisible);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::AreTreesVisible };
			return func();
		}

		static void SetTreesVisible(bool abShowTrees)
		{
			using func_t = decltype(&BSTreeManager::SetTreesVisible);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::SetTreesVisible };
			func(abShowTrees);
		}

		static NiCamera* GetCamera()
		{
			using func_t = decltype(&BSTreeManager::GetCamera);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetCamera };
			return func();
		}

		static bool AreLeavesVisible()
		{
			using func_t = decltype(&BSTreeManager::AreLeavesVisible);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::AreLeavesVisible };
			return func();
		}

		static BSTreeManager* GetInstance(bool abCreateIfNotFound)
		{
			using func_t = decltype(&BSTreeManager::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetInstance };
			return func(abCreateIfNotFound);
		}

		static void Create(bool abRecreateIfFound)
		{
			using func_t = decltype(&BSTreeManager::Create);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::Create };
			func(abRecreateIfFound);
		}

		static void Destroy()
		{
			using func_t = decltype(&BSTreeManager::Destroy);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::Destroy };
			func();
		}

		NiPointer<BSTreeModel>* GetModelArray(TESObjectTREE* apTree)
		{
			using func_t = decltype(&BSTreeManager::GetModelArray);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetModelArray };
			return func(this, apTree);
		}

		static void ClearModelCache(bool abClearManagerOnlyHeldOnly)
		{
			using func_t = decltype(&BSTreeManager::ClearModelCache);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::ClearModelCache };
			func(abClearManagerOnlyHeldOnly);
		}

		BSTreeNode* CreateTreeForReference(TESObjectREFR* apTreeRefr, TESObjectTREE* apTreeObj)
		{
			using func_t = decltype(&BSTreeManager::CreateTreeForReference);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::CreateTreeForReference };
			return func(this, apTreeRefr, apTreeObj);
		}

		static void Update(NiCamera* apCamera, bool abMenuMode)
		{
			using func_t = decltype(&BSTreeManager::Update);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::Update };
			func(apCamera, abMenuMode);
		}

		static float GetNearDistance()
		{
			using func_t = decltype(&BSTreeManager::GetNearDistance);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetNearDistance };
			return func();
		}

		static float GetFarDistance()
		{
			using func_t = decltype(&BSTreeManager::GetFarDistance);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetFarDistance };
			return func();
		}

		static NiTexture* GetCanopyShadow()
		{
			using func_t = decltype(&BSTreeManager::GetCanopyShadow);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetCanopyShadow };
			return func();
		}

		static void ClearCanopyShadow()
		{
			using func_t = decltype(&BSTreeManager::ClearCanopyShadow);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::ClearCanopyShadow };
			func();
		}

		static float GetSizeConversion()
		{
			using func_t = decltype(&BSTreeManager::GetSizeConversion);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::GetSizeConversion };
			return func();
		}

	protected:
		void dtor()
		{
			using func_t = void(__thiscall*)(BSTreeManager*);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::dtor };
			func(this);
		}

		void UpdateWindMatrices()
		{
			using func_t = decltype(&BSTreeManager::UpdateWindMatrices);
			static REL::Relocation<func_t> func{ Offsets::BSTreeManager::UpdateWindMatrices };
			func(this);
		}

	public:
		// members
		NiTPointerMap<TESObjectTREE*, NiPointer<BSTreeModel>*>* pModelMap;                 // 00
		NiPointer<NiTexture>                                    spCanopyShadow;            // 04
		NiPointer<NiMaterialProperty>                           spBillboardMatProp;        // 08
		NiPointer<NiAlphaProperty>                              spDistantAlphaProp;        // 0C
		NiPointer<BSXFlags>                                     spHavokFlags;              // 10
		float                                                   fWindSpeed;                // 14
		bool                                                    bShowTrees;                // 18
		bool                                                    bShowLeaves;               // 19
		bool                                                    bForceCompute;             // 1A
		bool                                                    m_bForceFullLOD;           // 1B
		LockFreeMap<TESObjectREFR*, BSTreeNode*>*               pBackgroundLoadedTreeMap;  // 1C
	};
}
