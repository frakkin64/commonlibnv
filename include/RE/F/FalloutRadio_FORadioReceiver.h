#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class TESObjectREFR;

	class FalloutRadio_FORadioReceiver
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(FalloutRadio_FORadioReceiver*);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioReceiver::dtor };
			func(this);
		}

		FalloutRadio_FORadioReceiver* ctor()
		{
			using func_t = FalloutRadio_FORadioReceiver*(__thiscall*)(FalloutRadio_FORadioReceiver*);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioReceiver::ctor };
			return func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_FORadioReceiver::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioReceiver::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_FORadioReceiver::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioReceiver::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_FORadioReceiver::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioReceiver::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		TESObjectREFR* pRadio;            // 00
		BSSoundHandle  Hndl;              // 04
		BSSoundHandle  StaticHndl;        // 10
		bool           bShouldBePlaying;  // 1C
		bool           bJustStarted;      // 1D?
		bool           bInRange;          // 1E?
		bool           bIsActor;          // 1F?
	};
}
