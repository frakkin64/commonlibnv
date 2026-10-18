#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiLight.h"

namespace RE
{
	class NiPointLight :
		public NiLight  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPointLight };
		static constexpr auto VTABLE{ VTABLE::NiPointLight };

		void SetConstantAttenuation(float fC)
		{
			using func_t = decltype(&NiPointLight::SetConstantAttenuation);
			static REL::Relocation<func_t> func{ Offsets::NiPointLight::SetConstantAttenuation };
			func(this, fC);
		}

		void SetLinearAttenuation(float fL)
		{
			using func_t = decltype(&NiPointLight::SetLinearAttenuation);
			static REL::Relocation<func_t> func{ Offsets::NiPointLight::SetLinearAttenuation };
			func(this, fL);
		}

		void SetQuadraticAttenuation(float fQ)
		{
			using func_t = decltype(&NiPointLight::SetQuadraticAttenuation);
			static REL::Relocation<func_t> func{ Offsets::NiPointLight::SetQuadraticAttenuation };
			func(this, fQ);
		}

		NiPointLight* ctor()
		{
			using func_t = NiPointLight*(__thiscall*)(NiPointLight*);
			static REL::Relocation<func_t> func{ Offsets::NiPointLight::ctor };
			return func(this);
		}

	public:
		// members
		float m_fAtten0;  // F0
		float m_fAtten1;  // F4
		float m_fAtten2;  // F8
	};
	static_assert(sizeof(NiPointLight) == 0xFC);
}
