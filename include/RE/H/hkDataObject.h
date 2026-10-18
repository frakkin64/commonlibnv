#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkDataObject_Type.h"
#include "RE/H/hkDataObject_Value.h"

namespace RE
{
	class hkDataObjectImpl;

	class hkDataObject
	{
	public:
		using Handle = hkDataObject_Handle;
		using Type = hkDataObject_Type;
		using Value = hkDataObject_Value;

		hkDataObject* ctor(hkDataObjectImpl* i)
		{
			using func_t = hkDataObject*(__thiscall*)(hkDataObject*, hkDataObjectImpl*);
			static REL::Relocation<func_t> func{ Offsets::hkDataObject::ctor };
			return func(this, i);
		}

		hkDataObject* ctor(hkDataObject const& o)
		{
			using func_t = hkDataObject*(__thiscall*)(hkDataObject*, hkDataObject const&);
			static REL::Relocation<func_t> func{ Offsets::hkDataObject::ctor_1 };
			return func(this, o);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(hkDataObject*);
			static REL::Relocation<func_t> func{ Offsets::hkDataObject::dtor };
			func(this);
		}

		hkDataObject_Value operator_call(char const* result)
		{
			using func_t = decltype(&hkDataObject::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkDataObject::operator_call };
			return func(this, result);
		}

		std::int32_t isNull() const
		{
			using func_t = decltype(&hkDataObject::isNull);
			static REL::Relocation<func_t> func{ Offsets::hkDataObject::isNull };
			return func(this);
		}

	public:
		// members
		hkDataObjectImpl* m_impl;  // 00
	};
}
