#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpConstraintMotor :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintMotor };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintMotor };

		enum class MotorType : std::int32_t
		{
			kTYPE_TEXTURE = 0x0,
			kTYPE_TEXTURE_CUBE = 0x1,
			kTYPE_TEXTURE_VOLUME = 0x2,
			kTYPE_VERTEXBUFFER = 0x3,
			kTYPE_INDEXBUFFER = 0x4,
			kTYPE_INVALID = 0xFFFF,
			kTYPE_COUNT = 0x10000,
		};

		// override (hkReferencedObject)
		virtual ~hkpConstraintMotor() = default;  // 00

		// add
		virtual hkpConstraintMotor* clone();  // 03

		// members
		hkEnum<hkpConstraintMotor::MotorType, std::int8_t> m_type;      // 08
		std::uint8_t                                       pad09[0x3];  // 09
	};
}
