#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_WEAPON_ENUM.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BSSimpleList.h"
#include "RE/E/ENUM_LOD_MULT.h"
#include "RE/I/IO_FILE_INDEX.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/L/LockFreeMap.h"
#include "RE/L/LockFreeQueue.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class AnimIdle;
	class Animation;
	class AttachDistant3DTask;
	class BSFile;
	class BSFileEntry;
	class BackgroundCloneThread;
	class BipedAnim;
	class KFModel;
	class Model;
	class NiNode;
	class QueuedAnimIdle;
	class QueuedFile;
	class QueuedHelmet;
	class QueuedModel;
	class QueuedReference;
	class QueuedReplacementKFList;
	class TESBoundObject;
	class TESModel;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESObjectTREE;
	class TESTextureList;
	class TESTextureListArray;

	class ModelLoader
	{
	public:
		bool GetLoadTexturesDegraded()
		{
			using func_t = decltype(&ModelLoader::GetLoadTexturesDegraded);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::GetLoadTexturesDegraded };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ModelLoader*);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::dtor };
			func(this);
		}

		void OutputModelMapContents(BSFile* apFile, bool abShowZeroCountModels)
		{
			using func_t = decltype(&ModelLoader::OutputModelMapContents);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::OutputModelMapContents };
			func(this, apFile, abShowZeroCountModels);
		}

		bool ReuseQueuedTexture(BSFileEntry* apTextureFileEntry, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&ModelLoader::ReuseQueuedTexture);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::ReuseQueuedTexture };
			return func(this, apTextureFileEntry, aePriority, apParent);
		}

		bool QueueTexture(char const* apTextureFileName, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = bool (ModelLoader::*)(char const*, IO_TASK_PRIORITY, QueuedFile*);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueTexture };
			return func(this, apTextureFileName, aePriority, apParent);
		}

		bool QueueTexture(BSFileEntry* apTextureFileEntry, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = bool (ModelLoader::*)(BSFileEntry*, IO_TASK_PRIORITY, QueuedFile*);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueTexture_1 };
			return func(this, apTextureFileEntry, aePriority, apParent);
		}

		void QueueModel(TESModel* apModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool abAddRefCount, bool abFaceGenModel)
		{
			using func_t = void (ModelLoader::*)(TESModel*, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModel };
			func(this, apModel, aePriority, apParent, aeLODFadeMult, abPrepareAfterLoad, abAddRefCount, abFaceGenModel);
		}

		void QueueModel(TESModel* apModel, NiPointer<QueuedModel>& aspQueuedModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool abAddRefCount, bool afOverriddenVisualDistance, float abFaceGenModel)
		{
			using func_t = void (ModelLoader::*)(TESModel*, NiPointer<QueuedModel>&, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT, bool, bool, bool, float);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModel_1 };
			func(this, apModel, aspQueuedModel, aePriority, apParent, aeLODFadeMult, abPrepareAfterLoad, abAddRefCount, afOverriddenVisualDistance, abFaceGenModel);
		}

		void QueueModel(char const* apModelFileName, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool abAddRefCount, bool abFaceGenModel)
		{
			using func_t = void (ModelLoader::*)(char const*, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModel_2 };
			func(this, apModelFileName, aePriority, apParent, aeLODFadeMult, abPrepareAfterLoad, abAddRefCount, abFaceGenModel);
		}

		void QueueModel(char const* apModelFileName, NiPointer<QueuedModel>& aspQueuedModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool abAddRefCount, bool abFaceGenModel)
		{
			using func_t = void (ModelLoader::*)(char const*, NiPointer<QueuedModel>&, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModel_3 };
			func(this, apModelFileName, aspQueuedModel, aePriority, apParent, aeLODFadeMult, abPrepareAfterLoad, abAddRefCount, abFaceGenModel);
		}

		void QueueModel(char const* apModelFileName, TESTextureList* apTextureList, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool abAddRefCount, bool abFaceGenModel)
		{
			using func_t = void (ModelLoader::*)(char const*, TESTextureList*, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModel_4 };
			func(this, apModelFileName, apTextureList, aePriority, apParent, aeLODFadeMult, abPrepareAfterLoad, abAddRefCount, abFaceGenModel);
		}

		void QueueModel(char const* apModelFileName, TESTextureList* apTextureList, NiPointer<QueuedModel>& aspQueuedModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareAfterLoad, bool abAddRefCount, bool abFaceGenModel)
		{
			using func_t = void (ModelLoader::*)(char const*, TESTextureList*, NiPointer<QueuedModel>&, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModel_5 };
			func(this, apModelFileName, apTextureList, aspQueuedModel, aePriority, apParent, aeLODFadeMult, abPrepareAfterLoad, abAddRefCount, abFaceGenModel);
		}

		void QueueTreeModel(TESObjectREFR* apRef, TESObjectTREE* apTree, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult)
		{
			using func_t = void (ModelLoader::*)(TESObjectREFR*, TESObjectTREE*, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueTreeModel };
			func(this, apRef, apTree, aePriority, apParent, aeLODFadeMult);
		}

		void QueueTreeModel(TESObjectREFR* apRef, TESObjectTREE* apTree, NiPointer<QueuedModel>& aspQueuedModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, ENUM_LOD_MULT aeLODFadeMult)
		{
			using func_t = void (ModelLoader::*)(TESObjectREFR*, TESObjectTREE*, NiPointer<QueuedModel>&, IO_TASK_PRIORITY, QueuedFile*, ENUM_LOD_MULT);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueTreeModel_1 };
			func(this, apRef, apTree, aspQueuedModel, aePriority, apParent, aeLODFadeMult);
		}

		void QueueReference(TESObjectREFR* apRef, IO_TASK_PRIORITY aePriority, bool abAllowQueueReferenceQueuing)
		{
			using func_t = decltype(&ModelLoader::QueueReference);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueReference };
			func(this, apRef, aePriority, abAllowQueueReferenceQueuing);
		}

		void QueueBoundObject(TESBoundObject* apBoundObject, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, TESObjectREFR* apQueuedForRef)
		{
			using func_t = void (ModelLoader::*)(TESBoundObject*, IO_TASK_PRIORITY, QueuedFile*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueBoundObject };
			func(this, apBoundObject, aePriority, apParent, apQueuedForRef);
		}

		void QueueBoundObject(TESBoundObject* apBoundObject, NiPointer<QueuedModel>& aspQueuedModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, TESObjectREFR* apQueuedForRef)
		{
			using func_t = void (ModelLoader::*)(TESBoundObject*, NiPointer<QueuedModel>&, IO_TASK_PRIORITY, QueuedFile*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueBoundObject_1 };
			func(this, apBoundObject, aspQueuedModel, aePriority, apParent, apQueuedForRef);
		}

		void QueueHelmet(BipedAnim* apBipedAnim, NiPointer<QueuedHelmet>& aspQueuedHelmet, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&ModelLoader::QueueHelmet);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueHelmet };
			func(this, apBipedAnim, aspQueuedHelmet, aePriority, apParent, aeBipedObject);
		}

		void ReleaseModel(char const* apModelFileName, bool abDeleteIfUnreferenced, std::uint32_t aiNumDecrements)
		{
			using func_t = decltype(&ModelLoader::ReleaseModel);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::ReleaseModel };
			func(this, apModelFileName, abDeleteIfUnreferenced, aiNumDecrements);
		}

		void ReleaseKF(char const* apKFFileName, bool abDeleteIfUnreferenced)
		{
			using func_t = decltype(&ModelLoader::ReleaseKF);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::ReleaseKF };
			func(this, apKFFileName, abDeleteIfUnreferenced);
		}

		void CancelReplacementKFList(Animation* apAnim)
		{
			using func_t = decltype(&ModelLoader::CancelReplacementKFList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::CancelReplacementKFList };
			func(this, apAnim);
		}

		void CancelReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ModelLoader::CancelReference);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::CancelReference };
			func(this, apRef);
		}

		bool IsReferenceQueued(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ModelLoader::IsReferenceQueued);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::IsReferenceQueued };
			return func(this, apRef);
		}

		void QueueCreatureParts(TESModel* apModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, TESObjectREFR* apQueuedForRef)
		{
			using func_t = decltype(&ModelLoader::QueueCreatureParts);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueCreatureParts };
			func(this, apModel, aePriority, apParent, apQueuedForRef);
		}

		void QueueAnimations(TESModel* apModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, TESObjectREFR* apQueuedForRef, bool abCreature, bool abForceAnimationLoad)
		{
			using func_t = decltype(&ModelLoader::QueueAnimations);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueAnimations };
			func(this, apModel, aePriority, apParent, apQueuedForRef, abCreature, abForceAnimationLoad);
		}

		void QueueModelList(BSSimpleList<char const*>* apModelList, TESTextureListArray* apTextureListArray, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, char const* apBasePath)
		{
			using func_t = decltype(&ModelLoader::QueueModelList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueModelList };
			func(this, apModelList, apTextureListArray, aePriority, apParent, apBasePath);
		}

		void QueueKFList(BSSimpleList<char const*>* apKFList, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, char const* apBasePath)
		{
			using func_t = decltype(&ModelLoader::QueueKFList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueKFList };
			func(this, apKFList, aePriority, apParent, apBasePath);
		}

		void QueueReplacementKFList(BSSimpleList<char const*>* apKFList, Animation* apAnim, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, char const* apBasePath)
		{
			using func_t = decltype(&ModelLoader::QueueReplacementKFList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueReplacementKFList };
			func(this, apKFList, apAnim, aePriority, apParent, apBasePath);
		}

		TESModel* GetModelForBoundObject(TESBoundObject* apBoundObject, TESObjectREFR* apQueuedForRef)
		{
			using func_t = decltype(&ModelLoader::GetModelForBoundObject);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::GetModelForBoundObject };
			return func(this, apBoundObject, apQueuedForRef);
		}

		void UpdateQueuedReferencePriorities(TESObjectCELL* apCriticalCell)
		{
			using func_t = decltype(&ModelLoader::UpdateQueuedReferencePriorities);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::UpdateQueuedReferencePriorities };
			func(this, apCriticalCell);
		}

		static void LoadQueuedPriorityCallback(float afPercent)
		{
			using func_t = decltype(&ModelLoader::LoadQueuedPriorityCallback);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::LoadQueuedPriorityCallback };
			func(afPercent);
		}

		NiNode* LoadFile(char const* apFilename, ENUM_LOD_MULT aeLODFadeMult, bool abPrepareObject, bool abSuppressWarning, bool abFaceGenModel, bool abDontIncrementRefCount)
		{
			using func_t = decltype(&ModelLoader::LoadFile);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::LoadFile };
			return func(this, apFilename, aeLODFadeMult, abPrepareObject, abSuppressWarning, abFaceGenModel, abDontIncrementRefCount);
		}

		KFModel* LoadKF(char const* apFilename)
		{
			using func_t = decltype(&ModelLoader::LoadKF);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::LoadKF };
			return func(this, apFilename);
		}

		bool FindModel(char const* apFilename, NiPointer<Model>& aspOutModel)
		{
			using func_t = decltype(&ModelLoader::FindModel);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::FindModel };
			return func(this, apFilename, aspOutModel);
		}

		BSSimpleList<char const*>* BuildFileList(char const* apSearchName, char const* apBaseFilename, BSSimpleList<char const*>* apFileList)
		{
			using func_t = decltype(&ModelLoader::BuildFileList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::BuildFileList };
			return func(this, apSearchName, apBaseFilename, apFileList);
		}

		BSSimpleList<char const*>* BuildKFFileList(char const* apBaseFilename, bool abAddLocomotion, bool abAddMTAnims, ANIM_GROUP_WEAPON_ENUM aeWeaponGroup)
		{
			using func_t = decltype(&ModelLoader::BuildKFFileList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::BuildKFFileList };
			return func(this, apBaseFilename, abAddLocomotion, abAddMTAnims, aeWeaponGroup);
		}

		BSSimpleList<char const*>* CopyFilenameList(BSSimpleList<char const*>* apList, BSSimpleList<char const*>* apDestList)
		{
			using func_t = decltype(&ModelLoader::CopyFilenameList);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::CopyFilenameList };
			return func(this, apList, apDestList);
		}

		void QueueFaceGenFile(char const* apFileName, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, IO_FILE_INDEX aeFileIndex)
		{
			using func_t = decltype(&ModelLoader::QueueFaceGenFile);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueFaceGenFile };
			func(this, apFileName, aePriority, apParent, aeFileIndex);
		}

		void QueueEGMFile(TESModel* apModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, std::int32_t aiHeadPart)
		{
			using func_t = decltype(&ModelLoader::QueueEGMFile);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueEGMFile };
			func(this, apModel, aePriority, apParent, aiHeadPart);
		}

		void QueueTRIFile(TESModel* apModel, IO_TASK_PRIORITY aePriority, QueuedFile* apParent, std::int32_t aiHeadPart)
		{
			using func_t = decltype(&ModelLoader::QueueTRIFile);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::QueueTRIFile };
			func(this, apModel, aePriority, apParent, aiHeadPart);
		}

		void CancelAllFiles()
		{
			using func_t = decltype(&ModelLoader::CancelAllFiles);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::CancelAllFiles };
			func(this);
		}

		void ClearUnusedModels(bool abMemoryPass)
		{
			using func_t = decltype(&ModelLoader::ClearUnusedModels);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::ClearUnusedModels };
			func(this, abMemoryPass);
		}

		void LoadAddonNodes(TESObjectREFR* apRef, NiNode* apNode)
		{
			using func_t = decltype(&ModelLoader::LoadAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::LoadAddonNodes };
			func(this, apRef, apNode);
		}

		void LoadAddons(NiNode* apNode)
		{
			using func_t = decltype(&ModelLoader::LoadAddons);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::LoadAddons };
			func(this, apNode);
		}

		void ReleaseFile(char const* apModelFileName)
		{
			using func_t = decltype(&ModelLoader::ReleaseFile);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::ReleaseFile };
			func(this, apModelFileName);
		}

		void ReleaseKFFile(char const* apFilename)
		{
			using func_t = decltype(&ModelLoader::ReleaseKFFile);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::ReleaseKFFile };
			func(this, apFilename);
		}

	private:
		void TryAndRemoveModel(Model* apModel, char const* apModelFileName)
		{
			using func_t = decltype(&ModelLoader::TryAndRemoveModel);
			static REL::Relocation<func_t> func{ Offsets::ModelLoader::TryAndRemoveModel };
			func(this, apModel, apModelFileName);
		}

	public:
		// members
		// not placed: pModelMap(absent), pKFModelMap(absent), pQueuedTextureMap(absent), pLoadedFileMap(absent)
		LockFreeMap<TESObjectREFR*, NiPointer<QueuedReference>>*     pQueuedReferencesMap;         // 00
		LockFreeMap<TESObjectREFR*, NiPointer<QueuedReference>>*     pReferencesToQueueMap;        // 04
		LockFreeMap<AnimIdle*, NiPointer<QueuedAnimIdle>>*           pQueuedAnimIdleMap;           // 08
		LockFreeMap<Animation*, NiPointer<QueuedReplacementKFList>>* pQueuedReplacementKFListMap;  // 0C
		LockFreeMap<TESObjectREFR*, NiPointer<QueuedHelmet>>*        pQueuedHelmetMap;             // 10
		LockFreeQueue<NiPointer<AttachDistant3DTask>>*               pAttachDistant3DTaskQueue;    // 14
		BackgroundCloneThread*                                       pBackgroundCloneThread;       // 18
		std::uint8_t                                                 pad1C[0x10];                  // 1C
		bool                                                         bHasDelayedFree;              // 2C
		std::uint8_t                                                 pad2D[0x3];                   // 2D
	};
}
