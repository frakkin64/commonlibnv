#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/HK_MEMORY_CLASS.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkResource.h"
#include "RE/H/hkResource_Export.h"
#include "RE/H/hkResource_Import.h"
#include "RE/H/hkStringMap.h"

namespace RE
{
	class hkClassNameRegistry;
	class hkTypeInfo;
	class hkTypeInfoRegistry;

	class hkPackfileData :
		public hkResource  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkPackfileData };
		static constexpr auto VTABLE{ VTABLE::hkPackfileData };

		class Chunk;

		class Chunk
		{
		public:
			// members
			void*           pointer;   // 00?
			std::int32_t    numBytes;  // 04?
			HK_MEMORY_CLASS memClass;  // 08?
		};

		// override (hkResource)
		virtual ~hkPackfileData() = default;  // 00

		// add
		virtual const char* getName();                                                                                                                                     // 03
		virtual void callDestructors();                                                                                                                                    // 04
		virtual void getImportsExports(hkArray<hkResource_Import, hkContainerHeapAllocator>* a_arg1, hkArray<hkResource_Export, hkContainerHeapAllocator>* a_arg2) const;  // 05
		virtual void* getContentsPointer(const char* a_arg1, const hkTypeInfoRegistry* a_arg2) const;                                                                      // 06
		virtual const char* getContentsTypeName() const;                                                                                                                   // 07

		hkPackfileData* ctor()
		{
			using func_t = hkPackfileData*(__thiscall*)(hkPackfileData*);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileData::ctor };
			return func(this);
		}

	public:
		// members
		void*                                                      m_topLevelObject;         // 08
		char*                                                      m_name;                   // 0C
		hkPointerMap<void*, char const*, hkContainerHeapAllocator> m_trackedObjects;         // 10
		hkStringMap<hkTypeInfo const*, hkContainerHeapAllocator>   m_trackedTypes;           // 1C
		hkRefPtr<const hkClassNameRegistry>                        m_packfileClassRegistry;  // 2C
		std::int32_t                                               m_destructorsEnabled;     // 30
		hkArray<void*, hkContainerHeapAllocator>                   m_memory;                 // 34
		hkArray<hkPackfileData::Chunk, hkContainerHeapAllocator>   m_chunks;                 // 40?
		hkArray<hkResource_Export, hkContainerHeapAllocator>       m_exports;                // 4C?
		hkArray<hkResource_Import, hkContainerHeapAllocator>       m_imports;                // 58?
	};
}
