#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkStructureLayout_LayoutRules.h"

namespace RE
{
	class hkClass;

	class hkStructureLayout
	{
	public:
		using LayoutRules = hkStructureLayout_LayoutRules;

		hkStructureLayout* ctor(hkStructureLayout_LayoutRules const& rules)
		{
			using func_t = hkStructureLayout*(__thiscall*)(hkStructureLayout*, hkStructureLayout_LayoutRules const&);
			static REL::Relocation<func_t> func{ Offsets::hkStructureLayout::ctor };
			return func(this, rules);
		}

		void computeMemberOffsetsInplace(hkClass& klass, hkPointerMap<hkClass const*, std::int32_t, hkContainerHeapAllocator>& classesDone, std::int32_t recurse) const
		{
			using func_t = decltype(&hkStructureLayout::computeMemberOffsetsInplace);
			static REL::Relocation<func_t> func{ Offsets::hkStructureLayout::computeMemberOffsetsInplace };
			func(this, klass, classesDone, recurse);
		}

	public:
		// members
		hkStructureLayout_LayoutRules m_rules;  // 00
	};
}
