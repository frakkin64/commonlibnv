#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTStringPointerMap.h"

namespace RE
{
	class Tile_MenuStringMap :
		public NiTStringPointerMap<std::int32_t>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Tile_MenuStringMap };
		static constexpr auto VTABLE{ VTABLE::Tile_MenuStringMap };

		// override (NiTStringPointerMap<std::int32_t>)
		virtual ~Tile_MenuStringMap() = default;  // 00
	};
}
