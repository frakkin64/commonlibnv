#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SkyTextureManager.h"
#include "RE/T/TESWeather_ColorTime.h"
#include "RE/T/TESWeather_ColorType.h"

namespace RE
{
	class Atmosphere;
	class BGSLoadGameBuffer;
	class BSFogProperty;
	class BSMultiBoundNode;
	class Clouds;
	class ImageSpaceModifierInstanceForm;
	class Moon;
	class NiNode;
	class Precipitation;
	class SkySound;
	class Stars;
	class Sun;
	class TESClimate;
	class TESWeather;

	class __declspec(novtable) Sky
	{
	public:
		static constexpr auto RTTI{ RTTI::Sky };
		static constexpr auto VTABLE{ VTABLE::Sky };

		class COLOR_BLEND;

		enum class SKY_MODE : std::int32_t
		{
			kSM_NONE = 0x0,
			kSM_INTERIOR = 0x1,
			kSM_FAKEEXTERIOR = 0x2,
			kSM_FULL = 0x3,
			kSM_COUNT = 0x4,
		};

		class COLOR_BLEND
		{
		public:
			// members
			std::uint32_t uiRGBVal[4];  // 00
			float         fBlend[4];    // 10
		};

		// add
		virtual ~Sky() = default;  // 00

		float GetWindSpeed() const
		{
			using func_t = decltype(&Sky::GetWindSpeed);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetWindSpeed };
			return func(this);
		}

