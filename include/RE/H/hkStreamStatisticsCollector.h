#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkStatisticsCollector.h"
#include "RE/H/hkStatisticsCollector_MemoryType.h"

namespace RE
{
	class hkClass;
	class hkReferencedObject;
	class hkVtableClassRegistry;

	class hkStreamStatisticsCollector :
		public hkStatisticsCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStreamStatisticsCollector };
		static constexpr auto VTABLE{ VTABLE::hkStreamStatisticsCollector };

		// override (hkStatisticsCollector)
		virtual ~hkStreamStatisticsCollector() = default;                                                                                                           // 00
		virtual void addReferencedObject(const char* a_arg1, const hkReferencedObject* a_arg2, std::int32_t a_arg3) override;                                       // 03
		virtual void addObject(const hkClass* a_arg1, const char* a_arg2, const void* a_arg3, std::int32_t a_arg4) override;                                        // 04
		virtual void addChunk(hkStatisticsCollector_MemoryType a_arg1, const char* a_arg2, const void* a_arg3, std::int32_t a_arg4, std::int32_t a_arg5) override;  // 05
		virtual void pushDir(const char* a_arg1) override;                                                                                                          // 06
		virtual void popDir() override;                                                                                                                             // 07

		hkStreamStatisticsCollector* ctor(hkVtableClassRegistry* vtblReg, std::int32_t memSize)
		{
			using func_t = hkStreamStatisticsCollector*(__thiscall*)(hkStreamStatisticsCollector*, hkVtableClassRegistry*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkStreamStatisticsCollector::ctor };
			return func(this, vtblReg, memSize);
		}

	public:
		// members
		hkArray<char, hkContainerHeapAllocator>                           m_stream;        // 14?
		hkPointerMap<void const*, std::int32_t, hkContainerHeapAllocator> m_knownObjects;  // 20?
	};
}
