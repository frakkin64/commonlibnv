#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpContactListener.h"

namespace RE
{
	class bhkContactListener :
		public hkpContactListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkContactListener };
		static constexpr auto VTABLE{ VTABLE::bhkContactListener };

		// override (hkpContactListener)
		virtual ~bhkContactListener() = default;  // 03

		bhkContactListener* ctor()
		{
			using func_t = bhkContactListener*(__thiscall*)(bhkContactListener*);
			static REL::Relocation<func_t> func{ Offsets::bhkContactListener::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(bhkContactListener) == 0x4);
}
