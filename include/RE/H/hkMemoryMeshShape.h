#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMeshSectionCinfo.h"
#include "RE/H/hkMeshShape.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMeshSection;

	class hkMemoryMeshShape :
		public hkMeshShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkMemoryMeshShape };

		// override (hkMeshShape)
		virtual ~hkMemoryMeshShape() = default;  // 00

		// add
		virtual std::int32_t getNumSections() const;                                                      // 03
		virtual void lockSection(std::int32_t a_arg1, std::uint8_t a_arg2, hkMeshSection* a_arg3) const;  // 04
		virtual void unlockSection(const hkMeshSection* a_arg1) const;                                    // 05
		virtual const char* getName() const;                                                              // 06
		virtual void setName(const char* a_arg1);                                                         // 07

		hkMemoryMeshShape* ctor(hkMeshSectionCinfo const* sections, std::int32_t numSections)
		{
			using func_t = hkMemoryMeshShape*(__thiscall*)(hkMemoryMeshShape*, hkMeshSectionCinfo const*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryMeshShape::ctor };
			return func(this, sections, numSections);
		}

	public:
		// members
		hkArray<hkMeshSectionCinfo, hkContainerHeapAllocator> m_sections;   // 08
		hkArray<std::uint16_t, hkContainerHeapAllocator>      m_indices16;  // 14
		hkArray<std::uint32_t, hkContainerHeapAllocator>      m_indices32;  // 20
		hkStringPtr                                           m_name;       // 2C
	};
}
