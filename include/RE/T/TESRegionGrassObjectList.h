#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESRegionGrassObject;

	class __declspec(novtable) TESRegionGrassObjectList :
		public BSSimpleList<TESRegionGrassObject*>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionGrassObjectList };
		static constexpr auto VTABLE{ VTABLE::TESRegionGrassObjectList };

		// add
		virtual ~TESRegionGrassObjectList() = default;  // 00

		TESRegionGrassObjectList* ctor(bool abOwnsTESRegionGrassObjectMemory)
		{
			using func_t = TESRegionGrassObjectList*(__thiscall*)(TESRegionGrassObjectList*, bool);
			static REL::Relocation<func_t> func{ Offsets::TESRegionGrassObjectList::ctor };
			return func(this, abOwnsTESRegionGrassObjectMemory);
		}

	public:
		// members
		bool          bOwnsTESRegionGrassObjectMemory;  // 0C
		std::uint8_t  pad0D[0x3];                       // 0D
		std::uint32_t iCount;                           // 10
	};
	static_assert(sizeof(TESRegionGrassObjectList) == 0x14);
}
