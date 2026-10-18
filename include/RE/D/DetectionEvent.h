#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatTimeStamp.h"
#include "RE/D/DETECTION_EVENT_TYPE.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class TESObjectREFR;

	class DetectionEvent
	{
	public:
		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&DetectionEvent::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::DetectionEvent::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::int32_t         iActionValue;  // 00
		NiPoint3             Location;      // 04
		CombatTimeStamp      fTimeStamp;    // 10
		DETECTION_EVENT_TYPE eEventType;    // 14
		TESObjectREFR*       pRef;          // 18
	};
}
