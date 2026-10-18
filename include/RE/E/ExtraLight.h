#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class REFR_LIGHT;

	class ExtraLight :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLight };
		static constexpr auto VTABLE{ VTABLE::ExtraLight };

		// override (BSExtraData)
		virtual ~ExtraLight() = default;  // 00

		ExtraLight* ctor(REFR_LIGHT* apLight)
		{
			using func_t = ExtraLight*(__thiscall*)(ExtraLight*, REFR_LIGHT*);
			static REL::Relocation<func_t> func{ Offsets::ExtraLight::ctor };
			return func(this, apLight);
		}

	public:
		// members
		REFR_LIGHT* pLight;  // 0C
	};
	static_assert(sizeof(ExtraLight) == 0x10);
}
