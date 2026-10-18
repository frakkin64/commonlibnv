#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/Tile_enumTrait.h"

namespace RE
{
	class Tile;
	class Tile_Action;

	class Tile_Value
	{
	public:
		void AddAction(std::int32_t aiActionType, float afActionVal)
		{
			using func_t = void (Tile_Value::*)(std::int32_t, float);
			static REL::Relocation<func_t> func{ Offsets::Tile_Value::AddAction };
			func(this, aiActionType, afActionVal);
		}

		void AddAction(std::int32_t aiActionType, Tile* apSourceTile, std::int32_t aeSourceTrait)
		{
			using func_t = void (Tile_Value::*)(std::int32_t, Tile*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::Tile_Value::AddAction_1 };
			func(this, aiActionType, apSourceTile, aeSourceTrait);
		}

		void ClearActions()
		{
			using func_t = decltype(&Tile_Value::ClearActions);
			static REL::Relocation<func_t> func{ Offsets::Tile_Value::ClearActions };
			func(this);
		}

		void CalculateValue(bool abForceUpdate)
		{
			using func_t = decltype(&Tile_Value::CalculateValue);
			static REL::Relocation<func_t> func{ Offsets::Tile_Value::CalculateValue };
			func(this, abForceUpdate);
		}

		void SetFloat(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&Tile_Value::SetFloat);
			static REL::Relocation<func_t> func{ Offsets::Tile_Value::SetFloat };
			func(this, a_arg1, a_arg2);
		}

		void SetString(char const* apString, bool abClearActions)
		{
			using func_t = decltype(&Tile_Value::SetString);
			static REL::Relocation<func_t> func{ Offsets::Tile_Value::SetString };
			func(this, apString, abClearActions);
		}

	public:
		// members
		Tile_enumTrait eIndex;        // 00
		Tile*          pParent;       // 04
		float          fValue;        // 08
		char*          strValue;      // 0C
		Tile_Action*   pActionListA;  // 10
	};
}
