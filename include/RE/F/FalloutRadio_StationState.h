#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class Conversation;
	class FalloutRadio_FORadioReceiver;

	class FalloutRadio_StationState
	{
	public:
		bool IsContBroadcast()
		{
			using func_t = decltype(&FalloutRadio_StationState::IsContBroadcast);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_StationState::IsContBroadcast };
			return func(this);
		}

		void SetTransmitting(bool abVal)
		{
			using func_t = decltype(&FalloutRadio_StationState::SetTransmitting);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_StationState::SetTransmitting };
			func(this, abVal);
		}

		void SetContBroadcast(bool abVal)
		{
			using func_t = decltype(&FalloutRadio_StationState::SetContBroadcast);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_StationState::SetContBroadcast };
			func(this, abVal);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_StationState::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_StationState::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_StationState::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_StationState::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void FinishLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_StationState::FinishLoadGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_StationState::FinishLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		Conversation*                               pConvo;                 // 00
		Conversation*                               pNextConvo;             // 04
		std::uint32_t                               iCurrentItemStartTime;  // 08
		std::int32_t                                iCurrentItemDuration;   // 0C
		std::uint8_t                                cStationPower;          // 10
		std::uint8_t                                cTargetPower;           // 11
		std::uint16_t                               pad12;                  // 12
		std::uint32_t                               iStationFlags;          // 14
		BSSimpleList<FalloutRadio_FORadioReceiver*> StationUsers;           // 18?
	};
}
