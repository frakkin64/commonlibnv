#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkDataArrayImpl;

	class hkDataArray_Value
	{
	public:
		float const* asVec(std::int32_t nreal) const
		{
			using func_t = decltype(&hkDataArray_Value::asVec);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray_Value::asVec };
			return func(this, nreal);
		}

		char const* asString() const
		{
			using func_t = decltype(&hkDataArray_Value::asString);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray_Value::asString };
			return func(this);
		}

		float asReal() const
		{
			using func_t = decltype(&hkDataArray_Value::asReal);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray_Value::asReal };
			return func(this);
		}

		std::int32_t asInt() const
		{
			using func_t = decltype(&hkDataArray_Value::asInt);
			static REL::Relocation<func_t> func{ Offsets::hkDataArray_Value::asInt };
			return func(this);
		}

	public:
		// members
		hkDataArrayImpl* m_impl;   // 00
		std::int32_t     m_index;  // 04?
	};
}
