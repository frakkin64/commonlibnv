#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkAabb;
	class hkBool;
	class hkpBvTreeShape;
	class hkpCdBody;
	class hkpCollisionInput;
	class hkpShapeContainer;

	class __declspec(novtable) hkpShapeCollectionFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeCollectionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpShapeCollectionFilter };

		// add
		virtual hkBool* isCollisionEnabled(hkBool* a_arg1, const hkpCollisionInput* a_arg2, const hkpCdBody* a_arg3, const hkpCdBody* a_arg4, const hkpShapeContainer* a_arg5, std::uint32_t a_arg6);                                                         // 01 (reversed overload group)
		virtual hkBool* isCollisionEnabled(hkBool* a_arg1, const hkpCollisionInput* a_arg2, const hkpCdBody* a_arg3, const hkpCdBody* a_arg4, const hkpShapeContainer* a_arg5, const hkpShapeContainer* a_arg6, std::uint32_t a_arg7, std::uint32_t a_arg8);  // 00 (reversed overload group)
		virtual std::int32_t numShapeKeyHitsLimitBreached(const hkpCollisionInput* a_arg1, const hkpCdBody* a_arg2, const hkpCdBody* a_arg3, const hkpBvTreeShape* a_arg4, hkAabb* a_arg5, std::uint32_t* a_arg6, std::int32_t a_arg7);                       // 02
		virtual ~hkpShapeCollectionFilter() = default;                                                                                                                                                                                                        // 03
	};
}
