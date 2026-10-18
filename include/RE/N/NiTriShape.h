#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData_DataFlags.h"
#include "RE/N/NiTriBasedGeom.h"

namespace RE
{
	class NiColorA;
	class NiPoint2;
	class NiPoint3;

	class NiTriShape :
		public NiTriBasedGeom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriShape };
		static constexpr auto VTABLE{ VTABLE::NiTriShape };

		NiTriShape* ctor(std::uint16_t usVertices, NiPoint3* pkVertex, NiPoint3* pkNormal, NiColorA* pkColor, NiPoint2* pkTexture, std::uint16_t usNumTextureSets, NiGeometryData_DataFlags eNBTMethod, std::uint16_t usTriangles, std::uint16_t* pusTriList)
		{
			using func_t = NiTriShape*(__thiscall*)(NiTriShape*, std::uint16_t, NiPoint3*, NiPoint3*, NiColorA*, NiPoint2*, std::uint16_t, NiGeometryData_DataFlags, std::uint16_t, std::uint16_t*);
			static REL::Relocation<func_t> func{ Offsets::NiTriShape::ctor };
			return func(this, usVertices, pkVertex, pkNormal, pkColor, pkTexture, usNumTextureSets, eNBTMethod, usTriangles, pusTriList);
		}
	};
}
