#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkStorageStringMap.h"

namespace RE
{
	class hkClass;

	class hkRelocationInfo
	{
	public:
		class Finish;
		class Global;
		class Import;
		class Local;

		class Finish
		{
		public:
			// members
			std::int32_t m_fromOffset;  // 00?
			const char*  m_className;   // 04?
		};

		class Global
		{
		public:
			// members
			std::int32_t   m_fromOffset;  // 00?
			void*          m_toAddress;   // 04?
			const hkClass* m_toClass;     // 08?
			std::int32_t   m_related;     // 0C?
		};

		class Import
		{
		public:
			// members
			std::int32_t m_fromOffset;  // 00?
			const char*  m_identifier;  // 04?
		};

		class Local
		{
		public:
			// members
			std::int32_t m_fromOffset;  // 00?
			std::int32_t m_toOffset;    // 04?
		};

		void addImport(std::int32_t off, char const* name)
		{
			using func_t = decltype(&hkRelocationInfo::addImport);
			static REL::Relocation<func_t> func{ Offsets::hkRelocationInfo::addImport };
			func(this, off, name);
		}

	public:
		// members
		std::uint8_t                                                pad00[0x8];  // 00
		hkArray<hkRelocationInfo::Local, hkContainerHeapAllocator>  m_local;     // 08
		hkArray<hkRelocationInfo::Global, hkContainerHeapAllocator> m_global;    // 14?
		hkArray<hkRelocationInfo::Finish, hkContainerHeapAllocator> m_finish;    // 20?
		hkArray<hkRelocationInfo::Import, hkContainerHeapAllocator> m_imports;   // 2C?
		hkStorageStringMap<std::int32_t, hkContainerHeapAllocator>* m_pool;      // 38?
	};
}
