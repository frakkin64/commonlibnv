#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeContainer_ReferencePolicy.h"

namespace RE
{
	class hkpShape;

	class __declspec(novtable) hkpShapeContainer
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeContainer };
		static constexpr auto VTABLE{ VTABLE::hkpShapeContainer };

		using ReferencePolicy = hkpShapeContainer_ReferencePolicy;

		// add
		virtual ~hkpShapeContainer() = default;                                     // 00
		virtual std::int32_t getNumChildShapes() const;                             // 01
		virtual std::uint32_t getFirstKey();                                        // 02
		virtual std::uint32_t getNextKey(std::uint32_t a_arg1);                     // 03
		virtual std::uint32_t getCollisionFilterInfo(std::uint32_t a_arg1) const;   // 04
		virtual const hkpShape* getChildShape(std::uint32_t a_arg1, char* a_arg2);  // 05
		virtual bool isWeldingEnabled();                                            // 06
	};
	static_assert(sizeof(hkpShapeContainer) == 0x4);
}
