#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBound.h"
#include "RE/N/NiGeometryData_DataFlags.h"
#include "RE/N/NiGeometryData_RendererData.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAdditionalGeometryData;
	class NiColorA;
	class NiPoint2;
	class NiPoint3;

	class NiGeometryData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometryData };
		static constexpr auto VTABLE{ VTABLE::NiGeometryData };

		using DataFlags = NiGeometryData_DataFlags;
		using RendererData = NiGeometryData_RendererData;

		enum class Consistency : std::int32_t
		{
			kMUTABLE = 0x0,
			kSTATIC = 0x4000,
			kCONSISTENCY_MASK = 0x7000,
		};

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28

		void SetKeepFlags(std::uint32_t uiKeepFlags)
		{
			using func_t = decltype(&NiGeometryData::SetKeepFlags);
			static REL::Relocation<func_t> func{ Offsets::NiGeometryData::SetKeepFlags };
			func(this, uiKeepFlags);
		}

		void SetCompressFlags(std::uint32_t uiCompressFlags)
		{
			using func_t = decltype(&NiGeometryData::SetCompressFlags);
			static REL::Relocation<func_t> func{ Offsets::NiGeometryData::SetCompressFlags };
			func(this, uiCompressFlags);
		}

		void SetConsistency(NiGeometryData::Consistency eConsistency)
		{
			using func_t = decltype(&NiGeometryData::SetConsistency);
			static REL::Relocation<func_t> func{ Offsets::NiGeometryData::SetConsistency };
			func(this, eConsistency);
		}

	public:
		// members
		std::uint16_t                       m_usVertices;            // 08
		std::uint16_t                       m_usID;                  // 0A
		std::uint16_t                       m_usDataFlags;           // 0C
		std::uint16_t                       m_usDirtyFlags;          // 0E
		NiBound                             m_kBound;                // 10
		NiPoint3*                           m_pkVertex;              // 20
		NiPoint3*                           m_pkNormal;              // 24
		NiColorA*                           m_pkColor;               // 28
		NiPoint2*                           m_pkTexture;             // 2C
		NiPointer<NiAdditionalGeometryData> m_spAdditionalGeomData;  // 30
		NiGeometryData_RendererData*        m_pkBuffData;            // 34
		std::uint8_t                        m_ucKeepFlags;           // 38
		std::uint8_t                        m_ucCompressFlags;       // 39
		bool                                m_bVBLocked;             // 3A
		bool                                m_bVBLockWrite;          // 3B
		bool                                m_bSaveVertexData;       // 3C
		std::uint8_t                        pad3D[0x3];              // 3D
	};
	static_assert(sizeof(NiGeometryData) == 0x40);
}
