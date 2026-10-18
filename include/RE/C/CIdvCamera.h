#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CVec3.h"

namespace RE
{
	class __declspec(novtable) CIdvCamera
	{
	public:
		static constexpr auto RTTI{ RTTI::CIdvCamera };
		static constexpr auto VTABLE{ VTABLE::CIdvCamera };

		// add
		virtual ~CIdvCamera() = default;                                // 00
		virtual CIdvCamera const& operator_(CIdvCamera const& cRight);  // 01

		// members
		CVec3 m_cPosition;  // 04
	};
}
