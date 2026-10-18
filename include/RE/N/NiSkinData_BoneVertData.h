#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiSkinData_BoneVertData
	{
	public:
		// members
		std::uint16_t m_usVert;   // 00?
		std::uint16_t pad02;      // 02
		float         m_fWeight;  // 04?
	};
}
