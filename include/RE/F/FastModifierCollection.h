#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Modifier;

	class FastModifierCollection
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(FastModifierCollection*);
			static REL::Relocation<func_t> func{ Offsets::FastModifierCollection::dtor };
			func(this);
		}

	public:
		// members
		Modifier** pModifiers;  // 00
	};
	static_assert(sizeof(FastModifierCollection) == 0x4);
}
