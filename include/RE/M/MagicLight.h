#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/R/REFR_LIGHT.h"

namespace RE
{
	class NiAVObject;
	class NiNode;
	class TESObjectLIGH;

	class MagicLight
	{
	public:
		MagicLight* ctor(std::uint32_t aiLightID, NiAVObject* apObj)
		{
			using func_t = MagicLight*(__thiscall*)(MagicLight*, std::uint32_t, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::MagicLight::ctor };
			return func(this, aiLightID, apObj);
		}

		void Update(float afDelta)
		{
			using func_t = decltype(&MagicLight::Update);
			static REL::Relocation<func_t> func{ Offsets::MagicLight::Update };
			func(this, afDelta);
		}

		void Fade(bool abIn, float afTime)
		{
			using func_t = decltype(&MagicLight::Fade);
			static REL::Relocation<func_t> func{ Offsets::MagicLight::Fade };
			func(this, abIn, afTime);
		}

	private:
		void Init(std::uint32_t aiLightID, NiAVObject* apObj)
		{
			using func_t = decltype(&MagicLight::Init);
			static REL::Relocation<func_t> func{ Offsets::MagicLight::Init };
			func(this, aiLightID, apObj);
		}

	public:
		// members
		NiPointer<NiNode> pParent;          // 00
		TESObjectLIGH*    pLightObject;     // 04
		REFR_LIGHT        LightData;        // 08
		float             fFadeTimer;       // 10
		float             fFadeTargetTime;  // 14
		bool              bFadeIn;          // 18
		std::uint8_t      pad19[0x3];       // 19
	};
}
