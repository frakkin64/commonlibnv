#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/Copier_HandleOps.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkClassMember_Type.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkMap.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkVariant.h"

namespace RE
{
	class hkClass;
	class hkClassMember;
	class hkClassNameRegistry;
	class hkDataArray;
	class hkDataArray_Value;
	class hkDataObject;
	class hkDataObject_Value;
	class hkObjectResource;
	class hkPackfileData;
	class hkTypeInfoRegistry;

	class Copier
	{
	public:
		using HandleOps = Copier_HandleOps;

		hkResult copyIntoNativeArray(void* address, hkClassMember const& member, hkDataArray const& srcArray)
		{
			using func_t = decltype(&Copier::copyIntoNativeArray);
			static REL::Relocation<func_t> func{ Offsets::Copier::copyIntoNativeArray };
			return func(this, address, member, srcArray);
		}

		hkResult fillNativeMembers(void* dstObject, hkDataObject const& srcObj)
		{
			using func_t = decltype(&Copier::fillNativeMembers);
			static REL::Relocation<func_t> func{ Offsets::Copier::fillNativeMembers };
			return func(this, dstObject, srcObj);
		}

		hkClass const* getMemberClassAndCheck(hkClassMember const& member, hkDataObject const& obj)
		{
			using func_t = decltype(&Copier::getMemberClassAndCheck);
			static REL::Relocation<func_t> func{ Offsets::Copier::getMemberClassAndCheck };
			return func(this, member, obj);
		}

		hkVariant findOrCopy(hkDataObject const& retstr, std::int32_t this_)
		{
			using func_t = decltype(&Copier::findOrCopy);
			static REL::Relocation<func_t> func{ Offsets::Copier::findOrCopy };
			return func(this, retstr, this_);
		}

		hkObjectResource* toObject(hkDataObject const& obj, hkTypeInfoRegistry const* typeReg)
		{
			using func_t = decltype(&Copier::toObject);
			static REL::Relocation<func_t> func{ Offsets::Copier::toObject };
			return func(this, obj, typeReg);
		}

		hkResult fillNativeSimpleMember_hkDataArray__Value_(void* address, hkClassMember_Type mtype, hkDataArray_Value const& value, hkClass const* structClass, std::int32_t owningReference)
		{
			using func_t = decltype(&Copier::fillNativeSimpleMember_hkDataArray__Value_);
			static REL::Relocation<func_t> func{ Offsets::Copier::fillNativeSimpleMember_hkDataArray__Value_ };
			return func(this, address, mtype, value, structClass, owningReference);
		}

		Copier* ctor(hkClassNameRegistry const* creg, std::int32_t allocatedOnHeap)
		{
			using func_t = Copier*(__thiscall*)(Copier*, hkClassNameRegistry const*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::Copier::ctor };
			return func(this, creg, allocatedOnHeap);
		}

		hkResult fillNativeSimpleMember_hkDataObject__Value_(void* address, hkClassMember_Type mtype, hkDataObject_Value const& value, hkClass const* structClass, std::int32_t owningReference)
		{
			using func_t = decltype(&Copier::fillNativeSimpleMember_hkDataObject__Value_);
			static REL::Relocation<func_t> func{ Offsets::Copier::fillNativeSimpleMember_hkDataObject__Value_ };
			return func(this, address, mtype, value, structClass, owningReference);
		}

	public:
		// members
		hkRefPtr<const hkClassNameRegistry>                                           m_classReg;         // 00
		hkRefPtr<hkPackfileData>                                                      m_trackedData;      // 04
		std::int32_t                                                                  m_allocatedOnHeap;  // 08
		hkPointerMap<void*, std::int32_t, hkContainerHeapAllocator>                   m_refCount;         // 0C
		hkMap<hkDataObject_Handle, void*, Copier_HandleOps, hkContainerHeapAllocator> m_copies;           // 18
		hkArray<hkDataObject_Handle, hkContainerHeapAllocator>                        m_copyStack;        // 24
	};
}
