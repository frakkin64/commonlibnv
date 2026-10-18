#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkWindListener.h"

namespace RE
{
	class TESWindListener :
		public bhkWindListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESWindListener };
		static constexpr auto VTABLE{ VTABLE::TESWindListener };

		// override (bhkWindListener)
		virtual ~TESWindListener() = default;            // 00
		virtual float GetRandom(float afSize) override;  // 0A

		TESWindListener* ctor()
		{
			using func_t = TESWindListener*(__thiscall*)(TESWindListener*);
			static REL::Relocation<func_t> func{ Offsets::TESWindListener::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESWindListener) == 0x14);
}
