#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceModifierInstanceTemp.h"
#include "RE/N/NiPoint2.h"

namespace RE
{
	class NiAVObject;

	class ImageSpaceModifierInstanceDRB :
		public ImageSpaceModifierInstanceTemp  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstanceDRB };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstanceDRB };

		enum class DepthOfFieldMode : std::int32_t
		{
			kDOF_FRONT_BACK = 0x0,
			kDOF_FRONT = 0x1,
			kDOF_BACK = 0x2,
			kDOF_NONE = 0x3,
		};

		// override (ImageSpaceModifierInstanceTemp)
		virtual ~ImageSpaceModifierInstanceDRB() = default;  // 00
		virtual void Apply() override;                       // 24
		virtual void PrintInfo(char* a_arg1) override;       // 26

		ImageSpaceModifierInstanceDRB* ctor(float afStrength, float afStartTime, NiAVObject* apTarget, float afDuration, ImageSpaceModifierInstanceDRB::DepthOfFieldMode afDistance, float afRange, float afRampup, float afStart, float afRampdown, float afDownStart, float aMode, NiPoint2 const& aCenter)
		{
			using func_t = ImageSpaceModifierInstanceDRB*(__thiscall*)(ImageSpaceModifierInstanceDRB*, float, float, NiAVObject*, float, ImageSpaceModifierInstanceDRB::DepthOfFieldMode, float, float, float, float, float, float, NiPoint2 const&);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstanceDRB::ctor };
			return func(this, afStrength, afStartTime, apTarget, afDuration, afDistance, afRange, afRampup, afStart, afRampdown, afDownStart, aMode, aCenter);
		}

	public:
		// members
		float                                           fRampup;     // 20
		float                                           fStart;      // 24
		float                                           fRampdown;   // 28
		float                                           fDownStart;  // 2C
		NiPoint2                                        Center;      // 30
		float                                           fDistance;   // 38
		float                                           fRange;      // 3C
		ImageSpaceModifierInstanceDRB::DepthOfFieldMode Mode;        // 40
	};
	static_assert(sizeof(ImageSpaceModifierInstanceDRB) == 0x44);
}
