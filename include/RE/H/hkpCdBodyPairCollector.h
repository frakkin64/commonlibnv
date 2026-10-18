#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpCdBody;

	class __declspec(novtable) hkpCdBodyPairCollector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCdBodyPairCollector };
		static constexpr auto VTABLE{ VTABLE::hkpCdBodyPairCollector };

		// add
		virtual ~hkpCdBodyPairCollector() = default;                                   // 00
		virtual void addCdBodyPair(const hkpCdBody* a_arg1, const hkpCdBody* a_arg2);  // 01
		virtual void reset();                                                          // 02

		// members
		hkBool       m_earlyOut;  // 04
		std::uint8_t pad05[0x3];  // 05
	};
	static_assert(sizeof(hkpCdBodyPairCollector) == 0x8);
}
