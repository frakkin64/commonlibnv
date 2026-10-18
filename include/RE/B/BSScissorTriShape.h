#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData_DataFlags.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTriShape.h"

namespace RE
{
	class NiCloningProcess;
	class NiColorA;
	class NiObject;
	class NiPoint2;
	class NiPoint3;
	class NiRenderer;

	class BSScissorTriShape :
		public NiTriShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSScissorTriShape };
		static constexpr auto VTABLE{ VTABLE::BSScissorTriShape };

		// override (NiTriShape)
		virtual ~BSScissorTriShape() = default;                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void RenderImmediate(NiRenderer* pkRenderer) override;                // 37

		BSScissorTriShape* ctor(std::uint16_t usVertices, NiPoint3* pkVertex, NiPoint3* pkNormal, NiColorA* pkColor, NiPoint2* pkTexture, std::uint16_t usNumTextureSets, NiGeometryData_DataFlags eNBTMethod, std::uint16_t usTriangles, std::uint16_t* pusTriList, std::int32_t aiLeft, std::int32_t aiTop, std::int32_t aiRight, std::int32_t aiBottom)
		{
			using func_t = BSScissorTriShape*(__thiscall*)(BSScissorTriShape*, std::uint16_t, NiPoint3*, NiPoint3*, NiColorA*, NiPoint2*, std::uint16_t, NiGeometryData_DataFlags, std::uint16_t, std::uint16_t*, std::int32_t, std::int32_t, std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BSScissorTriShape::ctor };
			return func(this, usVertices, pkVertex, pkNormal, pkColor, pkTexture, usNumTextureSets, eNBTMethod, usTriangles, pusTriList, aiLeft, aiTop, aiRight, aiBottom);
		}

	public:
		// members
		tagRECT kRect;  // C4
	};
	static_assert(sizeof(BSScissorTriShape) == 0xD4);
}
