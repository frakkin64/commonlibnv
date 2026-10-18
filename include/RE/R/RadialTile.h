#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TileImage.h"

namespace RE
{
	class RadialTile :
		public TileImage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RadialTile };
		static constexpr auto VTABLE{ VTABLE::RadialTile };

		// override (TileImage)
		virtual ~RadialTile() = default;                               // 00
		virtual bool SpecialBoundsCheck(float fx, float fy) override;  // 05

		RadialTile* ctor()
		{
			using func_t = RadialTile*(__thiscall*)(RadialTile*);
			static REL::Relocation<func_t> func{ Offsets::RadialTile::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(RadialTile) == 0x48);
}
