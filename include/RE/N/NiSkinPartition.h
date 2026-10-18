#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiSkinPartition_Partition.h"

namespace RE
{
	class NiSkinPartition :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSkinPartition };
		static constexpr auto VTABLE{ VTABLE::NiSkinPartition };

		using Partition = NiSkinPartition_Partition;

		// members
		// not placed: m_uiPartitions(absent)
		NiSkinPartition_Partition* m_pkPartitions;  // 08
	};
}
