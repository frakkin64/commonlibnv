#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiDX9IndexBufferManager :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9IndexBufferManager };
		static constexpr auto VTABLE{ VTABLE::NiDX9IndexBufferManager };

		class NiDX9IBInfo;

		class NiDX9IBInfo
		{
		public:
			// members
			// not placed: m_uiIBID(absent), m_ucIndex(absent), m_apkIBRes(absent)
		};

		// members
		// not placed: m_pkD3DDevice9(absent), m_pkTempPointConnIB(absent), m_uiTempPointConnLen(absent), m_pkTempLineConnIB(absent), m_uiTempLineConnLen(absent), m_kDefaultResources(absent), m_kManagedResources(absent), m_kSystemMemResources(absent)
	};
}
