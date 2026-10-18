#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceModifierInstanceTemp.h"

namespace RE
{
	class ImageSpaceModifierInstanceDOF :
		public ImageSpaceModifierInstanceTemp  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstanceDOF };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstanceDOF };

		enum class DepthOfFieldMode : std::int32_t
		{
			kDOF_FRONT_BACK = 0x0,
			kDOF_FRONT = 0x1,
			kDOF_BACK = 0x2,
			kDOF_NONE = 0x3,
		};

		// override (ImageSpaceModifierInstanceTemp)
		virtual ~ImageSpaceModifierInstanceDOF() = default;  // 00
		virtual void Apply() override;                       // 24
		virtual void PrintInfo(char* a_arg1) override;       // 26

		// members
		float                                           fDistance;   // 20
		float                                           fRange;      // 24
		float                                           fMaskConst;  // 28
		ImageSpaceModifierInstanceDOF::DepthOfFieldMode Mode;        // 2C
	};
	static_assert(sizeof(ImageSpaceModifierInstanceDOF) == 0x30);
}
