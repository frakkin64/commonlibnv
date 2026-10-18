#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAdditionalGeometryData_NiAGDDataBlock.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiStream;

	class NiAdditionalGeometryData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAdditionalGeometryData };
		static constexpr auto VTABLE{ VTABLE::NiAdditionalGeometryData };

		using NiAGDDataBlock = NiAdditionalGeometryData_NiAGDDataBlock;

		class NiAGDDataStream;

		class NiAGDDataStream
		{
		public:
			void GetViewerStrings(NiTPrimitiveArray<char*>* pkStrings)
			{
				using func_t = decltype(&NiAGDDataStream::GetViewerStrings);
				static REL::Relocation<func_t> func{ Offsets::NiAdditionalGeometryData_NiAGDDataStream::GetViewerStrings };
				func(this, pkStrings);
			}

		public:
			// members
			std::uint8_t  m_uFlags;         // 00
			std::uint8_t  pad01[0x3];       // 01
			std::uint32_t m_uiType;         // 04
			std::uint32_t m_uiUnitSize;     // 08
			std::uint32_t m_uiTotalSize;    // 0C
			std::uint32_t m_uiStride;       // 10
			std::uint32_t m_uiBlockIndex;   // 14
			std::uint32_t m_uiBlockOffset;  // 18
		};
		static_assert(sizeof(NiAGDDataStream) == 0x1C);

		// override (NiObject)
		virtual ~NiAdditionalGeometryData() = default;                                // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// add
		virtual bool GetVBReady();                                              // 23
		virtual NiAdditionalGeometryData_NiAGDDataBlock* CreateAGDDataBlock();  // 24

		NiAdditionalGeometryData* ctor(std::uint16_t usVertexCount)
		{
			using func_t = NiAdditionalGeometryData*(__thiscall*)(NiAdditionalGeometryData*, std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::NiAdditionalGeometryData::ctor };
			return func(this, usVertexCount);
		}

		NiAdditionalGeometryData* ctor(std::uint16_t usVertexCount, std::uint32_t uiDataStreamCount, std::uint32_t uiD3DStream)
		{
			using func_t = NiAdditionalGeometryData*(__thiscall*)(NiAdditionalGeometryData*, std::uint16_t, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::NiAdditionalGeometryData::ctor_1 };
			return func(this, usVertexCount, uiDataStreamCount, uiD3DStream);
		}

	public:
		// members
		std::uint32_t                                               m_uiRevID;              // 08
		std::uint16_t                                               m_usVertexCount;        // 0C
		std::uint16_t                                               pad0E;                  // 0E
		std::uint32_t                                               m_uiDataStreamCount;    // 10
		NiAdditionalGeometryData::NiAGDDataStream*                  m_pkDataStreamEntries;  // 14
		std::uint32_t                                               m_uiD3DStream;          // 18
		NiTPrimitiveArray<NiAdditionalGeometryData_NiAGDDataBlock*> m_aDataBlocks;          // 1C
	};
	static_assert(sizeof(NiAdditionalGeometryData) == 0x2C);
}
