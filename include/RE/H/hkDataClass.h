#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataClass_Cinfo.h"
#include "RE/H/hkDataClass_MemberInfo.h"

namespace RE
{
	class hkDataClassImpl;
	class hkDataWorld;

	class hkDataClass
	{
	public:
		using Cinfo = hkDataClass_Cinfo;
		using MemberInfo = hkDataClass_MemberInfo;

		hkDataClass* ctor(hkDataClassImpl* impl)
		{
			using func_t = hkDataClass*(__thiscall*)(hkDataClass*, hkDataClassImpl*);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::ctor };
			return func(this, impl);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(hkDataClass*);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::dtor };
			func(this);
		}

		std::int32_t isNull() const
		{
			using func_t = decltype(&hkDataClass::isNull);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::isNull };
			return func(this);
		}

		char const* getName() const
		{
			using func_t = decltype(&hkDataClass::getName);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::getName };
			return func(this);
		}

		hkDataWorld const* getWorld() const
		{
			using func_t = decltype(&hkDataClass::getWorld);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::getWorld };
			return func(this);
		}

		std::int32_t getNumMembers() const
		{
			using func_t = decltype(&hkDataClass::getNumMembers);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::getNumMembers };
			return func(this);
		}

		void getCinfo(hkDataClass_Cinfo& cinfo) const
		{
			using func_t = decltype(&hkDataClass::getCinfo);
			static REL::Relocation<func_t> func{ Offsets::hkDataClass::getCinfo };
			func(this, cinfo);
		}

	public:
		// members
		hkDataClassImpl* m_impl;  // 00
	};
}
