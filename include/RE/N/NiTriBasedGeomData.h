#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData.h"

namespace RE
{
	class NiTriBasedGeomData :
		public NiGeometryData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriBasedGeomData };
		static constexpr auto VTABLE{ VTABLE::NiTriBasedGeomData };

		// add
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C

		// members
		std::uint16_t m_usTriangles;  // 40
		std::uint16_t pad42;          // 42
	};
	static_assert(sizeof(NiTriBasedGeomData) == 0x44);
}
