#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkResource.h"
#include "RE/H/hkResource_Export.h"
#include "RE/H/hkResource_Import.h"
#include "RE/H/hkVariant.h"

namespace RE
{
	class hkClassNameRegistry;
	class hkTypeInfoRegistry;

	class hkObjectResource :
		public hkResource  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkObjectResource };
		static constexpr auto VTABLE{ VTABLE::hkObjectResource };

		// override (hkResource)
		virtual ~hkObjectResource() = default;  // 00

		// add
		virtual const char* getName() const;                                                                                                                               // 03
		virtual void Unk_04();                                                                                                                                             // 04
		virtual void getImportsExports(hkArray<hkResource_Import, hkContainerHeapAllocator>* a_arg1, hkArray<hkResource_Export, hkContainerHeapAllocator>* a_arg2) const;  // 05
		virtual void* getContentsPointer(const char* a_arg1, const hkTypeInfoRegistry* a_arg2) const;                                                                      // 06
		virtual const char* getContentsTypeName() const;                                                                                                                   // 07
		virtual void* stealContentsPointer(char const* typeName, hkTypeInfoRegistry const* typeRegistry);                                                                  // 08

		void setClassNameRegistry(hkClassNameRegistry const* classReg)
		{
			using func_t = decltype(&hkObjectResource::setClassNameRegistry);
			static REL::Relocation<func_t> func{ Offsets::hkObjectResource::setClassNameRegistry };
			func(this, classReg);
		}

		void setTypeInfoRegistry(hkTypeInfoRegistry const* typeReg)
		{
			using func_t = decltype(&hkObjectResource::setTypeInfoRegistry);
			static REL::Relocation<func_t> func{ Offsets::hkObjectResource::setTypeInfoRegistry };
			func(this, typeReg);
		}

		hkObjectResource* ctor(hkVariant const& v)
		{
			using func_t = hkObjectResource*(__thiscall*)(hkObjectResource*, hkVariant const&);
			static REL::Relocation<func_t> func{ Offsets::hkObjectResource::ctor };
			return func(this, v);
		}

	public:
		// members
		hkVariant                           m_topLevelObject;  // 08
		hkRefPtr<const hkClassNameRegistry> m_classRegistry;   // 10
		hkRefPtr<const hkTypeInfoRegistry>  m_typeRegistry;    // 14
	};
}
