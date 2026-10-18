#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"

namespace RE
{
	class BSDistantTreeShader_InstanceData;

	class BSDistantTreeShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		// members
		std::uint32_t                     uiInstanceCount;  // 60?
		BSDistantTreeShader_InstanceData* pInstancesA;      // 64
	};
}
