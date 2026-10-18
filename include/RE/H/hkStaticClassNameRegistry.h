#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkClassNameRegistry.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkClass;

	class hkStaticClassNameRegistry :
		public hkClassNameRegistry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStaticClassNameRegistry };
		static constexpr auto VTABLE{ VTABLE::hkStaticClassNameRegistry };

		// override (hkClassNameRegistry)
		virtual ~hkStaticClassNameRegistry() = default;  // 00

		// add
		virtual const char* getName() const;                                                       // 03
		virtual const hkClass* getClassByName(const char* a_arg1) const;                           // 04
		virtual void getClasses(hkArray<hkClass const*, hkContainerHeapAllocator>* a_arg1) const;  // 05

		hkStaticClassNameRegistry* ctor(hkClass const* const* classes, std::int32_t classVersion, char const* name)
		{
			using func_t = hkStaticClassNameRegistry*(__thiscall*)(hkStaticClassNameRegistry*, hkClass const* const*, std::int32_t, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStaticClassNameRegistry::ctor };
			return func(this, classes, classVersion, name);
		}

	public:
		// members
		const char*           m_name;          // 08
		const hkClass* const* m_classes;       // 0C?
		std::int32_t          m_classVersion;  // 10?
		std::int32_t          m_ready;         // 14?
	};
}
