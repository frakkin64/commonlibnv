#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkxAttribute.h"

namespace RE
{
	class hkBool;
	class hkClass;
	class hkMatrix4;
	class hkReferencedObject;

	class hkxAttributeGroup
	{
	public:
		hkReferencedObject* findAttributeObjectByName(char const* name, hkClass const* type) const
		{
			using func_t = decltype(&hkxAttributeGroup::findAttributeObjectByName);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeGroup::findAttributeObjectByName };
			return func(this, name, type);
		}

		hkResult getBoolValue(char const* name, bool warnIfNotFound, hkBool& boolOut) const
		{
			using func_t = decltype(&hkxAttributeGroup::getBoolValue);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeGroup::getBoolValue };
			return func(this, name, warnIfNotFound, boolOut);
		}

		hkResult getIntValue(char const* name, bool warnIfNotFound, std::int32_t& intOut) const
		{
			using func_t = decltype(&hkxAttributeGroup::getIntValue);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeGroup::getIntValue };
			return func(this, name, warnIfNotFound, intOut);
		}

		hkResult getStringValue(char const* name, bool warnIfNotFound, char const*& stringOut) const
		{
			using func_t = decltype(&hkxAttributeGroup::getStringValue);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeGroup::getStringValue };
			return func(this, name, warnIfNotFound, stringOut);
		}

		hkResult getMatrixValue(char const* name, bool warnIfNotFound, hkMatrix4& matrixOut) const
		{
			using func_t = decltype(&hkxAttributeGroup::getMatrixValue);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeGroup::getMatrixValue };
			return func(this, name, warnIfNotFound, matrixOut);
		}

		hkxAttributeGroup& operator_call(hkxAttributeGroup const& other)
		{
			using func_t = decltype(&hkxAttributeGroup::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeGroup::operator_call };
			return func(this, other);
		}

	public:
		// members
		hkStringPtr                                     m_name;        // 00?
		hkArray<hkxAttribute, hkContainerHeapAllocator> m_attributes;  // 04?
	};
}
