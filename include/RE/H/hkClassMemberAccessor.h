#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkClassMember;
	class hkVariant;

	class hkClassMemberAccessor
	{
	public:
		hkClassMemberAccessor* ctor(void* obj, hkClassMember const* mem)
		{
			using func_t = hkClassMemberAccessor*(__thiscall*)(hkClassMemberAccessor*, void*, hkClassMember const*);
			static REL::Relocation<func_t> func{ Offsets::hkClassMemberAccessor::ctor };
			return func(this, obj, mem);
		}

		hkClassMemberAccessor* ctor(hkVariant const& var, char const* memberName)
		{
			using func_t = hkClassMemberAccessor*(__thiscall*)(hkClassMemberAccessor*, hkVariant const&, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkClassMemberAccessor::ctor_1 };
			return func(this, var, memberName);
		}

	public:
		// members
		void*                m_address;  // 00?
		const hkClassMember* m_member;   // 04?
	};
}
