#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkxCamera :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxCamera };
		static constexpr auto VTABLE{ VTABLE::hkxCamera };

		// override (hkReferencedObject)
		virtual ~hkxCamera() = default;  // 00

		// members
		std::uint8_t pad08[0x8];    // 08
		hkVector4    m_from;        // 10?
		hkVector4    m_focus;       // 20?
		hkVector4    m_up;          // 30?
		float        m_fov;         // 40?
		float        m_far;         // 44?
		float        m_near;        // 48?
		hkBool       m_leftHanded;  // 4C?
		std::uint8_t pad4D[0x3];    // 4D
	};
}
