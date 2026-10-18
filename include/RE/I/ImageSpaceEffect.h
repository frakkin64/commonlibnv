#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTexturingProperty_FilterMode.h"

namespace RE
{
	class ImageSpaceEffectParam;
	class ImageSpaceTexture;

	class __declspec(novtable) ImageSpaceEffect
	{
	public:
		class EffectInput;

		class EffectInput
		{
		public:
			// members
			std::int32_t                   iTexIndex;    // 00?
			NiTexturingProperty_FilterMode iFilterMode;  // 04?
		};

		virtual ~ImageSpaceEffect() = default;  // 00

		// members
		bool                                              bIsActive;         // 04
		bool                                              bParamsChanged;    // 05
		std::uint16_t                                     pad06;             // 06
		NiTPrimitiveArray<ImageSpaceEffect*>              pEffectList;       // 08
		NiTPrimitiveArray<ImageSpaceEffectParam*>         pEffectParamList;  // 18?
		NiTPrimitiveArray<ImageSpaceTexture*>             pTextures;         // 28?
		NiTPrimitiveArray<ImageSpaceEffect::EffectInput*> pEffectInputs;     // 38?
		NiTPrimitiveArray<std::int32_t>                   pEffectOutput;     // 48?
	};
}
