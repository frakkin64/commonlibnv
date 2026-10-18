#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiFile_OpenMode.h"

namespace RE
{
	class NiFile;

	class FileFinder
	{
	public:
		enum class FILE_LOCATION : std::int32_t
		{
			kNOTFOUND = 0x0,
			kHARDDRIVE = 0x1,
			kARCHIVE = 0x2,
			kCACHE = 0x3,
			kPC = 0x4,
			kDVD = 0x5,
			kDVDTOHD = 0x6,
		};

		static FileFinder::FILE_LOCATION Locate(char const* apName, char* apFilePath, std::uint32_t aiFlags, std::uint32_t aiArchiveType)
		{
			using func_t = decltype(&FileFinder::Locate);
			static REL::Relocation<func_t> func{ Offsets::FileFinder::Locate };
			return func(apName, apFilePath, aiFlags, aiArchiveType);
		}

		static NiFile* GetFile(char const* apName, NiFile_OpenMode aeMode, std::uint32_t aiSize, std::uint32_t aiArchiveType)
		{
			using func_t = decltype(&FileFinder::GetFile);
			static REL::Relocation<func_t> func{ Offsets::FileFinder::GetFile };
			return func(apName, aeMode, aiSize, aiArchiveType);
		}

		FileFinder::FILE_LOCATION Exist(char const* apName, char* apFilePath, std::uint32_t aiFlags, std::uint32_t aiArchiveType)
		{
			using func_t = decltype(&FileFinder::Exist);
			static REL::Relocation<func_t> func{ Offsets::FileFinder::Exist };
			return func(this, apName, apFilePath, aiFlags, aiArchiveType);
		}

	public:
		// members
		BSSimpleArray<char const*, 1024> PathA;  // 00
	};
}
