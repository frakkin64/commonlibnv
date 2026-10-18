#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiProperty.h"

namespace RE
{
	class NiFogProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFogProperty };
		static constexpr auto VTABLE{ VTABLE::NiFogProperty };

		enum class FogFunction : std::int32_t
		{
			kFOG_Z_LINEAR = 0x0,
			kFOG_RANGE_SQ = 0x1,
			kFOG_VERTEX_ALPHA = 0x2,
		};

		static char* GetViewerString(char const* pcPrefix, NiFogProperty::FogFunction eFunc)
		{
			using func_t = decltype(&NiFogProperty::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiFogProperty::GetViewerString };
			return func(pcPrefix, eFunc);
		}

	public:
		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
		float         m_fDepth;  // 1C
		NiColor       m_kColor;  // 20
	};
	static_assert(sizeof(NiFogProperty) == 0x2C);
}
