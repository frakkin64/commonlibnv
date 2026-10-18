#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;

	class ShieldEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ShieldEffect };
		static constexpr auto VTABLE{ VTABLE::ShieldEffect };

		// override (ValueModifierEffect)
		virtual ~ShieldEffect() = default;                            // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void Update(float afSecondsElapsed) override;         // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;   // 04
		virtual void SaveGame(Actor* apActor) override;               // 06
		virtual void LoadGame(Actor* apActor) override;               // 08
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual void Start() override;                                // 14
		virtual void Finish() override;                               // 16

		// members
		ActorValue_Index eAdditionalActorValue;  // 4C
	};
	static_assert(sizeof(ShieldEffect) == 0x50);
}
