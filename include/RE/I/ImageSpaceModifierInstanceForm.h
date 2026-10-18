#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceModifierInstance.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class TESImageSpaceModifier;

	class ImageSpaceModifierInstanceForm :
		public ImageSpaceModifierInstance  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstanceForm };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstanceForm };

		// override (ImageSpaceModifierInstance)
		virtual ~ImageSpaceModifierInstanceForm() = default;        // 00
		virtual bool IsExpired() override;                          // 23
		virtual void Apply() override;                              // 24
		virtual ImageSpaceModifierInstanceForm* IsForm() override;  // 25
		virtual void PrintInfo(char* a_arg1) override;              // 26

		ImageSpaceModifierInstanceForm* ctor(TESImageSpaceModifier* apMod, float afStartTime, float a_arg3, NiAVObject* a_arg4)
		{
			using func_t = ImageSpaceModifierInstanceForm*(__thiscall*)(ImageSpaceModifierInstanceForm*, TESImageSpaceModifier*, float, float, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstanceForm::ctor };
			return func(this, apMod, afStartTime, a_arg3, a_arg4);
		}

		static ImageSpaceModifierInstanceForm* Trigger(TESImageSpaceModifier* apMod, float afStrength, NiAVObject* apTarget)
		{
			using func_t = decltype(&ImageSpaceModifierInstanceForm::Trigger);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstanceForm::Trigger };
			return func(apMod, afStrength, apTarget);
		}

		static void Stop(TESImageSpaceModifier* apMod)
		{
			using func_t = decltype(&ImageSpaceModifierInstanceForm::Stop);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstanceForm::Stop };
			func(apMod);
		}

	public:
		// members
		// not placed: pImageSpaceMod(absent), pLastImageSpaceMod(absent)
		float                 fLastStrength;    // 1C
		NiPointer<NiAVObject> spLastTarget;     // 20
		float                 fTransitionTime;  // 24
		std::uint8_t          pad28[0x8];       // 28
	};
	static_assert(sizeof(ImageSpaceModifierInstanceForm) == 0x30);
}
