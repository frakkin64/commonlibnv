#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CommandEffect.h"

namespace RE
{
	class ActiveEffect;
	class MagicTarget;

	class CommandHumanoidEffect :
		public CommandEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CommandHumanoidEffect };
		static constexpr auto VTABLE{ VTABLE::CommandHumanoidEffect };

		// override (CommandEffect)
		virtual ~CommandHumanoidEffect() = default;                // 00
		virtual ActiveEffect* Copy() override;                     // 01
		virtual bool CheckTarget(MagicTarget* apTarget) override;  // 13
	};
	static_assert(sizeof(CommandHumanoidEffect) == 0x48);
}
