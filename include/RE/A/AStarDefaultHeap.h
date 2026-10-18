#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/ScrapHeap.h"

namespace RE
{
	class AStarDefaultHeap :
		public ScrapHeap  // 00
	{
	public:
		AStarDefaultHeap* ctor()
		{
			using func_t = AStarDefaultHeap*(__thiscall*)(AStarDefaultHeap*);
			static REL::Relocation<func_t> func{ Offsets::AStarDefaultHeap::ctor };
			return func(this);
		}
	};
}
