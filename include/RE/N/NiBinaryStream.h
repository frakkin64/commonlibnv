#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) NiBinaryStream
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBinaryStream };
		static constexpr auto VTABLE{ VTABLE::NiBinaryStream };

		// add
		virtual ~NiBinaryStream() = default;  // 00
		virtual void Unk_01();                // 01
		virtual void Unk_02();                // 02
		virtual void Unk_03();                // 03
		virtual void Unk_04();                // 04

		std::uint32_t Read(void* pvBuffer, std::uint32_t uiBytes)
		{
			using func_t = decltype(&NiBinaryStream::Read);
			static REL::Relocation<func_t> func{ Offsets::NiBinaryStream::Read };
			return func(this, pvBuffer, uiBytes);
		}

		std::uint32_t Write(void const* pvBuffer, std::uint32_t uiBytes)
		{
			using func_t = decltype(&NiBinaryStream::Write);
			static REL::Relocation<func_t> func{ Offsets::NiBinaryStream::Write };
			return func(this, pvBuffer, uiBytes);
		}

	public:
		// members
		std::uint32_t m_uiAbsoluteCurrentPos;  // 04
		void*         m_pfnRead;               // 08
		void*         m_pfnWrite;              // 0C
	};
}
