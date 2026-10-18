#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometry.h"
#include "RE/N/NiGeometryData_DataFlags.h"

namespace RE
{
	class NiColorA;
	class NiPoint2;
	class NiPoint3;

	class NiLines :
		public NiGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLines };
		static constexpr auto VTABLE{ VTABLE::NiLines };

		NiLines* ctor(std::uint16_t usVertices, NiPoint3* pkVertex, NiColorA* pkColor, NiPoint2* pkTexture, std::uint16_t usNumTextureSets, NiGeometryData_DataFlags eNBTMethod, std::uint8_t* pkFlags)
		{
			using func_t = NiLines*(__thiscall*)(NiLines*, std::uint16_t, NiPoint3*, NiColorA*, NiPoint2*, std::uint16_t, NiGeometryData_DataFlags, std::uint8_t*);
			static REL::Relocation<func_t> func{ Offsets::NiLines::ctor };
			return func(this, usVertices, pkVertex, pkColor, pkTexture, usNumTextureSets, eNBTMethod, pkFlags);
		}
	};
}
