#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/Copier_HandleOps.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkContainerTempAllocator.h"
#include "RE/H/hkDataClass_MemberInfo.h"
#include "RE/H/hkDataObject.h"
#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkDataObject_Value.h"
#include "RE/H/hkMap.h"

namespace RE
{
	class hkDataArray;
	class hkDataClass;
	class hkDataClassImpl;
	class hkDataWorld;

	class Cloner
	{
	public:
		void copyArray(hkDataArray& dst, hkDataArray const& src, std::int32_t arraySize)
		{
			using func_t = decltype(&Cloner::copyArray);
			static REL::Relocation<func_t> func{ Offsets::Cloner::copyArray };
			func(this, dst, src, arraySize);
		}

		void copyValue(hkDataObject& dstObj, hkDataObject const& srcObj, hkDataClass_MemberInfo const& minfo)
		{
			using func_t = decltype(&Cloner::copyValue);
			static REL::Relocation<func_t> func{ Offsets::Cloner::copyValue };
			func(this, dstObj, srcObj, minfo);
		}

		hkDataClassImpl* findDestClass(char const* classname)
		{
			using func_t = decltype(&Cloner::findDestClass);
			static REL::Relocation<func_t> func{ Offsets::Cloner::findDestClass };
			return func(this, classname);
		}

		void getClassMemberInfos(hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator>& dstInfos, hkDataClass const& dstClass, hkDataClass const& srcClass)
		{
			using func_t = decltype(&Cloner::getClassMemberInfos);
			static REL::Relocation<func_t> func{ Offsets::Cloner::getClassMemberInfos };
			func(this, dstInfos, dstClass, srcClass);
		}

		hkDataObject copyObject(hkDataObject const& result)
		{
			using func_t = decltype(&Cloner::copyObject);
			static REL::Relocation<func_t> func{ Offsets::Cloner::copyObject };
			return func(this, result);
		}

		void copySimpleValue_hkDataObject__Value_(hkDataObject_Value dst, hkDataObject_Value const& src)
		{
			using func_t = decltype(&Cloner::copySimpleValue_hkDataObject__Value_);
			static REL::Relocation<func_t> func{ Offsets::Cloner::copySimpleValue_hkDataObject__Value_ };
			func(this, dst, src);
		}

	public:
		// members
		hkDataWorld*                                                                                m_dstWorld;  // 00
		const hkDataWorld*                                                                          m_srcWorld;  // 04
		hkMap<hkDataObject_Handle, hkDataObject_Handle, Copier_HandleOps, hkContainerHeapAllocator> m_copied;    // 08?
	};
}
