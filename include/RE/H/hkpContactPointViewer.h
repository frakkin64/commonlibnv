#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;
	class hkpSimulationIsland;
	class hkpWorld;

	class hkpContactPointViewer :
		public hkpWorldViewerBase,  // 00
		public hkpWorldPostSimulationListener  // 28
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpContactPointViewer };
		static constexpr auto VTABLE{ VTABLE::hkpContactPointViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpContactPointViewer() = default;  // 00

		// add
		virtual const hkArray<hkpSimulationIsland*, hkContainerHeapAllocator>* getIslands(hkpWorld* a_arg1);  // 03

	protected:
		hkpContactPointViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts, std::int32_t color)
		{
			using func_t = hkpContactPointViewer*(__thiscall*)(hkpContactPointViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpContactPointViewer::ctor };
			return func(this, contexts, color);
		}

		void drawAllContactPointsInIsland(hkpSimulationIsland const* island)
		{
			using func_t = decltype(&hkpContactPointViewer::drawAllContactPointsInIsland);
			static REL::Relocation<func_t> func{ Offsets::hkpContactPointViewer::drawAllContactPointsInIsland };
			func(this, island);
		}

	public:
		// members
		float              m_limit;  // 2C?
		const std::int32_t m_color;  // 30?
	};
}
