#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESTexture.h"

namespace RE
{
	class TESIcon :
		public TESTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESIcon };
		static constexpr auto VTABLE{ VTABLE::TESIcon };

		TESIcon* ctor()
		{
			using func_t = TESIcon*(__thiscall*)(TESIcon*);
			static REL::Relocation<func_t> func{ Offsets::TESIcon::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESIcon*);
			static REL::Relocation<func_t> func{ Offsets::TESIcon::dtor };
			func(this);
		}
	};
	static_assert(sizeof(TESIcon) == 0xC);
}
