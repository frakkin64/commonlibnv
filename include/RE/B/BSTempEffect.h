#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class TESObjectCELL;

	class BSTempEffect :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempEffect };
		static constexpr auto VTABLE{ VTABLE::BSTempEffect };

		float GetAge() const
		{
			using func_t = decltype(&BSTempEffect::GetAge);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffect::GetAge };
			return func(this);
		}

		BSTempEffect* ctor(TESObjectCELL* apCell, float afLifetime)
		{
			using func_t = BSTempEffect*(__thiscall*)(BSTempEffect*, TESObjectCELL*, float);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffect::ctor };
			return func(this, apCell, afLifetime);
		}

	public:
		// members
		float          fLifetime;     // 08
		TESObjectCELL* pCell;         // 0C
		float          fAge;          // 10
		bool           bInitialized;  // 14
		std::uint8_t   pad15[0x3];    // 15
	};
	static_assert(sizeof(BSTempEffect) == 0x18);
}
