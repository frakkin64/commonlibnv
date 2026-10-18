#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;
	class hkpShape;
	class hkpShapeContainer;
	class hkpShapeRayCastInput;

	class __declspec(novtable) hkpRayShapeCollectionFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRayShapeCollectionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpRayShapeCollectionFilter };

		// add
		virtual hkBool* isCollisionEnabled(hkBool* a_arg1, const hkpShapeRayCastInput* a_arg2, const hkpShape* a_arg3, const hkpShapeContainer* a_arg4, std::uint32_t a_arg5);  // 00
		virtual ~hkpRayShapeCollectionFilter() = default;                                                                                                                       // 01
	};
}
