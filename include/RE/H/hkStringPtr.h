#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFinishLoadedObjectFlag.h"

namespace RE
{
	class hkStringPtr
	{
	public:
		hkStringPtr* ctor()
		{
			using func_t = hkStringPtr*(__thiscall*)(hkStringPtr*);
			static REL::Relocation<func_t> func{ Offsets::hkStringPtr::ctor };
			return func(this);
		}

		hkStringPtr* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkStringPtr*(__thiscall*)(hkStringPtr*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkStringPtr::ctor_1 };
			return func(this, f);
		}

		hkStringPtr* ctor(char const* string)
		{
			using func_t = hkStringPtr*(__thiscall*)(hkStringPtr*, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStringPtr::ctor_2 };
			return func(this, string);
		}

		hkStringPtr* ctor(hkStringPtr const& strRef)
		{
			using func_t = hkStringPtr*(__thiscall*)(hkStringPtr*, hkStringPtr const&);
			static REL::Relocation<func_t> func{ Offsets::hkStringPtr::ctor_3 };
			return func(this, strRef);
		}

		hkStringPtr& operator_call(char const* string)
		{
			using func_t = hkStringPtr& (hkStringPtr::*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStringPtr::operator_call };
			return func(this, string);
		}

		hkStringPtr& operator_call(hkStringPtr const& string)
		{
			using func_t = hkStringPtr& (hkStringPtr::*)(hkStringPtr const&);
			static REL::Relocation<func_t> func{ Offsets::hkStringPtr::operator_call_1 };
			return func(this, string);
		}

	public:
		// members
		const char* m_stringAndFlag;  // 00
	};
}
