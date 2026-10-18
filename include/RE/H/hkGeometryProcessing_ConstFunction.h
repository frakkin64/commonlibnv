#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	class hkVector4;

	template <class T>
	class hkGeometryProcessing_ConstFunction :
		public T  // 00
	{
	public:
		// add
		virtual ~hkGeometryProcessing_ConstFunction() = default;  // 00
		virtual float evaluate(const hkVector4* a_arg1);          // 01

		// members
		float m_value;
	};
}
