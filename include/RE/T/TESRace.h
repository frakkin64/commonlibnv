#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSTextureModel.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/F/FR2MatrixVTC.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/R/RACE_DATA.h"
#include "RE/R/RACE_HEAD_PART.h"
#include "RE/S/SEX.h"
#include "RE/T/TESAttributes.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESReactionForm.h"
#include "RE/T/TESSpellList.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class BGSVoiceType;
	class BSFaceGenNiNode;
	class FaceGenNpcData;
	class FaceGenUndo;
	class NiTexture;
	class TESEyes;
	class TESFile;
	class TESHair;
	class TESNPC;

	class TESRace :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESDescription,  // 24
		public TESSpellList,  // 2C
		public TESReactionForm  // 40
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRace };
		static constexpr auto VTABLE{ VTABLE::TESRace };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kRACE_ID };

		// override (TESForm)
		virtual ~TESRace() = default;                    // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		bool GetPlayable() const
		{
			using func_t = decltype(&TESRace::GetPlayable);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetPlayable };
			return func(this);
		}

		BGSVoiceType* GetDefaultVoiceType(SEX aeSex)
		{
			using func_t = decltype(&TESRace::GetDefaultVoiceType);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetDefaultVoiceType };
			return func(this, aeSex);
		}

		static char const* GetHeadPartNodeName(RACE_HEAD_PART aePart)
		{
			using func_t = decltype(&TESRace::GetHeadPartNodeName);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetHeadPartNodeName };
			return func(aePart);
		}

		std::uint16_t GetFaceCoordNum() const
		{
			using func_t = decltype(&TESRace::GetFaceCoordNum);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetFaceCoordNum };
			return func(this);
		}

		TESRace* ctor()
		{
			using func_t = TESRace*(__thiscall*)(TESRace*);
			static REL::Relocation<func_t> func{ Offsets::TESRace::ctor };
			return func(this);
		}

		char GetDefaultHairColor(SEX aeSex)
		{
			using func_t = decltype(&TESRace::GetDefaultHairColor);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetDefaultHairColor };
			return func(this, aeSex);
		}

		TESHair* GetDefaultHair(SEX aeSex)
		{
			using func_t = decltype(&TESRace::GetDefaultHair);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetDefaultHair };
			return func(this, aeSex);
		}

		TESModel* GetHeadPartModel(SEX aeSex, RACE_HEAD_PART aePart)
		{
			using func_t = decltype(&TESRace::GetHeadPartModel);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetHeadPartModel };
			return func(this, aeSex, aePart);
		}

		TESTexture* GetHeadPartTexture(SEX aeSex, RACE_HEAD_PART aePart)
		{
			using func_t = decltype(&TESRace::GetHeadPartTexture);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetHeadPartTexture };
			return func(this, aeSex, aePart);
		}

		bool CreateHead(BSFaceGenNiNode*& apOutNodeBiped, BSFaceGenNiNode*& apOutNodeSkinned, TESNPC* apNPC, bool abPrepareObjects, bool abForceNoSkinning, SEX aeSex)
		{
			using func_t = decltype(&TESRace::CreateHead);
			static REL::Relocation<func_t> func{ Offsets::TESRace::CreateHead };
			return func(this, apOutNodeBiped, apOutNodeSkinned, apNPC, abPrepareObjects, abForceNoSkinning, aeSex);
		}

		void KillEGTData()
		{
			using func_t = decltype(&TESRace::KillEGTData);
			static REL::Relocation<func_t> func{ Offsets::TESRace::KillEGTData };
			func(this);
		}

		void GetFaceGenData(TESNPC* apNPC, FaceGenNpcData& arNpcData, SEX aeSex, bool abNoModTextures)
		{
			using func_t = decltype(&TESRace::GetFaceGenData);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetFaceGenData };
			func(this, apNPC, arNpcData, aeSex, abNoModTextures);
		}

		bool GetBodyTextureFileName(TESNPC* apNPC, BIPED_OBJECT aePart, char* apFileName)
		{
			using func_t = decltype(&TESRace::GetBodyTextureFileName);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetBodyTextureFileName };
			return func(this, apNPC, aePart, apFileName);
		}

		void GetBodyModTextureName(TESNPC* apNPC, char* apName)
		{
			using func_t = decltype(&TESRace::GetBodyModTextureName);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetBodyModTextureName };
			func(this, apNPC, apName);
		}

		bool GetBodyTexture(NiPointer<NiTexture>& aspOutBaseTexture, NiPointer<NiTexture>& aspOutModTexture, TESNPC* apNPC, BIPED_OBJECT aePart, bool abForceCreate)
		{
			using func_t = decltype(&TESRace::GetBodyTexture);
			static REL::Relocation<func_t> func{ Offsets::TESRace::GetBodyTexture };
			return func(this, aspOutBaseTexture, aspOutModTexture, apNPC, aePart, abForceCreate);
		}

	public:
		// members
		RACE_DATA                       Data;                       // 50
		TESAttributes                   MaleAttributes;             // 74
		TESAttributes                   FemaleAttributes;           // 80
		BSSimpleList<TESHair*>          HairList;                   // 8C
		TESHair*                        pDefaultHair[2];            // 94
		char                            cDefaultHairColor[2];       // 9C
		std::uint16_t                   pad9E;                      // 9E
		float                           fClampFaceGeoValue;         // A0
		float                           fClampFaceGeoValue2;        // A4
		BSSimpleList<TESEyes*>          EyeList;                    // A8
		TESModel                        ppHeadModelFiles[2][8];     // B0
		TESTexture                      ppHeadTextureFiles[2][8];   // 230
		TESTexture                      ppBodyTextureFiles[2][3];   // 2F0
		TESModel                        ppBodyModelFiles[2][3];     // 338
		BGSTextureModel                 pBodyTextureModels[2];      // 3C8
		FR2MatrixVTC<float>             MeanFaceCoordFemale[2][2];  // 3F8
		FR2MatrixVTC<float>             MeanFaceCoordMale[2][2];    // 478
		std::uint16_t                   sFaceCoordNum;              // 4F8
		std::uint16_t                   pad4FA;                     // 4FA
		BGSVoiceType*                   pDefaultVoiceType[2];       // 4FC
		TESRace*                        pOldRace;                   // 504
		TESRace*                        pYoungRace;                 // 508
		BSStringT<char>                 cFormEditorID;              // 50C
		NiTPrimitiveArray<FaceGenUndo*> FaceGenUndoStates;          // 514
	};
	static_assert(sizeof(TESRace) == 0x524);
}
