#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpSurfaceInfo
	{
	public:
		enum class SupportedState : std::int32_t
		{
			kUNSUPPORTED = 0x0,
			kSLIDING = 0x1,
			kSUPPORTED = 0x2,
		};

		// members
		hkpSurfaceInfo::SupportedState m_supportedState;         // 00
		std::uint8_t                   pad04[0xC];               // 04
		hkVector4                      m_surfaceNormal;          // 10
		hkVector4                      m_surfaceVelocity;        // 20
		float                          m_surfaceDistanceExcess;  // 30
		hkBool                         m_surfaceIsDynamic;       // 34
		std::uint8_t                   pad35[0xB];               // 35
	};
	static_assert(sizeof(hkpSurfaceInfo) == 0x40);
}