		Sky::SKY_MODE GetMode() const
		{
			using func_t = decltype(&Sky::GetMode);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetMode };
			return func(this);
		}

		float GetSunriseBegin()
		{
			using func_t = decltype(&Sky::GetSunriseBegin);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetSunriseBegin };
			return func(this);
		}

		float GetSunriseEnd()
		{
			using func_t = decltype(&Sky::GetSunriseEnd);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetSunriseEnd };
			return func(this);
		}

		float GetSunsetBegin()
		{
			using func_t = decltype(&Sky::GetSunsetBegin);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetSunsetBegin };
			return func(this);
		}

		float GetSunsetEnd()
		{
			using func_t = decltype(&Sky::GetSunsetEnd);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetSunsetEnd };
			return func(this);
		}

		bool IsRaining() const
		{
			using func_t = decltype(&Sky::IsRaining);
			static REL::Relocation<func_t> func{ Offsets::Sky::IsRaining };
			return func(this);
		}

		bool IsSnowing() const
		{
			using func_t = decltype(&Sky::IsSnowing);
			static REL::Relocation<func_t> func{ Offsets::Sky::IsSnowing };
			return func(this);
		}

		bool GetWeatherUpdateFlag() const
		{
			using func_t = decltype(&Sky::GetWeatherUpdateFlag);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetWeatherUpdateFlag };
			return func(this);
		}

		void SetMode(Sky::SKY_MODE aeNewMode)
		{
			using func_t = decltype(&Sky::SetMode);
			static REL::Relocation<func_t> func{ Offsets::Sky::SetMode };
			func(this, aeNewMode);
		}

		void Initialize(BSMultiBoundNode* apRoot, BSFogProperty* apFog)
		{
			using func_t = decltype(&Sky::Initialize);
			static REL::Relocation<func_t> func{ Offsets::Sky::Initialize };
			func(this, apRoot, apFog);
		}

		void Update(float afSecondsPassed)
		{
			using func_t = decltype(&Sky::Update);
			static REL::Relocation<func_t> func{ Offsets::Sky::Update };
			func(this, afSecondsPassed);
		}

		void UpdateInterior(float afSecondsPassed)
		{
			using func_t = decltype(&Sky::UpdateInterior);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateInterior };
			func(this, afSecondsPassed);
		}

		void UpdateColors()
		{
			using func_t = decltype(&Sky::UpdateColors);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateColors };
			func(this);
		}

		void FillColorBlend(Sky::COLOR_BLEND& aColorBlend, TESWeather* apCurrentWeather, float a_arg3, TESWeather_ColorTime& a_arg4, TESWeather_ColorTime& aeTime1)
		{
			using func_t = decltype(&Sky::FillColorBlend);
			static REL::Relocation<func_t> func{ Offsets::Sky::FillColorBlend };
			func(this, aColorBlend, apCurrentWeather, a_arg3, a_arg4, aeTime1);
		}

		float GetBeginSunriseColors()
		{
			using func_t = decltype(&Sky::GetBeginSunriseColors);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetBeginSunriseColors };
			return func(this);
		}

		float GetEndSunsetColors()
		{
			using func_t = decltype(&Sky::GetEndSunsetColors);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetEndSunsetColors };
			return func(this);
		}

		void FillColorBlendColors(Sky::COLOR_BLEND& aColorBlend, TESWeather* apCurrentWeather, TESWeather* apLastWeather, TESWeather_ColorType aeColorType, TESWeather_ColorTime& aeTime1, TESWeather_ColorTime& aeTime2)
		{
			using func_t = decltype(&Sky::FillColorBlendColors);
			static REL::Relocation<func_t> func{ Offsets::Sky::FillColorBlendColors };
			func(this, aColorBlend, apCurrentWeather, apLastWeather, aeColorType, aeTime1, aeTime2);
		}

		void UpdateFog()
		{
			using func_t = decltype(&Sky::UpdateFog);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateFog };
			func(this);
		}

		void UpdateWind()
		{
			using func_t = decltype(&Sky::UpdateWind);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateWind };
			func(this);
		}

		void SetColor(NiColor& aColor, Sky::COLOR_BLEND* apColorBlend, float afAddFlash) const
		{
			using func_t = decltype(&Sky::SetColor);
			static REL::Relocation<func_t> func{ Offsets::Sky::SetColor };
			func(this, aColor, apColorBlend, afAddFlash);
		}

		void SetCurrentClimate(TESClimate* apClimate, bool abForce)
		{
			using func_t = decltype(&Sky::SetCurrentClimate);
			static REL::Relocation<func_t> func{ Offsets::Sky::SetCurrentClimate };
			func(this, apClimate, abForce);
		}

		void HandleClimateChange()
		{
			using func_t = decltype(&Sky::HandleClimateChange);
			static REL::Relocation<func_t> func{ Offsets::Sky::HandleClimateChange };
			func(this);
		}

		void ResetWeather()
		{
			using func_t = decltype(&Sky::ResetWeather);
			static REL::Relocation<func_t> func{ Offsets::Sky::ResetWeather };
			func(this);
		}

		void ForceWeather(TESWeather* apWeather, bool abOverride)
		{
			using func_t = decltype(&Sky::ForceWeather);
			static REL::Relocation<func_t> func{ Offsets::Sky::ForceWeather };
			func(this, apWeather, abOverride);
		}

		void UpdateWeather()
		{
			using func_t = decltype(&Sky::UpdateWeather);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateWeather };
			func(this);
		}

		void UpdateSound()
		{
			using func_t = decltype(&Sky::UpdateSound);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateSound };
			func(this);
		}

		void ActivateWeatherSounds(TESWeather const* apWeather)
		{
			using func_t = decltype(&Sky::ActivateWeatherSounds);
			static REL::Relocation<func_t> func{ Offsets::Sky::ActivateWeatherSounds };
			func(this, apWeather);
		}

		void UnloadAllTextures()
		{
			using func_t = decltype(&Sky::UnloadAllTextures);
			static REL::Relocation<func_t> func{ Offsets::Sky::UnloadAllTextures };
			func(this);
		}

		void ReloadAllTextures()
		{
			using func_t = decltype(&Sky::ReloadAllTextures);
			static REL::Relocation<func_t> func{ Offsets::Sky::ReloadAllTextures };
			func(this);
		}

		void SetAcceleration(bool abOn)
		{
			using func_t = decltype(&Sky::SetAcceleration);
			static REL::Relocation<func_t> func{ Offsets::Sky::SetAcceleration };
			func(this, abOn);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&Sky::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = decltype(&Sky::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::Sky::SaveGame };
			func(this);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Sky::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::Sky::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void UpdateHDRValues()
		{
			using func_t = decltype(&Sky::UpdateHDRValues);
			static REL::Relocation<func_t> func{ Offsets::Sky::UpdateHDRValues };
			func(this);
		}

		float GetCurrentWeatherPct() const
		{
			using func_t = decltype(&Sky::GetCurrentWeatherPct);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetCurrentWeatherPct };
			return func(this);
		}

		float GetCurrentGameHour() const
		{
			using func_t = decltype(&Sky::GetCurrentGameHour);
			static REL::Relocation<func_t> func{ Offsets::Sky::GetCurrentGameHour };
			return func(this);
		}

	public:
		// members
		NiPointer<BSMultiBoundNode>     spRoot;                         // 04
		NiPointer<NiNode>               spMoonsRoot;                    // 08
		TESClimate*                     pCurrentClimate;                // 0C
		TESWeather*                     pCurrentWeather;                // 10
		TESWeather*                     pLastWeather;                   // 14
		TESWeather*                     pDefaultWeather;                // 18
		TESWeather*                     pOverrideWeather;               // 1C
		Atmosphere*                     pAtmosphere;                    // 20
		Stars*                          pStars;                         // 24
		Sun*                            pSun;                           // 28
		Clouds*                         pClouds;                        // 2C
		Moon*                           pMasser;                        // 30
		Moon*                           pSecunda;                       // 34
		Precipitation*                  pPrecip;                        // 38
		NiColor                         SkyColor[10];                   // 3C
		NiColor                         WaterFogColor;                  // B4
		NiColor                         SunSpecularColor;               // C0
		float                           fWindSpeed;                     // CC
		float                           fWindAngle;                     // D0
		float                           fFogDistances[4];               // D4
		float                           fFogHeight;                     // E4
		float                           fFogPower;                      // E8
		float                           fCurrentGameHour;               // EC
		float                           fLastWeatherUpdate;             // F0
		float                           fCurrentWeatherPct;             // F4
		Sky::SKY_MODE                   eMode;                          // F8
		BSSimpleList<SkySound*>*        pSkySoundList;                  // FC
		float                           fFlash;                         // 100
		std::uint32_t                   uiFlashTime;                    // 104
		std::uint32_t                   uiLastMoonPhaseUpdate;          // 108
		float                           fWindowReflectionTimer;         // 10C
		float                           fAccelBeginPct;                 // 110
		SkyTextureManager               textureManager;                 // 114
		std::uint8_t                    pad115[0x3];                    // 115
		std::uint32_t                   uiFlags;                        // 118
		ImageSpaceModifierInstanceForm* pCurrentWeatherImageSpaceMod;   // 11C
		ImageSpaceModifierInstanceForm* pCurrentWeatherImageSpaceMod2;  // 120
		ImageSpaceModifierInstanceForm* pLastWeatherImageSpaceMod;      // 124
		ImageSpaceModifierInstanceForm* pLastWeatherImageSpaceMod2;     // 128
		float                           fHighNoon;                      // 12C
		float                           fMidnightWax;                   // 130?
		float                           fMidnightWane;                  // 134?
	};
}
