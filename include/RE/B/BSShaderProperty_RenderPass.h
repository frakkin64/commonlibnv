#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiGeometry;
	class ShadowSceneLight;

	class BSShaderProperty_RenderPass
	{
	public:
		// members
		NiGeometry*        pGeometry;          // 00?
		std::uint16_t      usPassEnum;         // 04?
		std::uint8_t       eAccumulationHint;  // 06?
		bool               bFirstPass;         // 07?
		bool               bLastPass;          // 08?
		std::uint8_t       ucNumLights;        // 09?
		std::uint8_t       ucMaxNumLights;     // 0A?
		std::uint8_t       ucExtraParam;       // 0B?
		ShadowSceneLight** ppSceneLights;      // 0C?
	};
}
