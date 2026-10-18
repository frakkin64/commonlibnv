#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkResourceBase_Type.h"
#include "RE/H/hkResourceContainer.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkClass;
	class hkMemoryResourceHandle;
	class hkResourceHandle;
	class hkStringBuf;

	class hkMemoryResourceContainer :
		public hkResourceContainer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryResourceContainer };
		static constexpr auto VTABLE{ VTABLE::hkMemoryResourceContainer };

		// override (hkResourceContainer)
		virtual ~hkMemoryResourceContainer() = default;  // 00

		// add
		virtual hkResourceBase_Type getType();                                                                                          // 03
		virtual const char* getName(hkStringBuf* a_arg1) const;                                                                         // 04
		virtual hkResourceHandle* createResource(char const* name, void* object, hkClass const* klass);                                 // 05
		virtual void destroyResource(hkResourceHandle* resourceHandle);                                                                 // 06
		virtual std::int32_t getNumResources();                                                                                         // 07
		virtual hkResourceHandle* findResourceByName(const char* a_arg1, const hkClass* a_arg2, const hkResourceHandle* a_arg3) const;  // 08
		virtual hkResourceContainer* getParent();                                                                                       // 09
		virtual hkResourceContainer* createContainer(char const* name);                                                                 // 0A
		virtual void destroyContainer(hkResourceContainer* container2);                                                                 // 0B
		virtual std::int32_t getNumContainers();                                                                                        // 0C
		virtual hkResourceContainer* findContainerByName(const char* a_arg1, const hkResourceContainer* a_arg2) const;                  // 0D
		virtual hkResult parentTo(hkResourceContainer* newParent);                                                                      // 0E
		virtual void Unk_0F();                                                                                                          // 0F

		hkMemoryResourceContainer* ctor(char const* name)
		{
			using func_t = hkMemoryResourceContainer*(__thiscall*)(hkMemoryResourceContainer*, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryResourceContainer::ctor };
			return func(this, name);
		}

		hkMemoryResourceContainer* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkMemoryResourceContainer*(__thiscall*)(hkMemoryResourceContainer*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryResourceContainer::ctor_1 };
			return func(this, flag);
		}

	public:
		// members
		hkStringPtr                                                            m_name;             // 08
		hkMemoryResourceContainer*                                             m_parent;           // 0C
		hkArray<hkRefPtr<hkMemoryResourceHandle>, hkContainerHeapAllocator>    m_resourceHandles;  // 10
		hkArray<hkRefPtr<hkMemoryResourceContainer>, hkContainerHeapAllocator> m_children;         // 1C
	};
}
