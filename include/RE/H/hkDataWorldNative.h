#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataWorld.h"
#include "RE/H/hkDataWorld_DataWorldType.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkStringMap.h"
#include "RE/H/hkVariant.h"

namespace RE
{
	class hkClass;
	class hkClassNameRegistry;
	class hkDataArrayImpl;
	class hkDataClass;
	class hkDataClassImpl;
	class hkDataClassNative;
	class hkDataClass_Cinfo;
	class hkDataClass_MemberInfo;
	class hkDataObject;
	class hkDataObjectImpl;
	class hkDataObject_Handle;
	class hkVtableClassRegistry;

	class hkDataWorldNative :
		public hkDataWorld  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataWorldNative };
		static constexpr auto VTABLE{ VTABLE::hkDataWorldNative };

		// override (hkDataWorld)
		virtual ~hkDataWorldNative() = default;  // 00

		// add
		virtual hkDataClassImpl* newClass(hkDataClass_Cinfo const& cinfo);                                                                // 03
		virtual hkDataObjectImpl* newObject(const hkDataClass* a_arg1) const;                                                             // 04
		virtual hkDataArrayImpl* newArray(hkDataObject* a_arg1, const hkDataClass_MemberInfo* a_arg2);                                    // 05
		virtual hkEnum<hkDataWorld_DataWorldType, std::int32_t>* getType(hkEnum<hkDataWorld_DataWorldType, std::int32_t>* a_arg1) const;  // 06
		virtual hkDataObject* getContents(hkDataObject* a_arg1) const;                                                                    // 07
		virtual void findAllClasses(hkArray<hkDataClassImpl*, hkContainerHeapAllocator>* a_arg1) const;                                   // 08
		virtual hkDataClassImpl* findClass(const char* a_arg1) const;                                                                     // 09
		virtual hkDataObject* findObject(hkDataObject* a_arg1, const hkDataObject_Handle* a_arg2) const;                                  // 0A

		hkDataWorldNative* ctor()
		{
			using func_t = hkDataWorldNative*(__thiscall*)(hkDataWorldNative*);
			static REL::Relocation<func_t> func{ Offsets::hkDataWorldNative::ctor };
			return func(this);
		}

		void setContents(void* object, hkClass const& klass)
		{
			using func_t = decltype(&hkDataWorldNative::setContents);
			static REL::Relocation<func_t> func{ Offsets::hkDataWorldNative::setContents };
			func(this, object, klass);
		}

	public:
		// members
		hkRefPtr<const hkClassNameRegistry>                       m_reg;       // 08
		hkRefPtr<const hkVtableClassRegistry>                     m_vtable;    // 0C
		hkStringMap<hkDataClassNative*, hkContainerHeapAllocator> m_classes;   // 10
		hkVariant                                                 m_contents;  // 20?
	};
}
