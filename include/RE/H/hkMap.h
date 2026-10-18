#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMapBase.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U, class V, class W>
	class hkMap :
		public hkMapBase<T, T, V>  // 00
	{
	public:
		class MustEndWithSemiColon
		{
		public:
		};

	};
}
