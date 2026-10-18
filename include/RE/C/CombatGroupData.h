#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/G/GroupMemberData.h"

namespace RE
{
	class CombatGroup;

	class CombatGroupData
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(CombatGroupData*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::dtor };
			func(this);
		}

		CombatGroupData* ctor(CombatGroup* apCombatGroup)
		{
			using func_t = CombatGroupData*(__thiscall*)(CombatGroupData*, CombatGroup*);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::ctor };
			return func(this, apCombatGroup);
		}

		bool GetMembersTargetsIntersecting()
		{
			using func_t = decltype(&CombatGroupData::GetMembersTargetsIntersecting);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::GetMembersTargetsIntersecting };
			return func(this);
		}

		std::int32_t GetMemberMaximumTargetDetection()
		{
			using func_t = decltype(&CombatGroupData::GetMemberMaximumTargetDetection);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::GetMemberMaximumTargetDetection };
			return func(this);
		}

		void SortRangedMembers()
		{
			using func_t = decltype(&CombatGroupData::SortRangedMembers);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::SortRangedMembers };
			func(this);
		}

		std::int32_t GetRangedMemberCount()
		{
			using func_t = decltype(&CombatGroupData::GetRangedMemberCount);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::GetRangedMemberCount };
			return func(this);
		}

		GroupMemberData* GetRangedMember(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroupData::GetRangedMember);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::GetRangedMember };
			return func(this, aiIndex);
		}

	protected:
		void ComputeMinMaxTargetDetection()
		{
			using func_t = decltype(&CombatGroupData::ComputeMinMaxTargetDetection);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupData::ComputeMinMaxTargetDetection };
			func(this);
		}

	public:
		// members
		CombatGroup*                         pCombatGroup;                 // 00
		std::int32_t                         iMemberCount;                 // 04
		std::int32_t                         iMembersTargetsIntersecting;  // 08
		std::int32_t                         iMinimumTargetDetection;      // 0C
		std::int32_t                         iMaximumTargetDetection;      // 10
		float                                fMemberHealthPercentage;      // 14
		BSSimpleArray<GroupMemberData, 1024> RangedMembers;                // 18
		BSSimpleArray<GroupMemberData, 1024> MeleeMembers;                 // 28
	};
}
