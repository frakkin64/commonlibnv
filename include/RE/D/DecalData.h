#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CHUNK_ID.h"
#include "RE/D/DECAL_DATA_DATA.h"

namespace RE
{
	class TESFile;

	class DecalData
	{
	public:
		DecalData* ctor()
		{
			using func_t = DecalData*(__thiscall*)(DecalData*);
			static REL::Relocation<func_t> func{ Offsets::DecalData::ctor };
			return func(this);
		}

		void Copy(DecalData* apCopy)
		{
			using func_t = decltype(&DecalData::Copy);
			static REL::Relocation<func_t> func{ Offsets::DecalData::Copy };
			func(this, apCopy);
		}

		bool Compare(DecalData* apCompare)
		{
			using func_t = decltype(&DecalData::Compare);
			static REL::Relocation<func_t> func{ Offsets::DecalData::Compare };
			return func(this, apCompare);
		}

		void Save(CHUNK_ID aeChunk)
		{
			using func_t = decltype(&DecalData::Save);
			static REL::Relocation<func_t> func{ Offsets::DecalData::Save };
			func(this, aeChunk);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&DecalData::Load);
			static REL::Relocation<func_t> func{ Offsets::DecalData::Load };
			func(this, apFile);
		}

	public:
		// members
		DECAL_DATA_DATA Data;  // 00
	};
	static_assert(sizeof(DecalData) == 0x24);
}
