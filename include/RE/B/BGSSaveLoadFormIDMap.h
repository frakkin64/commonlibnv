#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class BGSSaveLoadFile;

	class BGSSaveLoadFormIDMap
	{
	public:
		BGSSaveLoadFormIDMap* ctor(std::uint32_t iBucketCount)
		{
			using func_t = BGSSaveLoadFormIDMap*(__thiscall*)(BGSSaveLoadFormIDMap*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormIDMap::ctor };
			return func(this, iBucketCount);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSSaveLoadFormIDMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormIDMap::dtor };
			func(this);
		}

		void Save(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadFormIDMap::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormIDMap::Save };
			func(this, apFile);
		}

		void Load(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadFormIDMap::Load);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormIDMap::Load };
			func(this, apFile);
		}

	public:
		// members
		NiTMap<std::uint32_t, std::uint32_t> FormIDToIndexMap;  // 00
		NiTMap<std::uint32_t, std::uint32_t> IndexToFormIDMap;  // 10
		std::uint32_t                        iCurrentIndex;     // 20
	};
	static_assert(sizeof(BGSSaveLoadFormIDMap) == 0x24);
}
