#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataArray_Value.h"
#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkDataArrayImpl;

	class hkDataArray
	{
	public:
		using Value = hkDataArray_Value;

		void dtor()
		{
			using func_t = void(__thiscall*)(hkDataArray*);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray::dtor };
			func(this);
		}

		hkDataArray_Value operator_call(std::int32_t result)
		{
			using func_t = decltype(&hkDataArray::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray::operator_call };
			return func(this, result);
		}

		void setSize(std::int32_t n)
		{
			using func_t = decltype(&hkDataArray::setSize);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray::setSize };
			func(this, n);
		}

		std::int32_t getSize() const
		{
			using func_t = decltype(&hkDataArray::getSize);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray::getSize };
			return func(this);
		}

		hkDataObject_Type getType() const
		{
			using func_t = decltype(&hkDataArray::getType);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray::getType };
			return func(this);
		}

	public:
		// members
		hkDataArrayImpl* m_impl;  // 00
	};
}
