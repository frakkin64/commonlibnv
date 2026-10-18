#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESClimate_TransTime.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESTexture.h"
#include "RE/T/TESWeatherList.h"

namespace RE
{
	class TESFile;

	class TESClimate :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESClimate };
		static constexpr auto VTABLE{ VTABLE::TESClimate };

		using TransTime = TESClimate_TransTime;

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCLMT_ID };

		// override (TESForm)
		virtual ~TESClimate() = default;                 // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESClimate* ctor()
		{
			using func_t = TESClimate*(__thiscall*)(TESClimate*);
			static REL::Relocation<func_t> func{ Offsets::TESClimate::ctor };
			return func(this);
		}

		void MakeDefault()
		{
			using func_t = decltype(&TESClimate::MakeDefault);
			static REL::Relocation<func_t> func{ Offsets::TESClimate::MakeDefault };
			func(this);
		}

		std::uint8_t GetTransTime(TESClimate_TransTime aeTT) const
		{
			using func_t = decltype(&TESClimate::GetTransTime);
			static REL::Relocation<func_t> func{ Offsets::TESClimate::GetTransTime };
			return func(this, aeTT);
		}

	private:
		void SetMoonPhaseDays(std::uint32_t auiDays)
		{
			using func_t = decltype(&TESClimate::SetMoonPhaseDays);
			static REL::Relocation<func_t> func{ Offsets::TESClimate::SetMoonPhaseDays };
			func(this, auiDays);
		}

	public:
		// members
		TESModel       mNightSky;        // 18
		TESWeatherList weatherList;      // 30
		TESTexture     txSkyObjects[2];  // 38
		std::uint8_t   ucData[6];        // 50
		std::uint16_t  pad56;            // 56
	};
	static_assert(sizeof(TESClimate) == 0x58);
}
