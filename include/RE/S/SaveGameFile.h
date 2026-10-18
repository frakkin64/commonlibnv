#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFile.h"
#include "RE/N/NiFile_OpenMode.h"

namespace RE
{
	class SaveGameFile :
		public BSFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SaveGameFile };
		static constexpr auto VTABLE{ VTABLE::SaveGameFile };

		// override (BSFile)
		virtual ~SaveGameFile() = default;  // 00

		SaveGameFile* ctor(char const* apName, NiFile_OpenMode aeMode, std::uint32_t aiBufferSize)
		{
			using func_t = SaveGameFile*(__thiscall*)(SaveGameFile*, char const*, NiFile_OpenMode, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::SaveGameFile::ctor };
			return func(this, apName, aeMode, aiBufferSize);
		}

	public:
		// members
		bool         bHasFileTime;  // 158
		std::uint8_t pad159[0x3];   // 159
		_FILETIME    FileTime;      // 15C
	};
	static_assert(sizeof(SaveGameFile) == 0x164);
}
