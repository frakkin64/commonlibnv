#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkObjectWriter.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkResult.h"

namespace RE
{
	class hkClass;
	class hkObjectCopier;
	class hkRelocationInfo;
	class hkStreamWriter;
	class hkStructureLayout;

	class hkPlatformObjectWriter :
		public hkObjectWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkPlatformObjectWriter };
		static constexpr auto VTABLE{ VTABLE::hkPlatformObjectWriter };

		class Cache;

		class Cache
		{
		public:
			Cache* ctor()
			{
				using func_t = Cache*(__thiscall*)(Cache*);
				static REL::Relocation<func_t> func{ Offsets::hkPlatformObjectWriter_Cache::ctor };
				return func(this);
			}

		public:
			// members
			hkPointerMap<void const*, void*, hkContainerHeapAllocator>           m_platformClassFromHostClass;  // 00?
			hkPointerMap<hkClass const*, std::int32_t, hkContainerHeapAllocator> m_platformClassComputed;       // 0C?
			hkArray<void*, hkContainerHeapAllocator>                             m_allocations;                 // 18?
		};

		// override (hkObjectWriter)
		virtual ~hkPlatformObjectWriter() = default;  // 00

		// add
		virtual hkResult writeObject(hkStreamWriter* writer, void const* dataIn, hkClass const& klass, hkRelocationInfo& reloc);  // 03
		virtual hkResult writeRaw(hkStreamWriter* writer, void const* data, std::int32_t dataLen);                                // 04

		hkPlatformObjectWriter* ctor(hkStructureLayout const& layout)
		{
			using func_t = hkPlatformObjectWriter*(__thiscall*)(hkPlatformObjectWriter*, hkStructureLayout const&);
			static REL::Relocation<func_t> func{ Offsets::hkPlatformObjectWriter::ctor };
			return func(this, layout);
		}

	public:
		// members
		hkObjectCopier*                m_copier;  // 08
		hkPlatformObjectWriter::Cache* m_cache;   // 0C?
	};
}
