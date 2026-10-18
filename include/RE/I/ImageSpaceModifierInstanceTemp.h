#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceModifierInstance.h"

namespace RE
{
	class NiAVObject;

	class ImageSpaceModifierInstanceTemp :
		public ImageSpaceModifierInstance  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstanceTemp };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstanceTemp };

		// override (ImageSpaceModifierInstance)
		virtual ~ImageSpaceModifierInstanceTemp() = default;  // 00
		virtual bool IsExpired() override;                    // 23
		virtual void PrintInfo(char* a_arg1) override;        // 26

		ImageSpaceModifierInstanceTemp* ctor(float afStartTime, float afStrength, NiAVObject* apTarget, float afDuration)
		{
			using func_t = ImageSpaceModifierInstanceTemp*(__thiscall*)(ImageSpaceModifierInstanceTemp*, float, float, NiAVObject*, float);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstanceTemp::ctor };
			return func(this, afStartTime, afStrength, apTarget, afDuration);
		}

	public:
		// members
		// not placed: fDuration(overlap)
		std::uint32_t pad1C;  // 1C
	};
	static_assert(sizeof(ImageSpaceModifierInstanceTemp) == 0x20);
}
