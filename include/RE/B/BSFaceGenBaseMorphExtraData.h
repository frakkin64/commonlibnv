#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiGeometry;
	class NiGeometryData;
	class NiPoint3;

	class BSFaceGenBaseMorphExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenBaseMorphExtraData };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenBaseMorphExtraData };

		// override (NiExtraData)
		virtual ~BSFaceGenBaseMorphExtraData() = default;  // 00

		BSFaceGenBaseMorphExtraData* ctor(NiGeometry* apMesh, NiPoint3* apAdditionalVertices, std::uint32_t aiAdditionalVerticesCount)
		{
			using func_t = BSFaceGenBaseMorphExtraData*(__thiscall*)(BSFaceGenBaseMorphExtraData*, NiGeometry*, NiPoint3*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenBaseMorphExtraData::ctor };
			return func(this, apMesh, apAdditionalVertices, aiAdditionalVerticesCount);
		}

		static void InitSDM()
		{
			using func_t = decltype(&BSFaceGenBaseMorphExtraData::InitSDM);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenBaseMorphExtraData::InitSDM };
			func();
		}

	public:
		// members
		// not placed: iVertsModelCount
		NiPoint3*                 pVerts;            // 0C
		NiPointer<NiGeometryData> spMorphModelData;  // 10
		std::uint32_t             iVertsCount;       // 14
	};
	static_assert(sizeof(BSFaceGenBaseMorphExtraData) == 0x18);
}
