#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPSysCollider.h"
#include "RE/N/NiPlane.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiAVObject;

	class NiPSysPlanarCollider :
		public NiPSysCollider  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysPlanarCollider };
		static constexpr auto VTABLE{ VTABLE::NiPSysPlanarCollider };

		// members
		NiAVObject* m_pkColliderObj;           // 2C
		float       m_fWidth;                  // 30
		float       m_fHeight;                 // 34
		NiPoint3    m_kXAxis;                  // 38
		NiPoint3    m_kYAxis;                  // 44
		float       m_fHalfSqScaledWidth;      // 50
		float       m_fHalfSqScaledHeight;     // 54
		NiPlane     m_kPlane;                  // 58
		NiPoint3    m_kPosition;               // 68
		NiMatrix3   m_kRotation;               // 74?
		NiTransform m_kLastColliderTransform;  // 98?
		NiTransform m_kLastPSysTransform;      // CC?
	};
}
