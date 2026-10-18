#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSFileEntry;
	class BSHashData;
	class TESFile;
	class TESForm;

	class TESTextureList
	{
	public:
		TESTextureList* ctor()
		{
			using func_t = TESTextureList*(__thiscall*)(TESTextureList*);
			static REL::Relocation<func_t> func{ Offsets::TESTextureList::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESTextureList*);
			static REL::Relocation<func_t> func{ Offsets::TESTextureList::dtor };
			func(this);
		}

		void LoadFromBuffer(BSHashData* apBuffer, std::uint32_t aiCount, TESForm* apParentForm, char const* apModelName)
		{
			using func_t = decltype(&TESTextureList::LoadFromBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESTextureList::LoadFromBuffer };
			func(this, apBuffer, aiCount, apParentForm, apModelName);
		}

		void Load(TESFile* apFile, TESForm* apParentForm, char const* apModelName)
		{
			using func_t = decltype(&TESTextureList::Load);
			static REL::Relocation<func_t> func{ Offsets::TESTextureList::Load };
			func(this, apFile, apParentForm, apModelName);
		}

		void Copy(TESTextureList* apTextureList)
		{
			using func_t = decltype(&TESTextureList::Copy);
			static REL::Relocation<func_t> func{ Offsets::TESTextureList::Copy };
			func(this, apTextureList);
		}

	public:
		// members
		std::uint8_t  cTextureCount;        // 00
		std::uint8_t  pad01[0x3];           // 01
		BSFileEntry** pTextureOffsetArray;  // 04
	};
	static_assert(sizeof(TESTextureList) == 0x8);
}
