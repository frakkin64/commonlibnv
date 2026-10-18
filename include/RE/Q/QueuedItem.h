#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class ExtraDataList;
	class QueuedFile;
	class TESBoundObject;

	class QueuedItem
	{
	public:
		bool QueueFiles(Actor* apActor)
		{
			using func_t = decltype(&QueuedItem::QueueFiles);
			static REL::Relocation<func_t> func{ Offsets::QueuedItem::QueueFiles };
			return func(this, apActor);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&QueuedItem::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::QueuedItem::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&QueuedItem::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::QueuedItem::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		TESBoundObject*       pObject;            // 00
		ExtraDataList*        pExtra;             // 04
		std::int32_t          iNumber;            // 08
		bool                  bEquip;             // 0C
		bool                  bNow;               // 0D
		bool                  bForceEquip;        // 0E
		bool                  bPlayPickUpSounds;  // 0F
		bool                  bForceUnequip;      // 10
		bool                  bEquipCalling;      // 11
		std::uint16_t         pad12;              // 12
		NiPointer<QueuedFile> spQueuedFiles;      // 14
	};
}
