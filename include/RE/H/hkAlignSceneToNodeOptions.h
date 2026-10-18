#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkAlignSceneToNodeOptions :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkAlignSceneToNodeOptions };
		static constexpr auto VTABLE{ VTABLE::hkAlignSceneToNodeOptions };

		// override (hkReferencedObject)
		virtual ~hkAlignSceneToNodeOptions() = default;  // 00

		// members
		hkBool       m_invert;              // 08
		hkBool       m_transformPositionX;  // 09
		hkBool       m_transformPositionY;  // 0A
		hkBool       m_transformPositionZ;  // 0B
		hkBool       m_transformRotation;   // 0C
		hkBool       m_transformScale;      // 0D
		hkBool       m_transformSkew;       // 0E
		std::uint8_t pad0F;                 // 0F
		std::int32_t m_keyframe;            // 10
		hkStringPtr  m_nodeName;            // 14
	};
}
