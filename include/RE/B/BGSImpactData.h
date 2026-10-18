#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DecalData.h"
#include "RE/S/SOUND_LEVEL.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class BGSTextureSet;
	class TESFile;
	class TESSound;

	class BGSImpactData :
		public TESForm,  // 00
		public TESModel  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSImpactData };
		static constexpr auto VTABLE{ VTABLE::BGSImpactData };

		class IMPACT_DATA_DATA;
		class OLD_IMPACT_DATA_DATA;

		enum class ORIENTATION : std::int32_t
		{
			kORIENT_SURFACE_NORMAL = 0x0,
			kORIENT_PROJ_VECTOR = 0x1,
			kORIENT_PROJ_REFLECT = 0x2,
			kORIENT_COUNT = 0x3,
		};

		class IMPACT_DATA_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&IMPACT_DATA_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::BGSImpactData_IMPACT_DATA_DATA::Endian };
				func(this);
			}

		public:
			// members
			float                      fEffectDuration;   // 00
			BGSImpactData::ORIENTATION eOrient;           // 04
			float                      fAngleThreshold;   // 08
			float                      fPlacementRadius;  // 0C
			SOUND_LEVEL                eSoundLevel;       // 10
			std::uint8_t               cFlags;            // 14
			std::uint8_t               pad15[0x3];        // 15
		};
		static_assert(sizeof(IMPACT_DATA_DATA) == 0x18);

		class OLD_IMPACT_DATA_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&OLD_IMPACT_DATA_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::BGSImpactData_OLD_IMPACT_DATA_DATA::Endian };
				func(this);
			}

		public:
			// members
			float                      fDecalMinWidth;    // 00
			float                      fEffectDuration;   // 04
			float                      fParallaxScale;    // 08
			BGSImpactData::ORIENTATION eOrient;           // 0C
			std::uint8_t               cFlags;            // 10
			std::uint8_t               cParallaxPasses;   // 11
			std::uint16_t              pad12;             // 12
			float                      fDecalMaxWidth;    // 14
			float                      fDepth;            // 18
			float                      fDecalMinHeight;   // 1C
			float                      fDecalMaxHeight;   // 20
			float                      fShininess;        // 24
			float                      fAngleThreshold;   // 28
			float                      fPlacementRadius;  // 2C
			std::uint32_t              iColor;            // 30
			SOUND_LEVEL                eSoundLevel;       // 34
		};
		static_assert(sizeof(OLD_IMPACT_DATA_DATA) == 0x38);

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kIPCT_ID };

		// override (TESForm)
		virtual ~BGSImpactData() = default;              // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		float GetDecalMinWidth()
		{
			using func_t = decltype(&BGSImpactData::GetDecalMinWidth);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetDecalMinWidth };
			return func(this);
		}

		float GetDecalMaxWidth()
		{
			using func_t = decltype(&BGSImpactData::GetDecalMaxWidth);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetDecalMaxWidth };
			return func(this);
		}

		float GetDecalShininess()
		{
			using func_t = decltype(&BGSImpactData::GetDecalShininess);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetDecalShininess };
			return func(this);
		}

		bool IsParallax()
		{
			using func_t = decltype(&BGSImpactData::IsParallax);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::IsParallax };
			return func(this);
		}

		bool GetAlphaBlending()
		{
			using func_t = decltype(&BGSImpactData::GetAlphaBlending);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetAlphaBlending };
			return func(this);
		}

		bool GetAlphaTesting()
		{
			using func_t = decltype(&BGSImpactData::GetAlphaTesting);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetAlphaTesting };
			return func(this);
		}

		float GetDecalParallaxScale()
		{
			using func_t = decltype(&BGSImpactData::GetDecalParallaxScale);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetDecalParallaxScale };
			return func(this);
		}

		std::uint16_t GetDecalParallaxPasses()
		{
			using func_t = decltype(&BGSImpactData::GetDecalParallaxPasses);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetDecalParallaxPasses };
			return func(this);
		}

		std::uint32_t GetDecalColor()
		{
			using func_t = decltype(&BGSImpactData::GetDecalColor);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetDecalColor };
			return func(this);
		}

		BGSImpactData* ctor()
		{
			using func_t = BGSImpactData*(__thiscall*)(BGSImpactData*);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::ctor };
			return func(this);
		}

		bool GetUseTextureSetDecalData()
		{
			using func_t = decltype(&BGSImpactData::GetUseTextureSetDecalData);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetUseTextureSetDecalData };
			return func(this);
		}

		void CopyDecalDataFromTextureSet()
		{
			using func_t = decltype(&BGSImpactData::CopyDecalDataFromTextureSet);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::CopyDecalDataFromTextureSet };
			func(this);
		}

		std::int32_t GetSoundLevelValue()
		{
			using func_t = decltype(&BGSImpactData::GetSoundLevelValue);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactData::GetSoundLevelValue };
			return func(this);
		}

	public:
		// members
		BGSImpactData::IMPACT_DATA_DATA Data;              // 30
		BGSTextureSet*                  pDecalTextureSet;  // 48
		TESSound*                       pSound1;           // 4C
		TESSound*                       pSound2;           // 50
		DecalData                       DData;             // 54
	};
	static_assert(sizeof(BGSImpactData) == 0x78);
}
