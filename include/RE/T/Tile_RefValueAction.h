#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/Tile_Action.h"

namespace RE
{
	class Tile_Value;

	class Tile_RefValueAction :
		public Tile_Action  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Tile_RefValueAction };
		static constexpr auto VTABLE{ VTABLE::Tile_RefValueAction };

		// override (Tile_Action)
		virtual float QFloat() override;           // 00
		virtual Tile_Value* QRefValue() override;  // 01

		// members
		Tile_Value* pRefValue;  // 0C
	};
}
