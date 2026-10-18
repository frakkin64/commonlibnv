#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESObjectREFR;

	class RoomLinkedRefData
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(RoomLinkedRefData*);
			static REL::Relocation<func_t> func{ Offsets::RoomLinkedRefData::dtor };
			func(this);
		}

	public:
		// members
		BSSimpleList<TESObjectREFR*> PortalList;  // 00
		BSSimpleList<TESObjectREFR*> RoomList;    // 08
		std::uint8_t                 cMaster;     // 10
		std::uint8_t                 pad11[0x3];  // 11
	};
}
