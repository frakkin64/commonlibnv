#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/COMBAT_WORLD_STATE.h"

namespace RE
{
	class CombatWorldState
	{
	public:
		static bool IsSpecifiedVariable(std::int32_t aiValue)
		{
			using func_t = decltype(&CombatWorldState::IsSpecifiedVariable);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldState::IsSpecifiedVariable };
			return func(aiValue);
		}

		void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiValue)
		{
			using func_t = decltype(&CombatWorldState::GetDebugText);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldState::GetDebugText };
			func(this, apDebugText, aiMaxLength, aiValue);
		}

		static char const* GetStateValueText(COMBAT_WORLD_STATE aeState, std::int32_t aiValue)
		{
			using func_t = decltype(&CombatWorldState::GetStateValueText);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldState::GetStateValueText };
			return func(aeState, aiValue);
		}

	public:
		// members
		COMBAT_WORLD_STATE eState;  // 00
		std::int32_t       iValue;  // 04
	};
}
