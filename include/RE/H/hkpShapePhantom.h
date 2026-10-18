#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMotionState.h"
#include "RE/H/hkWorldOperation_Result.h"
#include "RE/H/hkpPhantom.h"

namespace RE
{
	class hkAabb;
	class hkTransform;
	class hkVector4;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionInput;
	class hkpLinearCastInput;
	class hkpShape;

	class alignas(16) hkpShapePhantom :
		public hkpPhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapePhantom };
		static constexpr auto VTABLE{ VTABLE::hkpShapePhantom };

		// override (hkpPhantom)
		virtual ~hkpShapePhantom() = default;                                      // 00
		virtual hkWorldOperation_Result setShape(hkpShape const* shape) override;  // 03
		virtual hkMotionState* getMotionState() override;                          // 04
		virtual void calcAabb(hkAabb* a_arg1) override;                            // 06
		virtual void deallocateInternalArrays() override;                          // 0D

		// add
		virtual void setPositionAndLinearCast(const hkVector4* a_arg1, const hkpLinearCastInput* a_arg2, hkpCdPointCollector* a_arg3, hkpCdPointCollector* a_arg4);     // 0E
		virtual void setTransformAndLinearCast(const hkTransform* a_arg1, const hkpLinearCastInput* a_arg2, hkpCdPointCollector* a_arg3, hkpCdPointCollector* a_arg4);  // 0F
		virtual void getClosestPoints(hkpCdPointCollector* a_arg1, const hkpCollisionInput* a_arg2);                                                                    // 10
		virtual void getPenetrations(hkpCdBodyPairCollector* a_arg1, const hkpCollisionInput* a_arg2);                                                                  // 11

		// members
		std::uint8_t  padA4[0xC];     // A4
		hkMotionState m_motionState;  // B0
	};
}
