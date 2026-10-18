#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFile.h"
#include "RE/N/NiFile_OpenMode.h"

namespace RE
{
	class BSFile :
		public NiFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFile };
		static constexpr auto VTABLE{ VTABLE::BSFile };

		// add
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A
		virtual void Unk_0B();  // 0B
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F
		virtual void Unk_10();  // 10
		virtual void Unk_11();  // 11
		virtual void Unk_12();  // 12

		std::uint32_t Tell()
		{
			using func_t = decltype(&BSFile::Tell);
			static REL::Relocation<func_t> func{ Offsets::BSFile::Tell };
			return func(this);
		}

		bool FileIsGood()
		{
			using func_t = decltype(&BSFile::FileIsGood);
			static REL::Relocation<func_t> func{ Offsets::BSFile::FileIsGood };
			return func(this);
		}

		BSFile* ctor(char const* apName, NiFile_OpenMode aeMode, std::uint32_t aiBufferSize, bool abTextMode, void* apDevice)
		{
			using func_t = BSFile*(__thiscall*)(BSFile*, char const*, NiFile_OpenMode, std::uint32_t, bool, void*);
			static REL::Relocation<func_t> func{ Offsets::BSFile::ctor };
			return func(this, apName, aeMode, aiBufferSize, abTextMode, apDevice);
		}

	public:
		// members
		// not placed: m_pDevice(absent)
		bool          m_bUseNoBuffering;   // 30
		bool          bUseAuxBuffer;       // 31
		std::uint16_t pad32;               // 32
		char*         m_pAuxBuffer;        // 34
		std::int32_t  iAuxTrueFilePos;     // 38
		std::uint32_t iAuxBufferMinIndex;  // 3C
		std::uint32_t iAuxBufferMaxIndex;  // 40
		char          pFileName[260];      // 44
		std::int32_t  iResult;             // 148
		std::uint32_t iIOSize;             // 14C
		std::uint32_t iTrueFilePos;        // 150
		std::uint32_t iFileSize;           // 154
	};
	static_assert(sizeof(BSFile) == 0x158);
}
