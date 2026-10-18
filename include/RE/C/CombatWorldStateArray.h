#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/COMBAT_WORLD_STATE.h"

namespace RE
{
	class CombatController;

	class CombatWorldStateArray
	{
	public:
		std::int32_t GetSpecifiedVariable(std::int32_t aiSpecifiedVariable)
		{
			using func_t = decltype(&CombatWorldStateArray::GetSpecifiedVariable);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::GetSpecifiedVariable };
			return func(this, aiSpecifiedVariable);
		}

		std::int32_t GetStateValue(std::int32_t aiValue, std::int32_t aiUnsatisfiedValue)
		{
			using func_t = decltype(&CombatWorldStateArray::GetStateValue);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::GetStateValue };
			return func(this, aiValue, aiUnsatisfiedValue);
		}

		void ClearValues()
		{
			using func_t = decltype(&CombatWorldStateArray::ClearValues);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::ClearValues };
			func(this);
		}

		void Update(CombatController* apCombatController)
		{
			using func_t = decltype(&CombatWorldStateArray::Update);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::Update };
			func(this, apCombatController);
		}

		void Copy(CombatWorldStateArray* apWorldStateArray)
		{
			using func_t = decltype(&CombatWorldStateArray::Copy);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::Copy };
			func(this, apWorldStateArray);
		}

		bool IsTrue(COMBAT_WORLD_STATE aeWorldState, std::int32_t aiDesiredValue)
		{
			using func_t = decltype(&CombatWorldStateArray::IsTrue);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::IsTrue };
			return func(this, aeWorldState, aiDesiredValue);
		}

		void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, COMBAT_WORLD_STATE aeState)
		{
			using func_t = decltype(&CombatWorldStateArray::GetDebugText);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateArray::GetDebugText };
			func(this, apDebugText, aiMaxLength, aeState);
		}

	public:
		// members
		std::int32_t iValues[20];             // 00
		std::int32_t iSpecifiedVariables[3];  // 50
	};
}
