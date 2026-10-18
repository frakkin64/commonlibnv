#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiTexture;

	class BGSSaveLoadFileEntry
	{
	public:
		char const* GetPlayerTitle()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::GetPlayerTitle);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::GetPlayerTitle };
			return func(this);
		}

		std::uint32_t GetPlayerLevel()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::GetPlayerLevel);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::GetPlayerLevel };
			return func(this);
		}

		char const* GetPlayTime()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::GetPlayTime);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::GetPlayTime };
			return func(this);
		}

		std::uint32_t GetSaveGameNumber()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::GetSaveGameNumber);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::GetSaveGameNumber };
			return func(this);
		}

		char const* GetLocation()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::GetLocation);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::GetLocation };
			return func(this);
		}

		BGSSaveLoadFileEntry* ctor(char* apFileName, std::int32_t aiDeviceID)
		{
			using func_t = BGSSaveLoadFileEntry*(__thiscall*)(BGSSaveLoadFileEntry*, char*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::ctor };
			return func(this, apFileName, aiDeviceID);
		}

		bool SaveGame()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::SaveGame };
			return func(this);
		}

		bool LoadGame()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::LoadGame };
			return func(this);
		}

		void DeleteGame()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::DeleteGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::DeleteGame };
			func(this);
		}

		NiTexture* GetScreenshot()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::GetScreenshot);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::GetScreenshot };
			return func(this);
		}

		bool IsQuicksave()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::IsQuicksave);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::IsQuicksave };
			return func(this);
		}

		bool IsAutosave()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::IsAutosave);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::IsAutosave };
			return func(this);
		}

		bool IsCorrupt()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::IsCorrupt);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::IsCorrupt };
			return func(this);
		}

	protected:
		void LoadData()
		{
			using func_t = decltype(&BGSSaveLoadFileEntry::LoadData);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFileEntry::LoadData };
			func(this);
		}

	public:
		// members
		char*         pFileName;          // 00
		bool          bLoaded;            // 04
		bool          bCorrupt;           // 05
		std::uint16_t pad06;              // 06
		std::uint32_t iSaveGameNumber;    // 08
		char*         pPlayerName;        // 0C
		char*         pPlayerTitle;       // 10
		char*         pLocation;          // 14
		char*         pPlayTime;          // 18
		std::uint32_t iPlayerLevel;       // 1C
		std::uint32_t iScreenshotWidth;   // 20
		std::uint32_t iScreenshotHeight;  // 24
		std::uint32_t iScreenshotOffset;  // 28
		_FILETIME     FileTime;           // 2C
		std::int32_t  iDeviceID;          // 34
		std::int32_t  iVersion;           // 38
		char          pcLanguage[64];     // 3C
	};
	static_assert(sizeof(BGSSaveLoadFileEntry) == 0x7C);
}
