#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"
#include "RE/N/NiTexturingProperty_FilterMode.h"
#include "RE/N/NiTexturingProperty_Map.h"

namespace RE
{
	class NiTexturingProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTexturingProperty };
		static constexpr auto VTABLE{ VTABLE::NiTexturingProperty };

		using ClampMode = NiTexturingProperty_ClampMode;
		using FilterMode = NiTexturingProperty_FilterMode;
		using Map = NiTexturingProperty_Map;

		class ShaderMap;

		enum class MapClassID : std::int32_t
		{
			kMAP_CLASS_BASE = 0x0,
			kMAP_CLASS_BUMP = 0x1,
			kMAP_CLASS_PARALLAX = 0x2,
			kMAP_CLASS_SHADER = 0x3,
			kMAP_CLASS_MAX = 0x4,
		};

		class ShaderMap :
			public NiTexturingProperty_Map  // 00
		{
		public:
			// members
			std::uint32_t m_uiID;  // 10?
		};

		static char* GetViewerString(char const* pcPrefix, NiTexturingProperty_ClampMode eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiTexturingProperty_ClampMode);
			static REL::Relocation<func_t> func{ Offsets::NiTexturingProperty::GetViewerString };
			return func(pcPrefix, eMode);
		}

		static char* GetViewerString(char const* pcPrefix, NiTexturingProperty_FilterMode eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiTexturingProperty_FilterMode);
			static REL::Relocation<func_t> func{ Offsets::NiTexturingProperty::GetViewerString_1 };
			return func(pcPrefix, eMode);
		}

		static void _SDMInit()
		{
			using func_t = decltype(&NiTexturingProperty::_SDMInit);
			static REL::Relocation<func_t> func{ Offsets::NiTexturingProperty::_SDMInit };
			func();
		}

	public:
		// members
		std::uint16_t                                       m_uFlags;        // 18
		std::uint16_t                                       pad1A;           // 1A
		NiTPrimitiveArray<NiTexturingProperty_Map*>         m_kMaps;         // 1C
		NiTPrimitiveArray<NiTexturingProperty::ShaderMap*>* m_pkShaderMaps;  // 2C
	};
}
