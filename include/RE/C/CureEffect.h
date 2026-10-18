#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"
#include "RE/E/EffectArchetypes_ArchetypeID.h"
#include "RE/M/MagicSystem_SpellType.h"

namespace RE
{
	class MagicTarget;

	class CureEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CureEffect };
		static constexpr auto VTABLE{ VTABLE::CureEffect };

		// override (ActiveEffect)
		virtual ~CureEffect() = default;                           // 00
		virtual ActiveEffect* Copy() override;                     // 01
		virtual bool CheckTarget(MagicTarget* apTarget) override;  // 13
		virtual void Start() override;                             // 14

		// members
		MagicSystem_SpellType        eSpellType;    // 48
		EffectArchetypes_ArchetypeID eArchetypeID;  // 4C
	};
	static_assert(sizeof(CureEffect) == 0x50);
}
