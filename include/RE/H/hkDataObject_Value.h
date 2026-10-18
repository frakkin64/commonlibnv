#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkDataObjectImpl;

	class hkDataObject_Value
	{
	public:
		hkDataObject_Type getType() const
		{
			using func_t = decltype(&hkDataObject_Value::getType);
			static REL::Relocation<func_t> func{ Offsets::hkDataObject_Value::getType };
			return func(this);
		}

	public:
		// members
		hkDataObjectImpl* m_impl;  // 00
		const char*       m_name;  // 04?
	};
}
