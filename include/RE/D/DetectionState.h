#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatTimeStamp.h"
#include "RE/D/DETECTION_LEVEL.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;

	class DetectionState
	{
	public:
		DetectionState* ctor()
		{
			using func_t = DetectionState*(__thiscall*)(DetectionState*);
			static REL::Relocation<func_t> func{ Offsets::DetectionState::ctor };
			return func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&DetectionState::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::DetectionState::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&DetectionState::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::DetectionState::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame()
		{
			using func_t = decltype(&DetectionState::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::DetectionState::InitLoadGame };
			func(this);
		}

	public:
		// members
		Actor*          pActor;                // 00
		DETECTION_LEVEL eDetectionLevel;       // 04
		std::int32_t    iLevel;                // 08
		NiPoint3        LastPositionDetected;  // 0C
		CombatTimeStamp fLastTimeDetected;     // 18
		bool            b360view;              // 1C
		bool            bcombat;               // 1D
		bool            bLineofSight;          // 1E
		bool            bEvaluated;            // 1F
		std::int32_t    iDetectedEventLevel;   // 20
	};
	static_assert(sizeof(DetectionState) == 0x24);
}
