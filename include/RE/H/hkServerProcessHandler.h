#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkCommandRouter.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkProcess.h"
#include "RE/H/hkProcessHandler.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkProcessContext;
	class hkStreamReader;
	class hkStreamWriter;

	class hkServerProcessHandler :
		public hkReferencedObject,  // 00
		public hkProcessHandler,  // 08
		public hkProcess  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkServerProcessHandler };
		static constexpr auto VTABLE{ VTABLE::hkServerProcessHandler };

		// override (hkReferencedObject)
		virtual ~hkServerProcessHandler() = default;  // 00

		hkServerProcessHandler* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator>& contexts, hkStreamReader* inStream, hkStreamWriter* outStream)
		{
			using func_t = hkServerProcessHandler*(__thiscall*)(hkServerProcessHandler*, hkArray<hkProcessContext*, hkContainerHeapAllocator>&, hkStreamReader*, hkStreamWriter*);
			static REL::Relocation<func_t> func{ Offsets::hkServerProcessHandler::ctor };
			return func(this, contexts, inStream, outStream);
		}

	public:
		// members
		hkCommandRouter                                      m_commandRouter;  // 24?
		hkArray<hkProcess*, hkContainerHeapAllocator>        m_processList;    // 38?
		hkArray<hkProcessContext*, hkContainerHeapAllocator> m_contexts;       // 44?
	};
}
