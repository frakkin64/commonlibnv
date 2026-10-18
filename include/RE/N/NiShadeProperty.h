#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"

namespace RE
{
	class NiShadeProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiShadeProperty };
		static constexpr auto VTABLE{ VTABLE::NiShadeProperty };

		static std::int32_t GetType()
		{
			using func_t = decltype(&NiShadeProperty::GetType);
			static REL::Relocation<func_t> func{ Offsets::NiShadeProperty::GetType };
			return func();
		}

		std::int32_t GetShaderPropertyType()
		{
			using func_t = decltype(&NiShadeProperty::GetShaderPropertyType);
			static REL::Relocation<func_t> func{ Offsets::NiShadeProperty::GetShaderPropertyType };
			return func(this);
		}

	public:
		// members
		std::uint16_t m_uFlags;             // 18
		std::uint16_t pad1A;                // 1A
		std::int32_t  iShaderPropertyType;  // 1C
	};
	static_assert(sizeof(NiShadeProperty) == 0x20);
}
