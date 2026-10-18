#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpHeightFieldShape.h"

namespace RE
{
	class hkpCdBody;
	class hkpHeightFieldShape_CollideSpheresInput;
	class hkpHeightFieldShape_hkpSphereCastInput;
	class hkpRayHitCollector;

	class alignas(16) hkpPlaneShape :
		public hkpHeightFieldShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPlaneShape };
		static constexpr auto VTABLE{ VTABLE::hkpPlaneShape };

		// override (hkpHeightFieldShape)
		virtual ~hkpPlaneShape() = default;  // 00

		// add
		virtual void collideSpheres(const hkpHeightFieldShape_CollideSpheresInput* a_arg1, hkVector4* a_arg2) const;                               // 0B
		virtual void castSphere(const hkpHeightFieldShape_hkpSphereCastInput* a_arg1, const hkpCdBody* a_arg2, hkpRayHitCollector* a_arg3) const;  // 0C

		// members
		hkVector4 m_plane;            // 10
		hkVector4 m_aabbCenter;       // 20
		hkVector4 m_aabbHalfExtents;  // 30
	};
}
