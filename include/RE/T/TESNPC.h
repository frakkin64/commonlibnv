#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSImpactDataSet_IMPACT_MATERIAL_TYPE.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/F/FR2MatrixVTC.h"
#include "RE/N/NPC_DATA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/R/RACE_HEAD_PART.h"
#include "RE/S/SEX.h"
#include "RE/T/TESActorBase.h"
#include "RE/T/TESRaceForm.h"

namespace RE
{
	class Actor;
	class BGSBodyPartData;
	class BGSHeadPart;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BSFaceGenNiNode;
	class BipedAnim;
	class Character;
	class FaceGenUndo;
	class NiAVObject;
	class NiNode;
	class NiTexture;
	class TESBoundObject;
	class TESClass;
	class TESCombatStyle;
	class TESEyes;
	class TESFile;
	class TESForm;
	class TESHair;
	class TESObjectREFR;
	class TESRace;

	class TESNPC :
		public TESActorBase,  // 00
		public TESRaceForm  // 10C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESNPC };
		static constexpr auto VTABLE{ VTABLE::TESNPC };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kNPC__ID };

		// override (TESActorBase)
		virtual ~TESNPC() = default;                                                                                                                                     // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                               // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                           // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                             // 18
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                               // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                                                                             // 1D
		virtual bool FindInFileFast(TESFile* apFile) override;                                                                                                           // 1F
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual void UnClone3D(TESObjectREFR* apRequester) override;                                                                                                     // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;                                                                                              // 5E
		virtual void SetBodyPartData(BGSBodyPartData* apData) override;                                                                                                  // 61
		virtual TESCombatStyle* GetCombatStyle() override;                                                                                                               // 62
		virtual void SetActorValue(ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                             // 65

		std::uint32_t GetHairColor()
		{
			using func_t = decltype(&TESNPC::GetHairColor);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetHairColor };
			return func(this);
		}

		TESRace* GetRace() const
		{
			using func_t = decltype(&TESNPC::GetRace);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetRace };
			return func(this);
		}

		void ClearHead()
		{
			using func_t = decltype(&TESNPC::ClearHead);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::ClearHead };
			func(this);
		}

		TESNPC* ctor()
		{
			using func_t = TESNPC*(__thiscall*)(TESNPC*);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::ctor };
			return func(this);
		}

		void RandomizeFaceCoord(bool abLockAge, bool abLockComplexion, bool abLockHairlength)
		{
			using func_t = decltype(&TESNPC::RandomizeFaceCoord);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::RandomizeFaceCoord };
			func(this, abLockAge, abLockComplexion, abLockHairlength);
		}

		void SetClass(TESClass* apClass)
		{
			using func_t = decltype(&TESNPC::SetClass);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::SetClass };
			func(this, apClass);
		}

		float GetHairLength()
		{
			using func_t = decltype(&TESNPC::GetHairLength);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetHairLength };
			return func(this);
		}

		BSSimpleList<BGSHeadPart*>* GetHeadPartList()
		{
			using func_t = decltype(&TESNPC::GetHeadPartList);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetHeadPartList };
			return func(this);
		}

		void SetHair(TESHair* apHair)
		{
			using func_t = decltype(&TESNPC::SetHair);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::SetHair };
			func(this, apHair);
		}

		void SetEyeColor(TESEyes* apEyes)
		{
			using func_t = decltype(&TESNPC::SetEyeColor);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::SetEyeColor };
			func(this, apEyes);
		}

		static void FillCharGenPresetList(TESRace* apRace, SEX aeSex, BSSimpleArray<TESNPC*, 1024>* apOutList)
		{
			using func_t = decltype(&TESNPC::FillCharGenPresetList);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::FillCharGenPresetList };
			func(apRace, aeSex, apOutList);
		}

		void CopyHeadData(TESNPC* apNPC)
		{
			using func_t = decltype(&TESNPC::CopyHeadData);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::CopyHeadData };
			func(this, apNPC);
		}

		void GetFaceCoord(void* aOutCoord)
		{
			using func_t = decltype(&TESNPC::GetFaceCoord);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetFaceCoord };
			func(this, aOutCoord);
		}

		TESHair* GetHair() const
		{
			using func_t = decltype(&TESNPC::GetHair);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetHair };
			return func(this);
		}

		void InitValues(bool abPC)
		{
			using func_t = decltype(&TESNPC::InitValues);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitValues };
			func(this, abPC);
		}

		std::uint32_t GetFormHealthLeveled(bool abAddBase)
		{
			using func_t = decltype(&TESNPC::GetFormHealthLeveled);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetFormHealthLeveled };
			return func(this, abAddBase);
		}

		std::uint32_t GetFormFatigueLeveled(bool abAddBase)
		{
			using func_t = decltype(&TESNPC::GetFormFatigueLeveled);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetFormFatigueLeveled };
			return func(this, abAddBase);
		}

		float GetRaceHeight()
		{
			using func_t = decltype(&TESNPC::GetRaceHeight);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetRaceHeight };
			return func(this);
		}

		float GetWeight()
		{
			using func_t = decltype(&TESNPC::GetWeight);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetWeight };
			return func(this);
		}

		TESNPC* GetFaceNPC()
		{
			using func_t = decltype(&TESNPC::GetFaceNPC);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetFaceNPC };
			return func(this);
		}

		void GetHeadPartModTexture(RACE_HEAD_PART aePart, NiPointer<NiTexture>& aspTexture)
		{
			using func_t = decltype(&TESNPC::GetHeadPartModTexture);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetHeadPartModTexture };
			func(this, aePart, aspTexture);
		}

		void InitDefaultWorn(TESObjectREFR* apRef, bool abArmor, bool abWeapon, bool abOnlyifClothes, bool abAllowChanges)
		{
			using func_t = decltype(&TESNPC::InitDefaultWorn);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitDefaultWorn };
			func(this, apRef, abArmor, abWeapon, abOnlyifClothes, abAllowChanges);
		}

		BipedAnim* CreateBipedAnim(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESNPC::CreateBipedAnim);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::CreateBipedAnim };
			return func(this, apRef);
		}

		void FixNPCNormals(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESNPC::FixNPCNormals);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::FixNPCNormals };
			func(this, apRef);
		}

		void ReplaceRefModel(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESNPC::ReplaceRefModel);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::ReplaceRefModel };
			func(this, apRef);
		}

		void LoadObjectArray(TESObjectREFR* apRef, BipedAnim* apBipedAnim, BSSimpleArray<TESBoundObject*, 1024>* apObjectArray)
		{
			using func_t = decltype(&TESNPC::LoadObjectArray);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::LoadObjectArray };
			func(this, apRef, apBipedAnim, apObjectArray);
		}

		void BuildObjectArray(TESObjectREFR* apRef, BipedAnim* apBipedAnim, BSSimpleArray<TESBoundObject*, 1024>* apObjectArray)
		{
			using func_t = decltype(&TESNPC::BuildObjectArray);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::BuildObjectArray };
			func(this, apRef, apBipedAnim, apObjectArray);
		}

		void InitWorn(TESObjectREFR* apRef, BipedAnim* apBipedAnim)
		{
			using func_t = decltype(&TESNPC::InitWorn);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitWorn };
			func(this, apRef, apBipedAnim);
		}

		bool InitWornObject(TESObjectREFR* apRef, BipedAnim* apBipedAnim, TESBoundObject* apObject)
		{
			using func_t = decltype(&TESNPC::InitWornObject);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitWornObject };
			return func(this, apRef, apBipedAnim, apObject);
		}

		void FixDisplayedHeadParts(TESObjectREFR* apRef, NiNode* apNode)
		{
			using func_t = decltype(&TESNPC::FixDisplayedHeadParts);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::FixDisplayedHeadParts };
			func(this, apRef, apNode);
		}

		void InitParts(TESObjectREFR* apRef, BipedAnim* apBipedAnim, bool abForceInitDefaultWorn)
		{
			using func_t = decltype(&TESNPC::InitParts);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitParts };
			func(this, apRef, apBipedAnim, abForceInitDefaultWorn);
		}

		void LinearFaceGenHeadLoad(TESObjectREFR* apRef, BipedAnim* apBipedAnim)
		{
			using func_t = decltype(&TESNPC::LinearFaceGenHeadLoad);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::LinearFaceGenHeadLoad };
			func(this, apRef, apBipedAnim);
		}

		void InitHead(BSFaceGenNiNode*& apOutNodeBiped, BSFaceGenNiNode*& apOutNodeSkinned)
		{
			using func_t = decltype(&TESNPC::InitHead);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitHead };
			func(this, apOutNodeBiped, apOutNodeSkinned);
		}

		void AttachHead(TESObjectREFR* apRef, BipedAnim* apBipedAnim, BSFaceGenNiNode* apOutNodeBiped, BSFaceGenNiNode* apOutNodeSkinned)
		{
			using func_t = decltype(&TESNPC::AttachHead);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::AttachHead };
			func(this, apRef, apBipedAnim, apOutNodeBiped, apOutNodeSkinned);
		}

		void SaveFaceGen(Character* apCharacter)
		{
			using func_t = decltype(&TESNPC::SaveFaceGen);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::SaveFaceGen };
			func(this, apCharacter);
		}

		void LoadFaceGen(Character* apCharacter)
		{
			using func_t = decltype(&TESNPC::LoadFaceGen);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::LoadFaceGen };
			func(this, apCharacter);
		}

		void InitLoadFaceGen(Character* apCharacter)
		{
			using func_t = decltype(&TESNPC::InitLoadFaceGen);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::InitLoadFaceGen };
			func(this, apCharacter);
		}

		void SwapEyes(TESEyes* apSwapToEyes)
		{
			using func_t = decltype(&TESNPC::SwapEyes);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::SwapEyes };
			func(this, apSwapToEyes);
		}

		BSSimpleList<char const*>* BuildDefaultModelList(bool abArmor, bool abWeapon)
		{
			using func_t = decltype(&TESNPC::BuildDefaultModelList);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::BuildDefaultModelList };
			return func(this, abArmor, abWeapon);
		}

		void SwitchRace(TESRace* apRace, Actor* apActor)
		{
			using func_t = decltype(&TESNPC::SwitchRace);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::SwitchRace };
			func(this, apRace, apActor);
		}

		float GetHeight()
		{
			using func_t = decltype(&TESNPC::GetHeight);
			static REL::Relocation<func_t> func{ Offsets::TESNPC::GetHeight };
			return func(this);
		}

	public:
		// members
		NPC_DATA                              data;                                // 114
		TESClass*                             pCl;                                 // 130
		FR2MatrixVTC<float>                   RaceFaceOffsetCoord[2][2];           // 134
		FR2MatrixVTC<float>                   (*pAlternateFaceOffsetCoord)[2][2];  // 1B4
		TESHair*                              pHair;                               // 1B8
		float                                 fHairLength;                         // 1BC
		TESEyes*                              pEyeColor;                           // 1C0
		NiPointer<BSFaceGenNiNode>            spHeadBiped;                         // 1C4
		NiPointer<BSFaceGenNiNode>            spHeadSkinned;                       // 1C8
		NiPointer<NiTexture>                  spBodyModTexture;                    // 1CC
		std::uint16_t                         sLastRaceFaceNum;                    // 1D0
		std::uint16_t                         pad1D2;                              // 1D2
		TESCombatStyle*                       pCombatStyle;                        // 1D4
		std::uint32_t                         iHairColor;                          // 1D8
		BSSimpleList<BGSHeadPart*>            listHeadParts;                       // 1DC
		BGSImpactDataSet_IMPACT_MATERIAL_TYPE eBloodImpactMaterial;                // 1E4
		std::uint32_t                         iFileOffset;                         // 1E8
		TESRace*                              pOriginalRace;                       // 1EC
		TESNPC*                               pFaceNPC;                            // 1F0
		float                                 fHeight;                             // 1F4
		float                                 fWeight;                             // 1F8
		NiTPrimitiveArray<FaceGenUndo*>       FaceGenUndoStates;                   // 1FC
	};
	static_assert(sizeof(TESNPC) == 0x20C);
}
