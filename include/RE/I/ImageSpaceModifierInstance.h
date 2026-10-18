#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ImageSpaceModifierInstanceForm;
	class NiAVObject;

	class ImageSpaceModifierInstance :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstance };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstance };

		// override (NiObject)
		virtual ~ImageSpaceModifierInstance() = default;  // 00

		// add
		virtual bool IsExpired();                          // 23
		virtual void Apply();                              // 24
		virtual ImageSpaceModifierInstanceForm* IsForm();  // 25
		virtual void PrintInfo(char* a_arg1);              // 26

		static void Stop(ImageSpaceModifierInstance* apInstance)
		{
			using func_t = decltype(&ImageSpaceModifierInstance::Stop);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstance::Stop };
			func(apInstance);
		}

		ImageSpaceModifierInstance* ctor(float afStrength, float a_arg2, NiAVObject* a_arg3)
		{
			using func_t = ImageSpaceModifierInstance*(__thiscall*)(ImageSpaceModifierInstance*, float, float, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstance::ctor };
			return func(this, afStrength, a_arg2, a_arg3);
		}

		void SetPermanent(bool abValue)
		{
			using func_t = decltype(&ImageSpaceModifierInstance::SetPermanent);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstance::SetPermanent };
			func(this, abValue);
		}

		void SetStrength(float afStrength)
		{
			using func_t = decltype(&ImageSpaceModifierInstance::SetStrength);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceModifierInstance::SetStrength };
			func(this, afStrength);
		}

	public:
		// members
		bool                  bIsWeather;  // 08
		std::uint8_t          pad09[0x3];  // 09
		float                 fStrength;   // 0C
		NiPointer<NiAVObject> spTarget;    // 10
		float                 fStartTime;  // 14
		std::uint32_t         iFlags;      // 18
	};
	static_assert(sizeof(ImageSpaceModifierInstance) == 0x1C);
}
