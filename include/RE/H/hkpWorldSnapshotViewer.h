#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkpWorldSnapshotViewer :
		public hkpWorldViewerBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldSnapshotViewer };
		static constexpr auto VTABLE{ VTABLE::hkpWorldSnapshotViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpWorldSnapshotViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpWorldSnapshotViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldSnapshotViewer::registerViewer };
			func();
		}

	public:
		// members
		bool         m_convert;   // 28?
		std::uint8_t pad29[0x3];  // 29
	};
}
