#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData_DataFlags.h"
#include "RE/N/NiTriBasedGeomData.h"

namespace RE
{
	class NiColorA;
	class NiPoint2;
	class NiPoint3;

	class NiTriShapeData :
		public NiTriBasedGeomData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriShapeData };
		static constexpr auto VTABLE{ VTABLE::NiTriShapeData };

		class SNAMemBlock;
		class SharedNormalArray;

		class SNAMemBlock
		{
		public:
			// members
			std::uint16_t*               m_pusBlock;         // 00?
			std::uint16_t*               m_pusFreeBlock;     // 04?
			std::uint32_t                m_uiBlockSize;      // 08?
			std::uint32_t                m_uiFreeBlockSize;  // 0C?
			NiTriShapeData::SNAMemBlock* m_pkNext;           // 10?
		};

		class SharedNormalArray
		{
		public:
			// members
			std::uint16_t  m_usNumSharedNormals;         // 00?
			std::uint16_t  pad02;                        // 02
			std::uint16_t* m_pusSharedNormalIndexArray;  // 04?
		};

		NiTriShapeData* ctor(std::uint16_t usVertices, NiPoint3* pkVertex, NiPoint3* pkNormal, NiColorA* pkColor, NiPoint2* pkTexture, std::uint16_t usNumTextureSets, NiGeometryData_DataFlags eNBTMethod, std::uint16_t usTriangles, std::uint16_t* pusTriList)
		{
			using func_t = NiTriShapeData*(__thiscall*)(NiTriShapeData*, std::uint16_t, NiPoint3*, NiPoint3*, NiColorA*, NiPoint2*, std::uint16_t, NiGeometryData_DataFlags, std::uint16_t, std::uint16_t*);
			static REL::Relocation<func_t> func{ Offsets::NiTriShapeData::ctor };
			return func(this, usVertices, pkVertex, pkNormal, pkColor, pkTexture, usNumTextureSets, eNBTMethod, usTriangles, pusTriList);
		}

	public:
		// members
		std::uint32_t                      m_uiTriListLength;           // 44
		std::uint16_t*                     m_pusTriList;                // 48
		NiTriShapeData::SharedNormalArray* m_pkSharedNormals;           // 4C
		std::uint16_t                      m_usSharedNormalsArraySize;  // 50
		std::uint16_t                      pad52;                       // 52
		NiTriShapeData::SNAMemBlock*       m_pkSNAMemoryBlocks;         // 54
	};
	static_assert(sizeof(NiTriShapeData) == 0x58);
}
