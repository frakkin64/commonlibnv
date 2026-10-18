#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMatrix3.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkTransform;

	class alignas(16) hkpSimpleConstraintInfoInitInput
	{
	public:
		// members
		hkVector4          m_massRelPos;  // 00?
		hkMatrix3          m_invInertia;  // 10?
		hkVector4          m_invMasses;   // 40?
		const hkTransform* m_transform;   // 50?
		std::uint8_t       pad54[0xC];    // 54
	};
}
