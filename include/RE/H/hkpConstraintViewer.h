#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkDebugDisplayHandler;
	class hkProcessContext;
	class hkpConstraintInstance;
	class hkpEntity;

	class hkpConstraintViewer :
		public hkpWorldViewerBase,  // 00
		public hkpWorldPostSimulationListener  // 28
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintViewer };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpConstraintViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpConstraintViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpConstraintViewer::registerViewer };
			func();
		}

	protected:
		void draw(hkpConstraintInstance* constraint, hkpEntity const* masterEntity, hkDebugDisplayHandler* displayHandler)
		{
			using func_t = decltype(&hkpConstraintViewer::draw);
			static REL::Relocation<func_t> func{ Offsets::hkpConstraintViewer::draw };
			func(this, constraint, masterEntity, displayHandler);
		}

		hkpConstraintViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpConstraintViewer*(__thiscall*)(hkpConstraintViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpConstraintViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkArray<hkpConstraintInstance*, hkContainerHeapAllocator> m_constraints;  // 2C?
	};
}
