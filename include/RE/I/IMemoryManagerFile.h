#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) IMemoryManagerFile
	{
	public:
		static constexpr auto RTTI{ RTTI::IMemoryManagerFile };
		static constexpr auto VTABLE{ VTABLE::IMemoryManagerFile };

		// add
		virtual ~IMemoryManagerFile() = default;                               // 00
		virtual std::int32_t Read(void* a_arg1, std::uint32_t a_arg2);         // 01
		virtual std::int32_t Write(const void* a_arg1, std::uint32_t a_arg2);  // 02
		virtual std::int32_t Size();                                           // 03
		virtual void Seek(std::int32_t a_arg1);                                // 04
	};
	static_assert(sizeof(IMemoryManagerFile) == 0x4);
}
