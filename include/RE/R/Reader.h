#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataObject.h"
#include "RE/H/hkDataObject_Value.h"
#include "RE/H/hkIArchive.h"
#include "RE/H/hkLocalArray.h"

namespace RE
{
	class hkDataArray;
	class hkDataClassImpl;
	class hkDataClass_MemberInfo;
	class hkDataObjectImpl;
	class hkDataWorld;
	class hkOstreamLogger;

	class Reader
	{
	public:
		std::int32_t readInt_int_()
		{
			using func_t = decltype(&Reader::readInt_int_);
			static REL::Relocation<func_t> func{ Offsets::Reader::readInt_int_ };
			return func(this);
		}

		char const* readString()
		{
			using func_t = decltype(&Reader::readString);
			static REL::Relocation<func_t> func{ Offsets::Reader::readString };
			return func(this);
		}

		void readBitfield(std::int32_t numMembers, hkLocalArray<std::uint8_t>& bout)
		{
			using func_t = decltype(&Reader::readBitfield);
			static REL::Relocation<func_t> func{ Offsets::Reader::readBitfield };
			func(this, numMembers, bout);
		}

		void _readArrayItems(hkDataArray& arr, std::int32_t nelem)
		{
			using func_t = decltype(&Reader::_readArrayItems);
			static REL::Relocation<func_t> func{ Offsets::Reader::_readArrayItems };
			func(this, arr, nelem);
		}

		void readBinaryValue(hkDataObject_Value value, hkDataClass_MemberInfo const& minfo)
		{
			using func_t = decltype(&Reader::readBinaryValue);
			static REL::Relocation<func_t> func{ Offsets::Reader::readBinaryValue };
			func(this, value, minfo);
		}

		hkDataObject readObject(std::int32_t result)
		{
			using func_t = decltype(&Reader::readObject);
			static REL::Relocation<func_t> func{ Offsets::Reader::readObject };
			return func(this, result);
		}

		hkDataObject readObjectTree()
		{
			using func_t = decltype(&Reader::readObjectTree);
			static REL::Relocation<func_t> func{ Offsets::Reader::readObjectTree };
			return func(this);
		}

	public:
		// members
		hkIArchive                                           m_ia;                 // 00
		hkDataWorld*                                         m_world;              // 10
		hkOstreamLogger*                                     m_log;                // 14
		hkArray<hkDataClassImpl*, hkContainerHeapAllocator>  m_classes;            // 18
		hkArray<char*, hkContainerHeapAllocator>             m_prevStrings;        // 24
		hkArray<hkDataObjectImpl*, hkContainerHeapAllocator> m_rememberedObjects;  // 30
	};
}
