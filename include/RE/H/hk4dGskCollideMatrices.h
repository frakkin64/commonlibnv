#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkTransform.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hk4dGskCollideMatrices
	{
	public:
		// members
		hkTransform m_wTa;             // 00?
		hkTransform m_wTb;             // 40?
		hkTransform m_aTb;             // 80?
		hkVector4   m_plane;           // C0?
		hkVector4   m_pointOnPlane;    // D0?
		hkVector4   m_linearVel;       // E0?
		hkVector4   m_angularVel[2];   // F0?
		hkVector4   m_massCenterAinA;  // 110?
		hkVector4   m_massCenterBinA;  // 120?
	};
}
