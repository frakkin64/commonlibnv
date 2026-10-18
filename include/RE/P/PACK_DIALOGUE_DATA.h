#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PDIAL_TRIGGER_TYPE.h"

namespace RE
{
	class PACK_DIALOGUE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&PACK_DIALOGUE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::PACK_DIALOGUE_DATA::Endian };
			func(this);
		}

	public:
		// members
		float              fFov;                   // 00
		std::uint32_t      iTopicID;               // 04
		bool               bNOHeadtracking;        // 08
		bool               bDoNotControlTarget;    // 09
		bool               bSpeakerMoveTalk;       // 0A
		std::uint8_t       pad0B;                  // 0B
		float              fDistanceStartTalking;  // 0C
		bool               bSayTo;                 // 10
		std::uint8_t       pad11[0x3];             // 11
		PDIAL_TRIGGER_TYPE eTriggerType;           // 14
	};
	static_assert(sizeof(PACK_DIALOGUE_DATA) == 0x18);
}
