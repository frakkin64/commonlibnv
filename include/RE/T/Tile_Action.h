#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/Tile_VALUE_ACTION.h"

namespace RE
{
	class Tile_Value;

	class __declspec(novtable) Tile_Action
	{
	public:
		static constexpr auto RTTI{ RTTI::Tile_Action };
		static constexpr auto VTABLE{ VTABLE::Tile_Action };

		// add
		virtual float QFloat();           // 00
		virtual Tile_Value* QRefValue();  // 01

		// members
		Tile_VALUE_ACTION eActionType;  // 04
		Tile_Action*      pnext;        // 08
	};
	static_assert(sizeof(Tile_Action) == 0xC);
}
