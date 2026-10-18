#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;
	class hkVector4;
	class hkpMouseSpringAction;
	class hkpWorld;

	class hkpMousePickingViewer :
		public hkpWorldViewerBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMousePickingViewer };
		static constexpr auto VTABLE{ VTABLE::hkpMousePickingViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpMousePickingViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpMousePickingViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpMousePickingViewer::registerViewer };
			func();
		}

		hkBool pickObject(std::uint64_t result, hkVector4 const& id)
		{
			using func_t = decltype(&hkpMousePickingViewer::pickObject);
			static REL::Relocation<func_t> func{ Offsets::hkpMousePickingViewer::pickObject };
			return func(this, result, id);
		}

	protected:
		hkpMousePickingViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpMousePickingViewer*(__thiscall*)(hkpMousePickingViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpMousePickingViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkpWorld*             m_currentWorld;                 // 28
		hkpMouseSpringAction* m_mouseSpring;                  // 2C
		float                 m_mouseSpringMaxRelativeForce;  // 30
	};
}
