#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiSkinData_BoneData.h"
#include "RE/N/NiSkinData_BoneVertData.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiSkinPartition;

	class NiSkinData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSkinData };
		static constexpr auto VTABLE{ VTABLE::NiSkinData };

		using BoneData = NiSkinData_BoneData;
		using BoneVertData = NiSkinData_BoneVertData;

		// members
		NiPointer<NiSkinPartition> m_spSkinPartition;    // 08
		NiTransform                m_kRootParentToSkin;  // 0C?
		NiSkinData_BoneData*       m_pkBoneData;         // 40
		std::uint32_t              m_uiBones;            // 44
	};
}
