#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"

namespace RE
{
	class hkpPhysicsCommand
	{
	public:
		enum class TYPE : std::int32_t
		{
			kTYPE_ADD_CONSTRAINT_TO_LOCKED_ISLAND = 0x0,
			kTYPE_REMOVE_CONSTRAINT_FROM_LOCKED_ISLAND = 0x1,
			kTYPE_END = 0x2,
		};

		// members
		hkEnum<hkpPhysicsCommand::TYPE, std::uint8_t> m_type;      // 00?
		std::uint8_t                                  pad01[0x3];  // 01
	};
}
