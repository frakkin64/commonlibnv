#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMemObject.h"

namespace RE
{
	class BSFile;

	class LoadedFile :
		public NiMemObject  // 00
	{
	public:
		LoadedFile* ctor(char const* apFileName, BSFile* apFile)
		{
			using func_t = LoadedFile*(__thiscall*)(LoadedFile*, char const*, BSFile*);
			static REL::Relocation<func_t> func{ Offsets::LoadedFile::ctor };
			return func(this, apFileName, apFile);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(LoadedFile*);
			static REL::Relocation<func_t> func{ Offsets::LoadedFile::dtor };
			func(this);
		}

		void IncRefCount()
		{
			using func_t = decltype(&LoadedFile::IncRefCount);
			static REL::Relocation<func_t> func{ Offsets::LoadedFile::IncRefCount };
			func(this);
		}

		void DecRefCount()
		{
			using func_t = decltype(&LoadedFile::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::LoadedFile::DecRefCount };
			func(this);
		}

	public:
		// members
		std::int32_t  iRefCount;         // 00
		char*         pFileName;         // 04
		BSFile*       pFile;             // 08
		bool          bInLoadedFileMap;  // 0C
		bool          bFileUsed;         // 0D
		std::uint16_t pad0E;             // 0E
	};
	static_assert(sizeof(LoadedFile) == 0x10);
}
