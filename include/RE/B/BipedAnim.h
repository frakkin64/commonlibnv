#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BIPBONE.h"
#include "RE/B/BIPED_BONE.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BIPOBJECT.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SEX.h"

namespace RE
{
	class BSFaceGenModel;
	class BSShaderPPLightingProperty;
	class NiAVObject;
	class NiNode;
	class QueuedFile;
	class QueuedHelmet;
	class TESForm;
	class TESModel;
	class TESNPC;
	class TESObjectREFR;
	class TESObjectWEAP;
	class TESRace;

	class BipedAnim
	{
	public:
		TESObjectREFR* GetRequester()
		{
			using func_t = decltype(&BipedAnim::GetRequester);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::GetRequester };
			return func(this);
		}

		BIPOBJECT* GetBipObject(BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&BipedAnim::GetBipObject);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::GetBipObject };
			return func(this, aeBipedObject);
		}

		BipedAnim* ctor(TESObjectREFR* apRef, NiNode* apNode)
		{
			using func_t = BipedAnim*(__thiscall*)(BipedAnim*, TESObjectREFR*, NiNode*);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::ctor };
			return func(this, apRef, apNode);
		}

		void InitRoot(NiNode* apNode)
		{
			using func_t = decltype(&BipedAnim::InitRoot);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::InitRoot };
			func(this, apNode);
		}

		void RemoveAllParts()
		{
			using func_t = decltype(&BipedAnim::RemoveAllParts);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::RemoveAllParts };
			func(this);
		}

		void RemovePart(BIPED_OBJECT aeObj, bool abClear, std::int32_t aiClearValue)
		{
			using func_t = void (BipedAnim::*)(BIPED_OBJECT, bool, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::RemovePart };
			func(this, aeObj, abClear, aiClearValue);
		}

		void RemovePart(BIPOBJECT* apObj, bool abClear, std::int32_t aiClearValue)
		{
			using func_t = void (BipedAnim::*)(BIPOBJECT*, bool, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::RemovePart_1 };
			func(this, apObj, abClear, aiClearValue);
		}

		static void RunBiped3DDetach(NiAVObject* ap3D)
		{
			using func_t = decltype(&BipedAnim::RunBiped3DDetach);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::RunBiped3DDetach };
			func(ap3D);
		}

		void RecursivelyRemoveAllDecalPlacementVectorDataFromWeaponBone(NiAVObject* apRoot)
		{
			using func_t = decltype(&BipedAnim::RecursivelyRemoveAllDecalPlacementVectorDataFromWeaponBone);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::RecursivelyRemoveAllDecalPlacementVectorDataFromWeaponBone };
			func(this, apRoot);
		}

		NiNode* GetParentBone(BIPED_BONE aeType)
		{
			using func_t = decltype(&BipedAnim::GetParentBone);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::GetParentBone };
			return func(this, aeType);
		}

		void InitNaked(TESRace* apRace, SEX aeSex)
		{
			using func_t = decltype(&BipedAnim::InitNaked);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::InitNaked };
			func(this, apRace, aeSex);
		}

		void SetBipedWeapon(TESObjectWEAP* apWeapon, std::uint8_t iModSlots)
		{
			using func_t = decltype(&BipedAnim::SetBipedWeapon);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::SetBipedWeapon };
			func(this, apWeapon, iModSlots);
		}

		void RemoveBipedWeapon()
		{
			using func_t = decltype(&BipedAnim::RemoveBipedWeapon);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::RemoveBipedWeapon };
			func(this);
		}

		void AttachBipedWeapon(TESObjectWEAP* apWeapon, std::uint8_t iModSlots)
		{
			using func_t = decltype(&BipedAnim::AttachBipedWeapon);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AttachBipedWeapon };
			func(this, apWeapon, iModSlots);
		}

		void SetBipedPart(TESForm* apParent, TESModel* apModel, BIPED_OBJECT aeObjectSlot)
		{
			using func_t = decltype(&BipedAnim::SetBipedPart);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::SetBipedPart };
			func(this, apParent, apModel, aeObjectSlot);
		}

		void QueueBipedParts(IO_TASK_PRIORITY aePriority, NiPointer<QueuedHelmet>& aspQueuedHelmet, QueuedFile* apParent)
		{
			using func_t = decltype(&BipedAnim::QueueBipedParts);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::QueueBipedParts };
			func(this, aePriority, aspQueuedHelmet, apParent);
		}

		void QueueSkinTextures(std::uint32_t aiModelSkinFlags, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&BipedAnim::QueueSkinTextures);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::QueueSkinTextures };
			func(this, aiModelSkinFlags, aePriority, apParent);
		}

		void QueueSkinTexture(TESNPC* apNpc, BIPED_OBJECT aeBipedObject, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&BipedAnim::QueueSkinTexture);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::QueueSkinTexture };
			func(this, apNpc, aeBipedObject, aePriority, apParent);
		}

		void LoadBipedParts(bool abForceLoadImmediate)
		{
			using func_t = decltype(&BipedAnim::LoadBipedParts);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::LoadBipedParts };
			func(this, abForceLoadImmediate);
		}

		static void AttachToSkeleton(NiNode* apSkeleton, NiAVObject* apSkin, NiNode* apParentNode, bool abShowWarnings)
		{
			using func_t = decltype(&BipedAnim::AttachToSkeleton);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AttachToSkeleton };
			func(apSkeleton, apSkin, apParentNode, abShowWarnings);
		}

		static void AttachToParent(NiNode* apSkeleton, NiNode* apNode, NiNode* apClonedFromNode, BipedAnim* apBipedAnim, BIPED_OBJECT aeBipedObject, BSFaceGenModel* apfgModel)
		{
			using func_t = decltype(&BipedAnim::AttachToParent);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AttachToParent };
			func(apSkeleton, apNode, apClonedFromNode, apBipedAnim, aeBipedObject, apfgModel);
		}

		BSFaceGenModel* LoadFaceGenModel(BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&BipedAnim::LoadFaceGenModel);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::LoadFaceGenModel };
			return func(this, aeBipedObject);
		}

		bool IsFaceGenObject(BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&BipedAnim::IsFaceGenObject);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::IsFaceGenObject };
			return func(this, aeBipedObject);
		}

		NiNode* CloneHelmet(BSFaceGenModel* apfgModel, NiNode* apNode, BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&BipedAnim::CloneHelmet);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::CloneHelmet };
			return func(this, apfgModel, apNode, aeBipedObject);
		}

		void AttachHelmet(BSFaceGenModel* apfgModel, NiNode* apNode, BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&BipedAnim::AttachHelmet);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AttachHelmet };
			func(this, apfgModel, apNode, aeBipedObject);
		}

		static NiAVObject* LoadAndAttachAddOn(TESForm* apObject, TESModel* apModel, BIPED_OBJECT aeAttachmentType, TESObjectREFR* apRequester, NiAVObject* apObj3D)
		{
			using func_t = decltype(&BipedAnim::LoadAndAttachAddOn);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::LoadAndAttachAddOn };
			return func(apObject, apModel, aeAttachmentType, apRequester, apObj3D);
		}

		static void AddAddonNodes(NiNode* apClonedFrom, NiNode* apNode, BIPED_OBJECT aeAttachmentType, TESObjectREFR* apRequester)
		{
			using func_t = decltype(&BipedAnim::AddAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AddAddonNodes };
			func(apClonedFrom, apNode, aeAttachmentType, apRequester);
		}

		static BSShaderPPLightingProperty* GetLightingProperty(NiAVObject* apObj)
		{
			using func_t = decltype(&BipedAnim::GetLightingProperty);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::GetLightingProperty };
			return func(apObj);
		}

		static BIPED_OBJECT GetSkinBipedObject(NiAVObject* apObj, BSShaderPPLightingProperty* apLightingProperty)
		{
			using func_t = decltype(&BipedAnim::GetSkinBipedObject);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::GetSkinBipedObject };
			return func(apObj, apLightingProperty);
		}

	protected:
		NiAVObject* ApplySkinnedObjects(NiNode* apClone, BIPED_OBJECT aeBipedObject, bool abFirstPerson, bool abPipboy, BSFaceGenModel* apfgModel)
		{
			using func_t = decltype(&BipedAnim::ApplySkinnedObjects);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::ApplySkinnedObjects };
			return func(this, apClone, aeBipedObject, abFirstPerson, abPipboy, apfgModel);
		}

		NiAVObject* AttachSkinnedObject(NiNode* apNode, NiNode* apParentNode, BIPED_OBJECT aeBipedObject, bool abFirstPerson, bool abPipboy, BSFaceGenModel* apfgModel)
		{
			using func_t = decltype(&BipedAnim::AttachSkinnedObject);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AttachSkinnedObject };
			return func(this, apNode, apParentNode, aeBipedObject, abFirstPerson, abPipboy, apfgModel);
		}

		void AdjustSkinComplexion(NiAVObject* apObj, bool abForceReadjust)
		{
			using func_t = decltype(&BipedAnim::AdjustSkinComplexion);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::AdjustSkinComplexion };
			func(this, apObj, abForceReadjust);
		}

		bool Get1stPersonModelFileName(TESModel* apModel, char* ap1stPersonFileName)
		{
			using func_t = decltype(&BipedAnim::Get1stPersonModelFileName);
			static REL::Relocation<func_t> func{ Offsets::BipedAnim::Get1stPersonModelFileName };
			return func(this, apModel, ap1stPersonFileName);
		}

	public:
		// members
		NiNode*        root;                 // 00
		BIPBONE        bone[5];              // 04
		BIPOBJECT      object[20];           // 2C
		BIPOBJECT      bufferedObjects[20];  // 16C
		float          m_fWeaponOffset;      // 2AC
		TESObjectREFR* m_pRequester;         // 2B0
	};
	static_assert(sizeof(BipedAnim) == 0x2B4);
}
