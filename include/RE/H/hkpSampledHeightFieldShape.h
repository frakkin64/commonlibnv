#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpHeightFieldShape.h"

namespace RE
{
	class hkpCdBody;
	class hkpHeightFieldShape_CollideSpheresInput;
	class hkpHeightFieldShape_hkpSphereCastInput;
	class hkpRayHitCollector;

	class alignas(16) hkpSampledHeightFieldShape :
		public hkpHeightFieldShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSampledHeightFieldShape };
		static constexpr auto VTABLE{ VTABLE::hkpSampledHeightFieldShape };

		// override (hkpHeightFieldShape)
		virtual ~hkpSampledHeightFieldShape() = default;  // 00

		// add
		virtual void collideSpheres(const hkpHeightFieldShape_CollideSpheresInput* a_arg1, hkVector4* a_arg2);                                     // 0B
		virtual void castSphere(const hkpHeightFieldShape_hkpSphereCastInput* a_arg1, const hkpCdBody* a_arg2, hkpRayHitCollector* a_arg3) const;  // 0C
		virtual float getHeightAtImpl(std::int32_t a_arg1, std::int32_t a_arg2);                                                                   // 0D
		virtual hkBool* getTriangleFlipImpl(hkBool* a_arg1);                                                                                       // 0E

		// members
		// not placed: m_heightfieldType(misaligned)
		std::int32_t m_xRes;                            // 10
		std::int32_t m_zRes;                            // 14
		float        m_heightCenter;                    // 18
		hkBool       m_useProjectionBasedHeight;        // 1C
		std::uint8_t pad1D[0x3];                        // 1D
		hkVector4    m_intToFloatScale;                 // 20
		hkVector4    m_floatToIntScale;                 // 30
		hkVector4    m_floatToIntOffsetFloorCorrected;  // 40
		hkVector4    m_extents;                         // 50
	};
	static_assert(sizeof(hkpSampledHeightFieldShape) == 0x60);
}
