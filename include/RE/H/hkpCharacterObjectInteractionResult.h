#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpCharacterObjectInteractionResult
	{
	public:
		// members
		hkVector4 m_objectImpulse;    // 00?
		hkVector4 m_impulsePosition;  // 10?
	};
}
