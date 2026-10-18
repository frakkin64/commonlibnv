#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T, class U>
	class __declspec(novtable) hkGeometryProcessing_IFunction
	{
	public:
		// add
		virtual ~hkGeometryProcessing_IFunction() = default;  // 00
		virtual U evaluate(const T* a_arg1);                  // 01
	};
}
