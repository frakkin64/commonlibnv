#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkDisplaySerializeIStream;
	class hkProcess;

	class hkCommandRouter :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkCommandRouter };
		static constexpr auto VTABLE{ VTABLE::hkCommandRouter };

		// override (hkReferencedObject)
		virtual ~hkCommandRouter() = default;  // 00

		hkBool consumeCommands(hkDisplaySerializeIStream* result)
		{
			using func_t = decltype(&hkCommandRouter::consumeCommands);
			static REL::Relocation<func_t> func{ Offsets::hkCommandRouter::consumeCommands };
			return func(this, result);
		}

	public:
		// members
		hkPointerMap<std::uint8_t, hkProcess*, hkContainerHeapAllocator> m_commandMap;  // 08?
	};
}
