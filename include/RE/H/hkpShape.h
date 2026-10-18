#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpShapeType.h"
#include "RE/H/hkpShape_CalcSizeForSpuInput.h"

namespace RE
{
	class hkAabb;
	class hkBool;
	class hkTransform;
	class hkVector4;
	class hkVector4Comparison;
	class hkpCdBody;
	class hkpRayHitCollector;
	class hkpShapeContainer;
	class hkpShapeRayBundleCastInput;
	class hkpShapeRayBundleCastOutput;
	class hkpShapeRayCastInput;
	class hkpShapeRayCastOutput;

	class hkpShape :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShape };
		static constexpr auto VTABLE{ VTABLE::hkpShape };

		using CalcSizeForSpuInput = hkpShape_CalcSizeForSpuInput;

		// override (hkReferencedObject)
		virtual ~hkpShape() = default;  // 00

		// add
		virtual float getMaximumProjection(const hkVector4* a_arg1) const;                                                                                                                                    // 03
		virtual const hkpShapeContainer* getContainer();                                                                                                                                                      // 04
		virtual bool isConvex();                                                                                                                                                                              // 05
		virtual std::int32_t calcSizeForSpu(const hkpShape_CalcSizeForSpuInput* a_arg1, std::int32_t a_arg2) const;                                                                                           // 06
		virtual void getAabbImpl(const hkTransform* a_arg1, float a_arg2, hkAabb* a_arg3);                                                                                                                    // 07
		virtual hkBool* castRayImpl(hkBool* a_arg1, const hkpShapeRayCastInput* a_arg2, hkpShapeRayCastOutput* a_arg3);                                                                                       // 08
		virtual void castRayWithCollectorImpl(const hkpShapeRayCastInput* a_arg1, const hkpCdBody* a_arg2, hkpRayHitCollector* a_arg3);                                                                       // 09
		virtual hkVector4Comparison* castRayBundleImpl(hkVector4Comparison* a_arg1, const hkpShapeRayBundleCastInput* a_arg2, hkpShapeRayBundleCastOutput* a_arg3, const hkVector4Comparison* a_arg4) const;  // 0A

		// members
		std::uint32_t                       m_userData;  // 08
		hkEnum<hkpShapeType, std::uint32_t> m_type;      // 0C
	};
	static_assert(sizeof(hkpShape) == 0x10);
}
