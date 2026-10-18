#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceModifierInstanceTemp.h"
#include "RE/N/NiPoint2.h"

namespace RE
{
	class NiAVObject;

	class ImageSpaceModifierInstanceRB :
		public ImageSpaceModifierInstanceTemp  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstanceRB };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstanceRB };

		// override (ImageSpaceModifierInstanceTemp)
		virtual ~ImageSpaceModifierInstanceRB() = default;  // 00
		virtual void Apply() override;                      // 24
		virtual void PrintInfo(char* a_arg1) override;      // 26

		ImageSpaceModifierInstanceRB* ctor(float afStrength, float afStartTime, NiAVObject* apTarget, float afDuration, float afRampup, float afStart, float afRampdown, float afDownStart, NiPoint2 const& aCenter)
		{
			using func_t = ImageSpaceModifierInstanceRB*(__thiscall*)(ImageSpaceModifierInstanceRB*, float, float, NiAVObject*, float, float, float, float, float, NiPoint2 const&);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstanceRB::ctor };
			return func(this, afStrength, afStartTime, apTarget, afDuration, afRampup, afStart, afRampdown, afDownStart, aCenter);
		}

	public:
		// members
		float    fRampup;     // 20
		float    fStart;      // 24
		float    fRampdown;   // 28
		float    fDownStart;  // 2C
		NiPoint2 Center;      // 30
	};
	static_assert(sizeof(ImageSpaceModifierInstanceRB) == 0x38);
}
