#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSystemFile.h"
#include "RE/I/IMemoryManagerFile.h"

namespace RE
{
	class MemoryManagerFile :
		public IMemoryManagerFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MemoryManagerFile };
		static constexpr auto VTABLE{ VTABLE::MemoryManagerFile };

		// override (IMemoryManagerFile)
		virtual ~MemoryManagerFile() = default;                                         // 00
		virtual std::int32_t Read(void* a_arg1, std::uint32_t a_arg2) override;         // 01
		virtual std::int32_t Write(const void* a_arg1, std::uint32_t a_arg2) override;  // 02
		virtual std::int32_t Size() override;                                           // 03
		virtual void Seek(std::int32_t a_arg1) override;                                // 04

		MemoryManagerFile* ctor(char const* apFileName)
		{
			using func_t = MemoryManagerFile*(__thiscall*)(MemoryManagerFile*, char const*);
			static REL::Relocation<func_t> func{ Offsets::MemoryManagerFile::ctor };
			return func(this, apFileName);
		}

	public:
		// members
		BSSystemFile File;  // 04
	};
}
