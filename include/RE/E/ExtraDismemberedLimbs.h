#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/C/CAUSE_OF_DEATH.h"

namespace RE
{
	class DismemberedLimb;
	class TESForm;

	class ExtraDismemberedLimbs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraDismemberedLimbs };
		static constexpr auto VTABLE{ VTABLE::ExtraDismemberedLimbs };

		// override (BSExtraData)
		virtual ~ExtraDismemberedLimbs() = default;  // 00

		ExtraDismemberedLimbs* ctor()
		{
			using func_t = ExtraDismemberedLimbs*(__thiscall*)(ExtraDismemberedLimbs*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDismemberedLimbs::ctor };
			return func(this);
		}

		bool Dismembered(BGSBodyPart_LIMB_ENUM aeLimb)
		{
			using func_t = decltype(&ExtraDismemberedLimbs::Dismembered);
			static REL::Relocation<func_t> func{ Offsets::ExtraDismemberedLimbs::Dismembered };
			return func(this, aeLimb);
		}

	public:
		// members
		std::uint16_t                         sLimbs;            // 0C
		std::uint16_t                         pad0E;             // 0E
		CAUSE_OF_DEATH                        eCauseofDeath;     // 10
		TESForm*                              pDeathObject;      // 14
		BGSBodyPart_LIMB_ENUM                 eLastHitLimb;      // 18
		bool                                  bEaten;            // 1C
		std::uint8_t                          pad1D[0x3];        // 1D
		BSSimpleArray<DismemberedLimb*, 1024> DismemberedLimbs;  // 20
	};
	static_assert(sizeof(ExtraDismemberedLimbs) == 0x30);
}
