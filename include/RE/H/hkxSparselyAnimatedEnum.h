#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRefPtr.h"
#include "RE/H/hkxSparselyAnimatedInt.h"

namespace RE
{
	class hkxEnum;

	class hkxSparselyAnimatedEnum :
		public hkxSparselyAnimatedInt  // 00
	{
	public:
		// override (hkxSparselyAnimatedInt)
		virtual ~hkxSparselyAnimatedEnum() = default;  // 00

		// members
		hkRefPtr<hkxEnum> m_enum;  // 20
	};
}
