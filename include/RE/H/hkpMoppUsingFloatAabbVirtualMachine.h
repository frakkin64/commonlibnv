#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery.h"
#include "RE/H/hkpMoppVirtualMachine.h"

namespace RE
{
	template <class T, class U>
	class hkpMoppUsingFloatAabbVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
		class hkpMoppUsingFloatAabbVirtualMachineQueryInt :
			public hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery  // 00
		{
		public:
			// members
			// not placed: m_offset_x, m_offset_y, m_offset_z
			std::int32_t m_shift;
		};

		class hkpMoppTempAabb
		{
		public:
			// members
			hkAabb m_aabb;
		};

		// members
		float m_ItoFScale;
		U m_queryObject;
	};
}
