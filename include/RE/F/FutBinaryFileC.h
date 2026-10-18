#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) FutBinaryFileC
	{
	public:
		static constexpr auto RTTI{ RTTI::FutBinaryFileC };
		static constexpr auto VTABLE{ VTABLE::FutBinaryFileC };

		// add
		virtual ~FutBinaryFileC() = default;                                                                           // 00
		virtual bool openForRead(std::basic_string<char, std::char_traits<char>, std::allocator<char>> a_fname);       // 01
		virtual bool openForOverwrite(std::basic_string<char, std::char_traits<char>, std::allocator<char>> a_fname);  // 02
		virtual bool write(void const* data, std::uint32_t size, std::uint32_t num);                                   // 03
		virtual bool read(void* data, std::uint32_t size, std::uint32_t num);                                          // 04

		FutBinaryFileC* ctor(std::basic_string<char, std::char_traits<char>, std::allocator<char>> a_fileId)
		{
			using func_t = FutBinaryFileC*(__thiscall*)(FutBinaryFileC*, std::basic_string<char, std::char_traits<char>, std::allocator<char>>);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::ctor };
			return func(this, a_fileId);
		}

		bool isCorrectFileId(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const& fname)
		{
			using func_t = decltype(&FutBinaryFileC::isCorrectFileId);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::isCorrectFileId };
			return func(this, fname);
		}

		bool openForUpdate(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const& fname)
		{
			using func_t = decltype(&FutBinaryFileC::openForUpdate);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::openForUpdate };
			return func(this, fname);
		}

		bool openForAppend(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const& fname)
		{
			using func_t = decltype(&FutBinaryFileC::openForAppend);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::openForAppend };
			return func(this, fname);
		}

		bool writeHeader(void const* data, std::uint32_t size, std::uint32_t num)
		{
			using func_t = decltype(&FutBinaryFileC::writeHeader);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::writeHeader };
			return func(this, data, size, num);
		}

		bool readHeader(void* data, std::uint32_t size, std::uint32_t num)
		{
			using func_t = decltype(&FutBinaryFileC::readHeader);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::readHeader };
			return func(this, data, size, num);
		}

		void close()
		{
			using func_t = decltype(&FutBinaryFileC::close);
			static REL::Relocation<func_t> func{ Offsets::FutBinaryFileC::close };
			func(this);
		}

	public:
		// members
		stl::string m_fname;  // 04
		stl::string fileId;   // 20
		_iobuf*     fptr;     // 3C
	};
	static_assert(sizeof(FutBinaryFileC) == 0x40);
}
