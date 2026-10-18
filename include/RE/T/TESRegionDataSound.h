#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESRegionData.h"
#include "RE/T/TESRegionSounds.h"

namespace RE
{
	class BGSMusicType;
	class MediaSet;
	class TESFile;

	class TESRegionDataSound :
		public TESRegionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataSound };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataSound };

		// override (TESRegionData)
		virtual ~TESRegionDataSound() = default;                                             // 00
		virtual void Save() override;                                                        // 01
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2) override;  // 07

		// add
		virtual bool LoadRegionDataSound(TESFile* apFile);  // 09
		virtual BGSMusicType* GetMusicType();               // 0A
		virtual bool SetMusicType(BGSMusicType* apType);    // 0B
		virtual MediaSet* GetMediaSetIncidentals() const;   // 0C
		virtual MediaSet* GetMediaSetBattle();              // 0D
		virtual void SetMediaSetIncidentals(MediaSet* ms);  // 0E

		// members
		TESRegionSounds sounds;  // 08
	};
}
