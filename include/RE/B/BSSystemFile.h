#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSSystemFile
	{
	public:
		enum class AccessMode : std::int32_t
		{
			kAM_RDONLY = 0x0,
			kAM_RDWR = 0x1,
			kAM_WRONLY = 0x2,
		};

		enum class ErrorCode : std::int32_t
		{
			kEC_NONE = 0x0,
			kEC_NOT_EXIST = 0x1,
			kEC_INVALID_PATH = 0x2,
			kEC_NO_PERMISSION = 0x3,
			kEC_FAILED = 0x4,
		};

		enum class OpenMode : std::int32_t
		{
			kOM_NONE = 0x0,
			kOM_APPEND = 0x1,
			kOM_CREAT = 0x2,
			kOM_TRUNC = 0x3,
			kOM_EXCL = 0x4,
		};

		static BSSystemFile::ErrorCode GetSizeOfFile(char const* apcPath, std::uint64_t& auiSize)
		{
			using func_t = decltype(&BSSystemFile::GetSizeOfFile);
			static REL::Relocation<func_t> func{ Offsets::BSSystemFile::GetSizeOfFile };
			return func(apcPath, auiSize);
		}

		BSSystemFile::ErrorCode GetSize(std::uint64_t& auiSize)
		{
			using func_t = decltype(&BSSystemFile::GetSize);
			static REL::Relocation<func_t> func{ Offsets::BSSystemFile::GetSize };
			return func(this, auiSize);
		}

		static BSSystemFile::ErrorCode DeleteFileA(char const* apcPath)
		{
			using func_t = decltype(&BSSystemFile::DeleteFileA);
			static REL::Relocation<func_t> func{ Offsets::BSSystemFile::DeleteFileA };
			return func(apcPath);
		}

		BSSystemFile* ctor(char const* apName, BSSystemFile::AccessMode aeAccessMode, BSSystemFile::OpenMode aeOpenMode, bool abAllowAsync)
		{
			using func_t = BSSystemFile*(__thiscall*)(BSSystemFile*, char const*, BSSystemFile::AccessMode, BSSystemFile::OpenMode, bool);
			static REL::Relocation<func_t> func{ Offsets::BSSystemFile::ctor };
			return func(this, apName, aeAccessMode, aeOpenMode, abAllowAsync);
		}

	public:
		// members
		BSSystemFile::ErrorCode  eLastError;   // 00
		BSSystemFile::AccessMode eAccessMode;  // 04
		BSSystemFile::OpenMode   eOpenMode;    // 08
		bool                     bAllowAsync;  // 0C
		std::uint8_t             pad0D[0x3];   // 0D
		void*                    hFile;        // 10
		std::uint8_t             unk14[0x14];  // 14 opaque
	};
}
