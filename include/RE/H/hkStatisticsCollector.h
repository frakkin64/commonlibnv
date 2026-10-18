#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStatisticsCollector_MemoryType.h"

namespace RE
{
	class hkClass;
	class hkStringPtr;
	class hkVtableClassRegistry;

	class hkStatisticsCollector :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStatisticsCollector };
		static constexpr auto VTABLE{ VTABLE::hkStatisticsCollector };

		using MemoryType = hkStatisticsCollector_MemoryType;

		// override (hkReferencedObject)
		virtual ~hkStatisticsCollector() = default;  // 00

		// add
		virtual void addReferencedObject(const char* a_arg1, const hkReferencedObject* a_arg2, std::int32_t a_arg3);                                       // 03
		virtual void addObject(const hkClass* a_arg1, const char* a_arg2, const void* a_arg3, std::int32_t a_arg4);                                        // 04
		virtual void addChunk(hkStatisticsCollector_MemoryType a_arg1, const char* a_arg2, const void* a_arg3, std::int32_t a_arg4, std::int32_t a_arg5);  // 05
		virtual void pushDir(const char* a_arg1);                                                                                                          // 06
		virtual void popDir();                                                                                                                             // 07

		hkStatisticsCollector* ctor(hkVtableClassRegistry* vtblReg)
		{
			using func_t = hkStatisticsCollector*(__thiscall*)(hkStatisticsCollector*, hkVtableClassRegistry*);
			static REL::Relocation<func_t> func{ Offsets::hkStatisticsCollector::ctor };
			return func(this, vtblReg);
		}

		static std::int32_t getAllocatedSize(void const* p, std::int32_t size)
		{
			using func_t = decltype(&hkStatisticsCollector::getAllocatedSize);
			static REL::Relocation<func_t> func{ Offsets::hkStatisticsCollector::getAllocatedSize };
			return func(p, size);
		}

		void addNormalChunk(char const* name, void const* p, std::int32_t size, std::int32_t allocated)
		{
			using func_t = decltype(&hkStatisticsCollector::addNormalChunk);
			static REL::Relocation<func_t> func{ Offsets::hkStatisticsCollector::addNormalChunk };
			func(this, name, p, size, allocated);
		}

		void addStringPtr(char const* name, hkStringPtr const& str)
		{
			using func_t = decltype(&hkStatisticsCollector::addStringPtr);
			static REL::Relocation<func_t> func{ Offsets::hkStatisticsCollector::addStringPtr };
			func(this, name, str);
		}

	public:
		// members
		const void*            m_clientData;                   // 08
		hkVtableClassRegistry* m_vtblRegistry;                 // 0C
		bool                   m_includeUnmanagedArrayMemory;  // 10?
		std::uint8_t           pad11[0x3];                     // 11
	};
}
