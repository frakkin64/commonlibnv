#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkVector4;

	class __declspec(novtable) hkGskShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hkGskShape };
		static constexpr auto VTABLE{ VTABLE::hkGskShape };

		// add
		virtual ~hkGskShape() = default;                                                                              // 00
		virtual void getSupportingVertex(const hkVector4* a_arg1, hkVector4* a_arg2);                                 // 01
		virtual void convertVertexIdsToVertices(std::uint8_t* a_arg1, std::int32_t a_arg2, hkVector4* a_arg3) const;  // 02
	};
}
