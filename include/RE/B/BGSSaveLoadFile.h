#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSFile;

	class BGSSaveLoadFile
	{
	public:
		std::uint32_t Read(void* apBuffer, std::uint32_t aiBytes)
		{
			using func_t = decltype(&BGSSaveLoadFile::Read);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFile::Read };
			return func(this, apBuffer, aiBytes);
		}

		std::uint32_t Write(void const* apBuffer, std::uint32_t aiBytes)
		{
			using func_t = decltype(&BGSSaveLoadFile::Write);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFile::Write };
			return func(this, apBuffer, aiBytes);
		}

		bool Open()
		{
			using func_t = decltype(&BGSSaveLoadFile::Open);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFile::Open };
			return func(this);
		}

		std::uint32_t GetFilePosition()
		{
			using func_t = decltype(&BGSSaveLoadFile::GetFilePosition);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFile::GetFilePosition };
			return func(this);
		}

		void SeekSet(std::int32_t aiPosition)
		{
			using func_t = decltype(&BGSSaveLoadFile::SeekSet);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFile::SeekSet };
			func(this, aiPosition);
		}

		void SeekCurrent(std::int32_t aiPosition)
		{
			using func_t = decltype(&BGSSaveLoadFile::SeekCurrent);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFile::SeekCurrent };
			func(this, aiPosition);
		}

	public:
		// members
		char          pSaveFileName[260];      // 00
		BSFile*       pFile;                   // 104
		std::uint32_t iSimulatedFileSize;      // 108
		std::uint32_t iSimulatedFilePosition;  // 10C
	};
	static_assert(sizeof(BGSSaveLoadFile) == 0x110);
}
