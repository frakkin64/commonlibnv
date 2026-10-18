#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"

namespace RE
{
	class NiVertexColorProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiVertexColorProperty };
		static constexpr auto VTABLE{ VTABLE::NiVertexColorProperty };

		enum class LightingMode : std::int32_t
		{
			kLIGHTING_E = 0x0,
			kLIGHTING_E_A_D = 0x1,
			kLIGHTING_MAX = 0x2,
		};

		enum class SourceVertexMode : std::int32_t
		{
			kSOURCE_IGNORE = 0x0,
			kSOURCE_EMISSIVE = 0x1,
			kSOURCE_AMB_DIFF = 0x2,
			kSOURCE_NUM_MODES = 0x3,
		};

		static char* GetViewerString(char const* pcPrefix, NiVertexColorProperty::SourceVertexMode eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiVertexColorProperty::SourceVertexMode);
			static REL::Relocation<func_t> func{ Offsets::NiVertexColorProperty::GetViewerString };
			return func(pcPrefix, eMode);
		}

		static char* GetViewerString(char const* pcPrefix, NiVertexColorProperty::LightingMode eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiVertexColorProperty::LightingMode);
			static REL::Relocation<func_t> func{ Offsets::NiVertexColorProperty::GetViewerString_1 };
			return func(pcPrefix, eMode);
		}

	public:
		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
	};
}
