#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkRefVariant.h"
#include "RE/H/hkResourceBase_Type.h"
#include "RE/H/hkResourceHandle.h"
#include "RE/H/hkResourceHandle_Link.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkClass;
	class hkStringBuf;

	class hkMemoryResourceHandle :
		public hkResourceHandle  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryResourceHandle };
		static constexpr auto VTABLE{ VTABLE::hkMemoryResourceHandle };

		class ExternalLink;

		class ExternalLink
		{
		public:
			// members
			hkStringPtr m_memberName;  // 00?
			hkStringPtr m_externalId;  // 04?
		};

		// override (hkResourceHandle)
		virtual ~hkMemoryResourceHandle() = default;  // 00

		// add
		virtual hkResourceBase_Type getType();                                                              // 03
		virtual const char* getName(hkStringBuf* a_arg1) const;                                             // 04
		virtual void setName(char const* name);                                                             // 05
		virtual void* getObject() const;                                                                    // 06
		virtual const hkClass* getClass() const;                                                            // 07
		virtual void setObject(void* object, hkClass const* klass);                                         // 08
		virtual void addExternalLink(char const* memberName, char const* externalId);                       // 09
		virtual void removeExternalLink(char const* memberName);                                            // 0A
		virtual void getExternalLinks(hkArray<hkResourceHandle_Link, hkContainerHeapAllocator>& linksOut);  // 0B
		virtual void clearExternalLinks();                                                                  // 0C
		virtual void Unk_0D();                                                                              // 0D

		hkMemoryResourceHandle* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkMemoryResourceHandle*(__thiscall*)(hkMemoryResourceHandle*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryResourceHandle::ctor };
			return func(this, flag);
		}

	public:
		// members
		hkRefVariant                                                            m_variant;     // 08
		hkStringPtr                                                             m_name;        // 0C
		hkArray<hkMemoryResourceHandle::ExternalLink, hkContainerHeapAllocator> m_references;  // 10?
	};
}
