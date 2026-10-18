#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiDynamicEffect.h"

namespace RE
{
	class NiLight :
		public NiDynamicEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLight };
		static constexpr auto VTABLE{ VTABLE::NiLight };

		void SetAmbientColor(NiColor const& color)
		{
			using func_t = decltype(&NiLight::SetAmbientColor);
			static REL::Relocation<func_t> func{ Offsets::NiLight::SetAmbientColor };
			func(this, color);
		}

		void SetDiffuseColor(NiColor const& color)
		{
			using func_t = decltype(&NiLight::SetDiffuseColor);
			static REL::Relocation<func_t> func{ Offsets::NiLight::SetDiffuseColor };
			func(this, color);
		}

		void SetDimmer(float fDimmer)
		{
			using func_t = decltype(&NiLight::SetDimmer);
			static REL::Relocation<func_t> func{ Offsets::NiLight::SetDimmer };
			func(this, fDimmer);
		}

		void SetSpecularColor(NiColor const& color)
		{
			using func_t = decltype(&NiLight::SetSpecularColor);
			static REL::Relocation<func_t> func{ Offsets::NiLight::SetSpecularColor };
			func(this, color);
		}

	public:
		// members
		// not placed: m_pvRendererData(absent)
		float         m_fDimmer;  // C4
		NiColor       m_kAmb;     // C8
		NiColor       m_kDiff;    // D4
		NiColor       m_kSpec;    // E0
		std::uint32_t padEC;      // EC
	};
	static_assert(sizeof(NiLight) == 0xF0);
}
