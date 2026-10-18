#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ScrapHeap
	{
	public:
		class Header;

		class Header
		{
		public:
			// members
			std::uint32_t      iSize;  // 00?
			ScrapHeap::Header* pPrev;  // 04?
		};

		ScrapHeap* ctor()
		{
			using func_t = ScrapHeap*(__thiscall*)(ScrapHeap*);
			static REL::Relocation<func_t> func{ Offsets::ScrapHeap::ctor };
			return func(this);
		}

	public:
		// members
		char*              pMemHeap;          // 00
		char*              pCurrentStackLoc;  // 04
		char*              pEndHeap;          // 08
		ScrapHeap::Header* pLastBlock;        // 0C
	};
	static_assert(sizeof(ScrapHeap) == 0x10);
}
