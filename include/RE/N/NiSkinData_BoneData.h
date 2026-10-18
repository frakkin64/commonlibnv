#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBound.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiSkinData_BoneVertData;

	class NiSkinData_BoneData
	{
	public:
		// members
		NiTransform              m_kSkinToBone;     // 00
		NiBound                  m_kBound;          // 34
		NiSkinData_BoneVertData* m_pkBoneVertData;  // 44
		std::uint16_t            m_usVerts;         // 48
		std::uint16_t            pad4A;             // 4A
	};
	static_assert(sizeof(NiSkinData_BoneData) == 0x4C);
}
