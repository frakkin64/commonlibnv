#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/T/TESAttackDamageForm.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESTexture.h"
#include "RE/W/WaterShaderData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSPlaceableWater;
	class BGSSaveFormBuffer;
	class BSRenderedTexture;
	class NiTexture;
	class SpellItem;
	class TESBoundObject;
	class TESFile;
	class TESObjectREFR;
	class TESSound;

	class TESWaterForm :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESAttackDamageForm  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::TESWaterForm };
		static constexpr auto VTABLE{ VTABLE::TESWaterForm };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kWATR_ID };

		// override (TESForm)
		virtual ~TESWaterForm() = default;                                                                                                                               // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                               // 1C
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		TESWaterForm* ctor()
		{
			using func_t = TESWaterForm*(__thiscall*)(TESWaterForm*);
			static REL::Relocation<func_t> func{ Offsets::TESWaterForm::ctor };
			return func(this);
		}

		WaterShaderData* GetData()
		{
			using func_t = decltype(&TESWaterForm::GetData);
			static REL::Relocation<func_t> func{ Offsets::TESWaterForm::GetData };
			return func(this);
		}

		char const* GetMaterialName() const
		{
			using func_t = decltype(&TESWaterForm::GetMaterialName);
			static REL::Relocation<func_t> func{ Offsets::TESWaterForm::GetMaterialName };
			return func(this);
		}

		bool GetDangerous()
		{
			using func_t = decltype(&TESWaterForm::GetDangerous);
			static REL::Relocation<func_t> func{ Offsets::TESWaterForm::GetDangerous };
			return func(this);
		}

		BGSPlaceableWater* GetPlaceableAutoWater()
		{
			using func_t = decltype(&TESWaterForm::GetPlaceableAutoWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterForm::GetPlaceableAutoWater };
			return func(this);
		}

		BGSPlaceableWater* GetPlaceableLODWater()
		{
			using func_t = decltype(&TESWaterForm::GetPlaceableLODWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterForm::GetPlaceableLODWater };
			return func(this);
		}

	public:
		// members
		bool                         bNeedUpdate;              // 2C
		std::uint8_t                 pad2D[0x3];               // 2D
		NiPointer<BSRenderedTexture> spNoiseNormalMap;         // 30
		NiColorA                     fTexScroll0;              // 34
		NiColorA                     fTexScroll1;              // 44
		NiColorA                     fTexScroll2;              // 54
		TESTexture                   NoiseTexture;             // 64
		std::uint8_t                 cAlpha;                   // 70
		std::uint8_t                 cFlags;                   // 71
		std::uint16_t                pad72;                    // 72
		BSStringT<char>              cMaterialID;              // 74
		TESSound*                    pWaterSound;              // 7C
		TESWaterForm*                pRemappedWaterForm;       // 80
		WaterShaderData              Data;                     // 84
		TESWaterForm*                pWaterWeatherControl[3];  // 148
		std::int32_t                 iCurrentTextureSelect01;  // 154
		std::int32_t                 iCurrentTextureSelect02;  // 158
		std::uint32_t                fFrequencyX;              // 15C
		std::uint32_t                fFrequencyY;              // 160
		std::int32_t                 iOctaves;                 // 164
		float                        fAmplitude;               // 168
		float                        fLacunarity;              // 16C
		float                        fBias;                    // 170
		float                        fGain;                    // 174
		SpellItem*                   pSpellItem;               // 178
		NiPointer<NiTexture>         spNoiseTexture;           // 17C
		BGSPlaceableWater*           pPlaceableAutoWater;      // 180
		BGSPlaceableWater*           pPlaceableLODWater;       // 184
		std::int32_t                 iRadiationDamage;         // 188
		std::int32_t                 iHealthRestoration;       // 18C
		bool                         bResetNoiseTexture;       // 190
		std::uint8_t                 pad191[0x3];              // 191
	};
	static_assert(sizeof(TESWaterForm) == 0x194);
}
