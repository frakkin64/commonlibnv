#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSPackedTask
	{
	public:
		union PackedTaskVariantData;

		union PackedTaskVariantData
		{
		public:
			// members
			bool         bData;       // 00
			char         pcDataA[4];  // 00
			std::int16_t psDataA[2];  // 00
			std::int32_t iData;       // 00
			float        fData;       // 00
			void*        pData;       // 00
		};

		// members
		BSPackedTask::PackedTaskVariantData pTaskDataA[8];  // 00
	};
}
