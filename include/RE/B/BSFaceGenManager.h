#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/B/BS_FACEGEN_EXPRESSION.h"
#include "RE/B/BS_FACEGEN_MODIFIER.h"
#include "RE/B/BS_FACEGEN_PHONEME.h"
#include "RE/F/FR2MatrixVTC.h"
#include "RE/F/FanAttribE.h"
#include "RE/F/FanFgFileDataS.h"
#include "RE/F/FanGenCtlsGrpC.h"
#include "RE/F/FanLinCtlGrpS.h"
#include "RE/F/FanSymmE.h"
#include "RE/F/FanTypeE.h"
#include "RE/H/HAIR_PART.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SEX.h"

namespace RE
{
	class Actor;
	class BSFaceGenBaseMorphExtraData;
	class BSFaceGenModel;
	class BSFaceGenModelExtraData;
	class BSFaceGenModelMap;
	class BSFaceGenNiNode;
	class FaceGenNpcData;
	class NiAVObject;
	class NiAlphaProperty;
	class NiGeometryDataIteratorNiPoint3;
	class NiTexture;
	class NiTriBasedGeom;
	class QueuedFile;
	class TESNPC;

	class BSFaceGenManager
	{
	public:
		[[nodiscard]] static BSFaceGenManager* GetSingleton() noexcept
		{
			static REL::Relocation<BSFaceGenManager**> singleton{ Offsets::BSFaceGenManager::pInstance };
			return *singleton;
		}

		static bool GetUseFaceGenHeads()
		{
			using func_t = decltype(&BSFaceGenManager::GetUseFaceGenHeads);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetUseFaceGenHeads };
			return func();
		}

