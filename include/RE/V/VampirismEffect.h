#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class MagicTarget;

	class VampirismEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::VampirismEffect };
		static constexpr auto VTABLE{ VTABLE::VampirismEffect };

		// override (ActiveEffect)
		virtual ~VampirismEffect() = default;                         // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void InitLoadGame(Actor* apActor) override;           // 0A
		virtual void Revert(Actor* apActor) override;                 // 0D
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;     // 13
		virtual void Start() override;                                // 14
		virtual void Finish() override;                               // 16
	};
	static_assert(sizeof(VampirismEffect) == 0x48);
}
