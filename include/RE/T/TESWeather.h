#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/I/ImageSpaceParameterData.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESImageSpaceModifiableCountForm.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESTexture1024.h"
#include "RE/T/TESWeather_ColorTime.h"
#include "RE/T/TESWeather_ColorType.h"
#include "RE/T/TESWeather_SoundType.h"

namespace RE
{
	class TESFile;

	class TESWeather :
		public TESForm,  // 00
		public TESImageSpaceModifiableCountForm<6>  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESWeather };
		static constexpr auto VTABLE{ VTABLE::TESWeather };

		using ColorTime = TESWeather_ColorTime;
		using ColorType = TESWeather_ColorType;
		using SoundType = TESWeather_SoundType;

		class WeatherSound;
		class WeatherSoundList;

		enum class WeatherData : std::int32_t
		{
			kWD_WIND_SPEED = 0x0,
			kWD_CLOUD_SPEED = 0x1,
			kWD_CLOUD_SPEED_UNUSED = 0x2,
			kWD_TRANS_DELTA = 0x3,
			kWD_SUN_GLARE = 0x4,
			kWD_SUN_DAMAGE = 0x5,
			kWD_DIVIDER1 = 0x6,
			kWD_BEGIN_PRECIP = 0x6,
			kWD_END_PRECIP = 0x7,
			kWD_BEGIN_THUNDER = 0x8,
			kWD_END_THUNDER = 0x9,
			kWD_THUNDER_FREQ = 0xA,
			kWD_DIVIDER2 = 0xB,
			kWD_FLAGS = 0xB,
			kWD_LIGHTNING_R = 0xC,
			kWD_LIGHTNING_G = 0xD,
			kWD_LIGHTNING_B = 0xE,
			kWD_DIVIDER3 = 0xF,
			kWD_COUNT = 0xF,
		};

		class WeatherSound
		{
		public:
			// members
			std::uint32_t        uiSoundFormID;  // 00?
			TESWeather_SoundType eType;          // 04?
		};

		class WeatherSoundList :
			public BSSimpleList<TESWeather::WeatherSound*>  // 00
		{
		public:
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kWTHR_ID };

		// override (TESForm)
		virtual ~TESWeather() = default;                 // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		float GetWeatherData(TESWeather::WeatherData aeType, float a_arg2, float a_arg3) const
		{
			using func_t = decltype(&TESWeather::GetWeatherData);
			static REL::Relocation<func_t> func{ Offsets::TESWeather::GetWeatherData };
			return func(this, aeType, a_arg2, a_arg3);
		}

		TESWeather* ctor()
		{
			using func_t = TESWeather*(__thiscall*)(TESWeather*);
			static REL::Relocation<func_t> func{ Offsets::TESWeather::ctor };
			return func(this);
		}

		void MakeDefault()
		{
			using func_t = decltype(&TESWeather::MakeDefault);
			static REL::Relocation<func_t> func{ Offsets::TESWeather::MakeDefault };
			func(this);
		}

	public:
		// members
		TESTexture1024               cloudTexture[4];              // 34
		std::uint8_t                 ucCloudLayerSpeed[4];         // 64
		std::uint32_t                uiCloudColorData[4][6];       // 68
		TESModel                     precipNIF;                    // C8
		std::uint8_t                 ucWeatherData[15];            // E0
		std::uint8_t                 padEF;                        // EF
		float                        fFogData[6];                  // F0
		std::uint32_t                uiColorData[10][6];           // 108
		TESWeather::WeatherSoundList soundList;                    // 1F8
		float                        fHDRData[14];                 // 200
		ImageSpaceParameterData      pImageSpaceParameterMods[2];  // 238
		std::int32_t                 iNumCloudLayers;              // 368
	};
	static_assert(sizeof(TESWeather) == 0x36C);
}
