#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FutBinaryFileC.h"

namespace RE
{
	class LoadedFile;
	class NiFile;

	class BSFaceGenBinaryFile :
		public FutBinaryFileC  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenBinaryFile };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenBinaryFile };

		// override (FutBinaryFileC)
		virtual ~BSFaceGenBinaryFile() = default;                                       // 00
		virtual bool read(void* data, std::uint32_t size, std::uint32_t num) override;  // 04

		// add
		virtual bool openForRead(std::basic_string<char, std::char_traits<char>, std::allocator<char>> apFileName, bool abCTLFile);  // 05

		BSFaceGenBinaryFile* ctor(std::basic_string<char, std::char_traits<char>, std::allocator<char>> apString)
		{
			using func_t = BSFaceGenBinaryFile*(__thiscall*)(BSFaceGenBinaryFile*, std::basic_string<char, std::char_traits<char>, std::allocator<char>>);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenBinaryFile::ctor };
			return func(this, apString);
		}

		void close()
		{
			using func_t = decltype(&BSFaceGenBinaryFile::close);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenBinaryFile::close };
			func(this);
		}

		bool readHeader(void* data, std::uint32_t size, std::uint32_t num)
		{
			using func_t = decltype(&BSFaceGenBinaryFile::readHeader);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenBinaryFile::readHeader };
			return func(this, data, size, num);
		}

	public:
		// members
		NiFile*     pFile;        // 40
		LoadedFile* pLoadedFile;  // 44
	};
}
