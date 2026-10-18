#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometry.h"

namespace RE
{
	class NiTriBasedGeom :
		public NiGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriBasedGeom };
		static constexpr auto VTABLE{ VTABLE::NiTriBasedGeom };

		// add
		virtual void Unk_3C();  // 3C

		std::uint16_t GetActiveTriangleCount() const
		{
			using func_t = decltype(&NiTriBasedGeom::GetActiveTriangleCount);
			static REL::Relocation<func_t> func{ Offsets::NiTriBasedGeom::GetActiveTriangleCount };
			return func(this);
		}
	};
}
