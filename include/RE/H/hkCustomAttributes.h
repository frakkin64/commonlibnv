#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVariant.h"

namespace RE
{
	class hkCustomAttributes
	{
	public:
		class Attribute;

		class Attribute
		{
		public:
			// members
			const char* m_name;   // 00?
			hkVariant   m_value;  // 04?
		};

		// members
		const hkCustomAttributes::Attribute* m_attributes;     // 00?
		std::int32_t                         m_numAttributes;  // 04?
	};
}
