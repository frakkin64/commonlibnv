#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkContainerTempAllocator.h"
#include "RE/H/hkDataObject.h"
#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkMap.h"
#include "RE/H/hkOArchive.h"
#include "RE/H/hkStringMap.h"

namespace RE
{
	class hkDataArray;
	class hkDataArray_Value;
	class hkDataClass;
	class hkDataClass_MemberInfo;
	class hkDataObject_Value;
	class hkStreamWriter;
	class hkTagfileWriter_AddDataObjectListener;

	class Writer
	{
	public:
		class HandleOps;
		class ListenerCache;
		class MemberWriteFlags;
		class ObjectDetails;

		class HandleOps
		{
		public:
		};

		class MemberWriteFlags
		{
		public:
			MemberWriteFlags* ctor(std::int32_t nm)
			{
				using func_t = MemberWriteFlags*(__thiscall*)(MemberWriteFlags*, std::int32_t);
				static REL::Relocation<func_t> func{ Offsets::Writer_MemberWriteFlags::ctor };
				return func(this, nm);
			}

			void toBytes(std::uint8_t* out)
			{
				using func_t = decltype(&MemberWriteFlags::toBytes);
				static REL::Relocation<func_t> func{ Offsets::Writer_MemberWriteFlags::toBytes };
				func(this, out);
			}

		public:
			// members
			hkArray<std::uint8_t, hkContainerTempAllocator> m_flags;     // 00?
			std::int32_t                                    m_realSize;  // 0C?
		};

		class ObjectDetails
		{
		public:
			// members
			std::int32_t        wasWritten;          // 00?
			std::int32_t        rememberTag;         // 04?
			std::int32_t        bitfieldStartIndex;  // 08?
			std::int32_t        refCount;            // 0C?
			hkDataObject_Handle handle;              // 10?
		};

		class ListenerCache
		{
		public:
			hkDataObject callListenerAndCache(hkDataObject const& result)
			{
				using func_t = decltype(&ListenerCache::callListenerAndCache);
				static REL::Relocation<func_t> func{ Offsets::Writer_ListenerCache::callListenerAndCache };
				return func(this, result);
			}

		public:
			// members
			hkTagfileWriter_AddDataObjectListener*                                                m_listener;         // 00?
			hkMap<hkDataObject_Handle, std::int32_t, Writer::HandleOps, hkContainerHeapAllocator> m_indexFromHandle;  // 04?
			hkArray<hkDataObject*, hkContainerTempAllocator>                                      m_cachedObjects;    // 10?
		};

		void writeInt(std::int64_t i)
		{
			using func_t = decltype(&Writer::writeInt);
			static REL::Relocation<func_t> func{ Offsets::Writer::writeInt };
			func(this, i);
		}

		std::int32_t worthWriting_hkDataObject__Value_(hkDataObject_Value const& value)
		{
			using func_t = decltype(&Writer::worthWriting_hkDataObject__Value_);
			static REL::Relocation<func_t> func{ Offsets::Writer::worthWriting_hkDataObject__Value_ };
			return func(this, value);
		}

		std::int32_t worthWriting_hkDataArray__Value_(hkDataArray_Value const& value)
		{
			using func_t = decltype(&Writer::worthWriting_hkDataArray__Value_);
			static REL::Relocation<func_t> func{ Offsets::Writer::worthWriting_hkDataArray__Value_ };
			return func(this, value);
		}

		void writeString(char const* s)
		{
			using func_t = decltype(&Writer::writeString);
			static REL::Relocation<func_t> func{ Offsets::Writer::writeString };
			func(this, s);
		}

		std::int32_t writeClass(hkDataClass const& klass)
		{
			using func_t = decltype(&Writer::writeClass);
			static REL::Relocation<func_t> func{ Offsets::Writer::writeClass };
			return func(this, klass);
		}

		void scanObject(hkDataObject const& obj, std::int32_t isStruct)
		{
			using func_t = decltype(&Writer::scanObject);
			static REL::Relocation<func_t> func{ Offsets::Writer::scanObject };
			func(this, obj, isStruct);
		}

		void _writeArrayItems(hkDataArray const& arr, std::int32_t asize)
		{
			using func_t = decltype(&Writer::_writeArrayItems);
			static REL::Relocation<func_t> func{ Offsets::Writer::_writeArrayItems };
			func(this, arr, asize);
		}

		void writeBinaryValue(hkDataObject_Value const& value, hkDataClass_MemberInfo const& minfo)
		{
			using func_t = decltype(&Writer::writeBinaryValue);
			static REL::Relocation<func_t> func{ Offsets::Writer::writeBinaryValue };
			func(this, value, minfo);
		}

		Writer* ctor(hkStreamWriter* sw, hkTagfileWriter_AddDataObjectListener* listener)
		{
			using func_t = Writer*(__thiscall*)(Writer*, hkStreamWriter*, hkTagfileWriter_AddDataObjectListener*);
			static REL::Relocation<func_t> func{ Offsets::Writer::ctor };
			return func(this, sw, listener);
		}

	public:
		// members
		hkOArchive                                                                            m_oa;                     // 00
		hkStringMap<std::int32_t, hkContainerHeapAllocator>                                   m_writtenStrings;         // 10
		hkStringMap<std::int32_t, hkContainerHeapAllocator>                                   m_doneClasses;            // 20
		std::int32_t                                                                          m_currentTag;             // 30
		hkMap<hkDataObject_Handle, std::int32_t, Writer::HandleOps, hkContainerHeapAllocator> m_detailIndexFromObject;  // 34
		hkArray<std::uint8_t, hkContainerTempAllocator>                                       m_bitfieldBuf;            // 40
		hkArray<Writer::ObjectDetails, hkContainerTempAllocator>                              m_details;                // 4C
		Writer::ListenerCache                                                                 m_listenerCache;          // 58
	};
}
