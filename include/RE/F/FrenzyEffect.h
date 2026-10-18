#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class MagicCaster;
	class MagicTarget;

	class FrenzyEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FrenzyEffect };
		static constexpr auto VTABLE{ VTABLE::FrenzyEffect };

		// override (ValueModifierEffect)
		virtual ~FrenzyEffect() = default;                                // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;       // 04
		virtual void SaveGame(Actor* apActor) override;                   // 06
		virtual void LoadGame(Actor* apActor) override;                   // 08
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		// members
		bool         bStartedInCombat;  // 4C
		std::uint8_t pad4D[0x3];        // 4D
	};
	static_assert(sizeof(FrenzyEffect) == 0x50);
}
