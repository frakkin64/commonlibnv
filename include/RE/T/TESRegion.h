#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiColor.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;
	class TESRegionDataList;
	class TESRegionPointList;
	class TESWeather;
	class TESWorldSpace;

	class TESRegion :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegion };
		static constexpr auto VTABLE{ VTABLE::TESRegion };

		// override (TESForm)
		virtual ~TESRegion() = default;                 // 04
		virtual bool ProcessBeforeSave() override;      // 06
		virtual bool Load(TESFile* apFile) override;    // 08
		virtual void Save() override;                   // 0B
		virtual void InitItem() override;               // 22
		virtual NiColor* GetEmittanceColor() override;  // 30

		// add
		virtual TESRegion* Copy(TESRegion* apCopyInto);  // 4E
		virtual bool Validate();                         // 4F

		void UpdateWeather()
		{
			using func_t = decltype(&TESRegion::UpdateWeather);
			static REL::Relocation<func_t> func{ Offsets::TESRegion::UpdateWeather };
			func(this);
		}

	public:
		// members
		TESRegionDataList*                 pDataList;           // 18
		BSSimpleList<TESRegionPointList*>* pPointLists;         // 1C
		TESWorldSpace*                     pWorldSpace;         // 20
		TESWeather*                        pCurrentWeather;     // 24
		float                              fLastWeatherUpdate;  // 28
		NiColor                            EmittanceColor;      // 2C
	};
	static_assert(sizeof(TESRegion) == 0x38);
}
