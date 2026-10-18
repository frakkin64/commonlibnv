#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class COORD_DATA
	{
	public:
		COORD_DATA* ctor()
		{
			using func_t = COORD_DATA*(__thiscall*)(COORD_DATA*);
			static REL::Relocation<func_t> func{ Offsets::COORD_DATA::ctor };
			return func(this);
		}

	public:
		// members
		NiPoint2      Cellpoint;       // 00
		NiPoint2      Blockpoint;      // 08
		tagPOINT      Block;           // 10
		std::int32_t  iBlock;          // 18
		NiPoint2      Tilepoint;       // 1C
		tagPOINT      Tile;            // 24
		std::int32_t  iShape;          // 2C
		NiPoint3      Vertcoord;       // 30
		std::int32_t  iVertidx;        // 3C
		std::int32_t  iTrivertidx[3];  // 40
		bool          bTriright;       // 4C
		bool          bTriupper;       // 4D
		std::uint16_t pad4E;           // 4E
	};
}
