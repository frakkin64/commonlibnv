#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BLENDKEY.h"
#include "RE/N/NiTLargePrimitiveArray.h"
#include "RE/N/NiTimeController.h"

namespace RE
{
	class NiAVObject;

	class bhkBlendController :
		public NiTimeController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkBlendController };
		static constexpr auto VTABLE{ VTABLE::bhkBlendController };

		static void DoGetUp(NiAVObject* apObject, float afTime)
		{
			using func_t = decltype(&bhkBlendController::DoGetUp);
			static REL::Relocation<func_t> func{ Offsets::bhkBlendController::DoGetUp };
			func(apObject, afTime);
		}

	public:
		// members
		std::uint32_t                    iLastIndex;        // 34?
		NiTLargePrimitiveArray<BLENDKEY> pBlendKeyA;        // 38?
		float                            fOriginalGain;     // 50
		float                            fOriginalVelGain;  // 54
		std::uint32_t                    iPriority;         // 58?
	};
}
