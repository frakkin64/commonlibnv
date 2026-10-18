#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiGeometryData;
	class NiSkinInstance;
	class NiSkinPartition_Partition;
	class NiVBChip;

	class NiDX9VertexBufferManager :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9VertexBufferManager };
		static constexpr auto VTABLE{ VTABLE::NiDX9VertexBufferManager };

		class NiDX9VBInfo;

		class NiDX9VBInfo
		{
		public:
			// members
			// not placed: m_uiVBID(absent), m_ucIndex(absent), m_pkVBRes(absent)
		};

		NiVBChip* PackSkinnedVB(NiGeometryData* pkData, NiSkinInstance const* pkSkin, NiSkinPartition_Partition* pkPartition, std::uint16_t usDirtyFlags, void* pakVertexElements, NiVBChip* pkOldVBChip, void* pvLockedBuff)
		{
			using func_t = decltype(&NiDX9VertexBufferManager::PackSkinnedVB);
			static REL::Relocation<func_t> func{ Offsets::NiDX9VertexBufferManager::PackSkinnedVB };
			return func(this, pkData, pkSkin, pkPartition, usDirtyFlags, pakVertexElements, pkOldVBChip, pvLockedBuff);
		}

	public:
		// members
		// not placed: m_pkD3DDevice9(absent), m_kDefaultResources(absent), m_kManagedResources(absent), m_kSystemMemResources(absent), m_uiFrameID(absent)
	};
}
