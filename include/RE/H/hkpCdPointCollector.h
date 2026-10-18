#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCdPoint;

	class __declspec(novtable) hkpCdPointCollector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCdPointCollector };
		static constexpr auto VTABLE{ VTABLE::hkpCdPointCollector };

		// add
		virtual ~hkpCdPointCollector() = default;           // 00
		virtual void addCdPoint(const hkpCdPoint* a_arg1);  // 01
		virtual void reset();                               // 02

		// members
		float m_earlyOutDistance;  // 04
	};
	static_assert(sizeof(hkpCdPointCollector) == 0x8);
}
