#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPackfileWriter_AddObjectListener.h"
#include "RE/H/hkPackfileWriter_Options.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSerializeMultiMap.h"
#include "RE/H/hkStringMap.h"
#include "RE/H/hkVariant.h"

namespace RE
{
	class hkClass;
	class hkClassEnum;
	class hkStreamWriter;
	class hkVtableClassRegistry;

	class hkPackfileWriter :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkPackfileWriter };
		static constexpr auto VTABLE{ VTABLE::hkPackfileWriter };

		using AddObjectListener = hkPackfileWriter_AddObjectListener;
		using Options = hkPackfileWriter_Options;

		class PendingWrite;

		class PendingWrite
		{
		public:
			// members
			const void*    m_pointer;       // 00?
			const hkClass* m_klass;         // 04?
			const void*    m_origPointer;   // 08?
			const hkClass* m_origClass;     // 0C?
			std::int32_t   m_sectionIndex;  // 10?
			std::int32_t   m_dataSize;      // 14?
		};

		// override (hkReferencedObject)
		virtual ~hkPackfileWriter() = default;  // 00

		// add
		virtual void setContentsWithRegistry(void const* pointer, hkClass const& klass, hkVtableClassRegistry const* classRegistry, hkPackfileWriter_AddObjectListener* addListener);  // 03
		virtual void setContents(void const* object, hkClass const& klass, hkPackfileWriter_AddObjectListener* addListen);                                                             // 04
		virtual void addImport(void const* object, char const* id);                                                                                                                    // 05
		virtual void addExport(void const* object, char const* id);                                                                                                                    // 06
		virtual hkResult save(hkStreamWriter* a_arg1, const hkPackfileWriter_Options* a_arg2);                                                                                         // 07
		virtual void addSection(char const* sectionTag);                                                                                                                               // 08
		virtual void setSectionForPointer(void const* ptr, char const* sectionTag);                                                                                                    // 09
		virtual void setSectionForClass(hkClass const& k, char const* sectionTag);                                                                                                     // 0A

		static void getCurrentVersion(char* buf, std::int32_t bufLen)
		{
			using func_t = decltype(&hkPackfileWriter::getCurrentVersion);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileWriter::getCurrentVersion };
			func(buf, bufLen);
		}

		hkPackfileWriter* ctor()
		{
			using func_t = hkPackfileWriter*(__thiscall*)(hkPackfileWriter*);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileWriter::ctor };
			return func(this);
		}

	protected:
		std::int32_t notDuplicateMetaData(void const* pointer, hkClass const* klass)
		{
			using func_t = decltype(&hkPackfileWriter::notDuplicateMetaData);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileWriter::notDuplicateMetaData };
			return func(this, pointer, klass);
		}

		std::uint32_t findSectionFor(void const* pointer, hkClass const& klass, char const* sectionTag)
		{
			using func_t = decltype(&hkPackfileWriter::findSectionFor);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileWriter::findSectionFor };
			return func(this, pointer, klass, sectionTag);
		}

		void addObject(void const* pointerIn, hkClass const& klassIn, hkVtableClassRegistry const* classRegistry, hkPackfileWriter_AddObjectListener* addListener, char const* sectionTag)
		{
			using func_t = decltype(&hkPackfileWriter::addObject);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileWriter::addObject };
			func(this, pointerIn, klassIn, classRegistry, addListener, sectionTag);
		}

	public:
		// members
		hkArray<hkPackfileWriter::PendingWrite, hkContainerHeapAllocator>  m_pendingWrites;                   // 08?
		hkPointerMap<void const*, std::int32_t, hkContainerHeapAllocator>  m_knownObjects;                    // 14?
		hkPointerMap<void const*, char const*, hkContainerHeapAllocator>   m_imports;                         // 20?
		hkPointerMap<void const*, char const*, hkContainerHeapAllocator>   m_exports;                         // 2C?
		hkStringMap<hkClass const*, hkContainerHeapAllocator>              m_knownClasses;                    // 38?
		hkStringMap<hkClassEnum const*, hkContainerHeapAllocator>          m_knownEnums;                      // 48?
		hkPointerMap<void const*, void const*, hkContainerHeapAllocator>   m_replacements;                    // 58?
		hkArray<char*, hkContainerHeapAllocator>                           m_knownSections;                   // 64?
		hkStringMap<std::int32_t, hkContainerHeapAllocator>                m_sectionTagToIndex;               // 70?
		hkArray<hkVariant, hkContainerHeapAllocator>                       m_objectsWithUnregisteredClass;    // 80?
		std::int32_t                                                       m_contentsPtrPWIndex;              // 8C?
		std::int32_t                                                       m_contentsClassPWIndex;            // 90?
		std::int32_t                                                       m_numDataInstances;                // 94?
		std::int32_t                                                       m_numClassInstances;               // 98?
		hkPointerMap<void const*, std::uint32_t, hkContainerHeapAllocator> m_sectionOverrideByPointer;        // 9C?
		hkStringMap<std::uint32_t, hkContainerHeapAllocator>               m_sectionOverrideByType;           // A8?
		hkSerializeMultiMap<void const*, std::int32_t>                     m_pwIndexesFromReferencedPointer;  // B8?
	};
}
