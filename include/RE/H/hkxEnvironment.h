#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkStringBuf;

	class hkxEnvironment :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxEnvironment };
		static constexpr auto VTABLE{ VTABLE::hkxEnvironment };

		class Variable;

		class Variable
		{
		public:
			// members
			hkStringPtr m_name;   // 00?
			hkStringPtr m_value;  // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkxEnvironment() = default;  // 00

		void convertToString(hkStringBuf& result) const
		{
			using func_t = decltype(&hkxEnvironment::convertToString);
			static REL::Relocation<func_t> func{ Offsets::hkxEnvironment::convertToString };
			func(this, result);
		}

		hkResult setVariable(char const* name, char const* value)
		{
			using func_t = decltype(&hkxEnvironment::setVariable);
			static REL::Relocation<func_t> func{ Offsets::hkxEnvironment::setVariable };
			return func(this, name, value);
		}

		hkResult interpretString(char const* str)
		{
			using func_t = decltype(&hkxEnvironment::interpretString);
			static REL::Relocation<func_t> func{ Offsets::hkxEnvironment::interpretString };
			return func(this, str);
		}

	public:
		// members
		hkArray<hkxEnvironment::Variable, hkContainerHeapAllocator> m_variables;  // 08?
	};
}