		static bool GetUseMultiThreading()
		{
			using func_t = decltype(&BSFaceGenManager::GetUseMultiThreading);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetUseMultiThreading };
			return func();
		}

		static char const* GetFaceGenExpressionText(BS_FACEGEN_EXPRESSION aeWhich)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceGenExpressionText);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenExpressionText };
			return func(aeWhich);
		}

		static char const* GetFaceGenModifierText(BS_FACEGEN_MODIFIER aeWhich)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceGenModifierText);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenModifierText };
			return func(aeWhich);
		}

		static char const* GetFaceGenPhonemeText(BS_FACEGEN_PHONEME aeWhich)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceGenPhonemeText);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenPhonemeText };
			return func(aeWhich);
		}

		static bool GetFixNormals()
		{
			using func_t = decltype(&BSFaceGenManager::GetFixNormals);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFixNormals };
			return func();
		}

		static BSFaceGenModelExtraData* GetFaceGenModelExtraData(NiTriBasedGeom* apGeom)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceGenModelExtraData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenModelExtraData };
			return func(apGeom);
		}

		static void InitializeSystem()
		{
			using func_t = decltype(&BSFaceGenManager::InitializeSystem);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::InitializeSystem };
			func();
		}

		static BSFaceGenManager* GetInstance()
		{
			using func_t = decltype(&BSFaceGenManager::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetInstance };
			return func();
		}

		static BSFaceGenModel* GetFaceGenModel(char const* apEGMFilename, char const* apNIFFilename, char const* apTRIFilename, char const* apEGTFilename, bool abAllowCreate, HAIR_PART aeHairPart, bool abIsAccessory)
		{
			using func_t = BSFaceGenModel*(__cdecl*)(char const*, char const*, char const*, char const*, bool, HAIR_PART, bool);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenModel };
			return func(apEGMFilename, apNIFFilename, apTRIFilename, apEGTFilename, abAllowCreate, aeHairPart, abIsAccessory);
		}

		static bool LoadEGMData(BSFaceGenModel* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::LoadEGMData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::LoadEGMData };
			return func(apModel);
		}

		static bool LoadEGTData(BSFaceGenModel* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::LoadEGTData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::LoadEGTData };
			return func(apModel);
		}

		static BSFaceGenModelMap* GetModelCache()
		{
			using func_t = decltype(&BSFaceGenManager::GetModelCache);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetModelCache };
			return func();
		}

		static void LockFaceGenAccess()
		{
			using func_t = decltype(&BSFaceGenManager::LockFaceGenAccess);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::LockFaceGenAccess };
			func();
		}

		static void UnlockFaceGenAccess()
		{
			using func_t = decltype(&BSFaceGenManager::UnlockFaceGenAccess);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::UnlockFaceGenAccess };
			func();
		}

		static std::int32_t GetMaxControlID(FanTypeE aeFanType, FanSymmE aeFanSymm)
		{
			using func_t = decltype(&BSFaceGenManager::GetMaxControlID);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetMaxControlID };
			return func(aeFanType, aeFanSymm);
		}

		static void InitFaceGenCoord(void* apCoord)
		{
			using func_t = decltype(&BSFaceGenManager::InitFaceGenCoord);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::InitFaceGenCoord };
			func(apCoord);
		}

		static float GetFaceCoordValue(void* apCoord, FanTypeE aeFanType, FanSymmE aeFanSymm, std::uint32_t aiCtrlID)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceCoordValue);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceCoordValue };
			return func(apCoord, aeFanType, aeFanSymm, aiCtrlID);
		}

		static void SetFaceCoordValue(void* apCoord, FanTypeE aeFanType, FanSymmE aeFanSymm, std::uint32_t aiCtrlID, float afValue)
		{
			using func_t = decltype(&BSFaceGenManager::SetFaceCoordValue);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::SetFaceCoordValue };
			func(apCoord, aeFanType, aeFanSymm, aiCtrlID, afValue);
		}

		static float GetFaceCoordAttribute(void* apCoord, FanAttribE aeFanAttribute, FanTypeE aeFanType)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceCoordAttribute);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceCoordAttribute };
			return func(apCoord, aeFanAttribute, aeFanType);
		}

		static void SetFaceCoordAttribute(void* apCoord, FanAttribE aeFanAttribute, FanTypeE aeFanType, float afValue)
		{
			using func_t = decltype(&BSFaceGenManager::SetFaceCoordAttribute);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::SetFaceCoordAttribute };
			func(apCoord, aeFanAttribute, aeFanType, afValue);
		}

		static void SetFaceCoordAttributes(void* apCoord, FanTypeE aeFanType, float* const afValues)
		{
			using func_t = decltype(&BSFaceGenManager::SetFaceCoordAttributes);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::SetFaceCoordAttributes };
			func(apCoord, aeFanType, afValues);
		}

		static void CycleFaceGenCoordValue(Actor* apActor)
		{
			using func_t = decltype(&BSFaceGenManager::CycleFaceGenCoordValue);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::CycleFaceGenCoordValue };
			func(apActor);
		}

		static bool CompareFaceGenCoord(void* apCoord1, void* apCoord2)
		{
			using func_t = decltype(&BSFaceGenManager::CompareFaceGenCoord);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::CompareFaceGenCoord };
			return func(apCoord1, apCoord2);
		}

		static void CopyFaceGenCoord(void* apCopyFromCoord, void* apCopyToCoord, bool abGeometryOnly, bool abTextureOnly)
		{
			using func_t = decltype(&BSFaceGenManager::CopyFaceGenCoord);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::CopyFaceGenCoord };
			func(apCopyFromCoord, apCopyToCoord, abGeometryOnly, abTextureOnly);
		}

		static void MergeFaceGenCoord(void* apCopyFromCoord1, void* apCopyFromCoord2, void* apCopyToCoord, bool abNoTextureMerge, float afClampVal)
		{
			using func_t = decltype(&BSFaceGenManager::MergeFaceGenCoord);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::MergeFaceGenCoord };
			func(apCopyFromCoord1, apCopyFromCoord2, apCopyToCoord, abNoTextureMerge, afClampVal);
		}

		static void OffsetFaceGenCoord(void* apCopyCoordOld, void* apCopyCoordNew, void* apCopyToCoord, bool abNoTextureOffset)
		{
			using func_t = decltype(&BSFaceGenManager::OffsetFaceGenCoord);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::OffsetFaceGenCoord };
			func(apCopyCoordOld, apCopyCoordNew, apCopyToCoord, abNoTextureOffset);
		}

		static void RandomizeFaceGenetic(float a_arg1, void* a_arg2, void* apBaseFaceCoord)
		{
			using func_t = decltype(&BSFaceGenManager::RandomizeFaceGenetic);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::RandomizeFaceGenetic };
			func(a_arg1, a_arg2, apBaseFaceCoord);
		}

		static BSFaceGenModel* GetFaceGenModel(NiTriBasedGeom* apGeom)
		{
			using func_t = BSFaceGenModel*(__cdecl*)(NiTriBasedGeom*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenModel_1 };
			return func(apGeom);
		}

		static void RefreshMeshFromBaseMorphExtraData(NiTriBasedGeom* apGeom, NiGeometryDataIteratorNiPoint3& arIterator)
		{
			using func_t = decltype(&BSFaceGenManager::RefreshMeshFromBaseMorphExtraData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::RefreshMeshFromBaseMorphExtraData };
			func(apGeom, arIterator);
		}

		static BSFaceGenBaseMorphExtraData* GetFaceGenBaseMorphExtraData(NiTriBasedGeom* apGeom)
		{
			using func_t = decltype(&BSFaceGenManager::GetFaceGenBaseMorphExtraData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetFaceGenBaseMorphExtraData };
			return func(apGeom);
		}

		static void ApplyHairMorph(NiTriBasedGeom* apGeom, float afModifierValue)
		{
			using func_t = decltype(&BSFaceGenManager::ApplyHairMorph);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::ApplyHairMorph };
			func(apGeom, afModifierValue);
		}

		static char const* GetAsEGMFile(BSStringT<char>& aOutFilename, char const* apModel, HAIR_PART aeHairPart)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsEGMFile);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsEGMFile };
			return func(aOutFilename, apModel, aeHairPart);
		}

		static char const* GetAsNIFFile(BSStringT<char>& aOutFilename, char const* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsNIFFile);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsNIFFile };
			return func(aOutFilename, apModel);
		}

		static char const* GetAsTRIFile(BSStringT<char>& aOutFilename, char const* apModel, HAIR_PART aeHairPart)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsTRIFile);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsTRIFile };
			return func(aOutFilename, apModel, aeHairPart);
		}

		static char const* GetAsEGTFile(BSStringT<char>& aOutFilename, char const* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsEGTFile);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsEGTFile };
			return func(aOutFilename, apModel);
		}

		static char const* GetAsNearestDetailDDSFile(BSStringT<char>& aOutFilename, SEX aeSex, std::uint8_t acAge, char const* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsNearestDetailDDSFile);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsNearestDetailDDSFile };
			return func(aOutFilename, aeSex, acAge, apModel);
		}

		static char const* GetAsNIFFileLowLOD(BSStringT<char>& aOutFilename, char const* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsNIFFileLowLOD);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsNIFFileLowLOD };
			return func(aOutFilename, apModel);
		}

		static char const* GetAsNIFFileHighLOD(BSStringT<char>& aOutFilename, char const* apModel)
		{
			using func_t = decltype(&BSFaceGenManager::GetAsNIFFileHighLOD);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetAsNIFFileHighLOD };
			return func(aOutFilename, apModel);
		}

		static void ResetQuantityArray(float* apQuantities, std::uint32_t aiNumQuantities, bool abForceZero)
		{
			using func_t = decltype(&BSFaceGenManager::ResetQuantityArray);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::ResetQuantityArray };
			func(apQuantities, aiNumQuantities, abForceZero);
		}

		static void ReplaceFaceMeshLOD(BSFaceGenNiNode* apNode, std::int32_t aDetail)
		{
			using func_t = decltype(&BSFaceGenManager::ReplaceFaceMeshLOD);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::ReplaceFaceMeshLOD };
			func(apNode, aDetail);
		}

		static bool CreateFaceGenHead(BSFaceGenNiNode*& apOutNodeBiped, BSFaceGenNiNode*& apOutNodeSkinned, FaceGenNpcData& arNpcData, bool abForceNoSkinning)
		{
			using func_t = decltype(&BSFaceGenManager::CreateFaceGenHead);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::CreateFaceGenHead };
			return func(apOutNodeBiped, apOutNodeSkinned, arNpcData, abForceNoSkinning);
		}

		static void AttachHairToHead(BSFaceGenNiNode*& apOutNodeBiped, BSFaceGenNiNode*& apOutNodeSkinned, FaceGenNpcData& aNpcData, bool abForceNoSkinning)
		{
			using func_t = decltype(&BSFaceGenManager::AttachHairToHead);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::AttachHairToHead };
			func(apOutNodeBiped, apOutNodeSkinned, aNpcData, abForceNoSkinning);
		}

		static void AttachEyesToHead(BSFaceGenNiNode*& apOutNodeBiped, BSFaceGenNiNode*& apOutNodeSkinned, FaceGenNpcData& aNpcData, bool abForceNoSkinning)
		{
			using func_t = decltype(&BSFaceGenManager::AttachEyesToHead);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::AttachEyesToHead };
			func(apOutNodeBiped, apOutNodeSkinned, aNpcData, abForceNoSkinning);
		}

		static void PrepareHeadForShaders(BSFaceGenNiNode* apNode, FaceGenNpcData& arNpcData)
		{
			using func_t = decltype(&BSFaceGenManager::PrepareHeadForShaders);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::PrepareHeadForShaders };
			func(apNode, arNpcData);
		}

		static void ClearBodyTexturesFromPalette(TESNPC* apNPC)
		{
			using func_t = decltype(&BSFaceGenManager::ClearBodyTexturesFromPalette);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::ClearBodyTexturesFromPalette };
			func(apNPC);
		}

		static void QueueHeadParts(TESNPC* apNPC, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&BSFaceGenManager::QueueHeadParts);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::QueueHeadParts };
			func(apNPC, aePriority, apParent);
		}

		static char* GetHairName(char* apHairName, HAIR_PART aeHairPart)
		{
			using func_t = decltype(&BSFaceGenManager::GetHairName);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetHairName };
			return func(apHairName, aeHairPart);
		}

		static float GetLodDistance()
		{
			using func_t = decltype(&BSFaceGenManager::GetLodDistance);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::GetLodDistance };
			return func();
		}

	protected:
		BSFaceGenManager* ctor()
		{
			using func_t = BSFaceGenManager*(__thiscall*)(BSFaceGenManager*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::ctor };
			return func(this);
		}

		static void PrecacheFaceGeometry(NiAVObject* apObj, std::uint32_t aiShaderIndex, std::uint32_t aiCompressFlags)
		{
			using func_t = decltype(&BSFaceGenManager::PrecacheFaceGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenManager::PrecacheFaceGeometry };
			func(apObj, aiShaderIndex, aiCompressFlags);
		}

	public:
		// members
		FanFgFileDataS             FgData;                // 00
		FanLinCtlGrpS              LinCtrls;              // B8
		FanGenCtlsGrpC             GenCtrls;              // 118
		std::uint32_t              iBasisSize[2][2];      // 1184?
		BSFaceGenModelMap*         pModelMap;             // 1194
		NiPointer<NiAlphaProperty> spHairTeethAlphaProp;  // 1198
		NiPointer<NiTexture>       spDefaultBaseMod;      // 119C
		NiPointer<NiTexture>       spDefaultDetailMod;    // 11A0
	};
}
