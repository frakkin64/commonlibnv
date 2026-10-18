#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CommandEffect.h"

namespace RE
{
	class ActiveEffect;
	class MagicTarget;

	class CommandCreatureEffect :
		public CommandEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CommandCreatureEffect };
		static constexpr auto VTABLE{ VTABLE::CommandCreatureEffect };

		// override (CommandEffect)
		virtual ~CommandCreatureEffect() = default;                // 00
		virtual ActiveEffect* Copy() override;                     // 01
		virtual bool CheckTarget(MagicTarget* apTarget) override;  // 13
	};
	static_assert(sizeof(CommandCreatureEffect) == 0x48);
}
