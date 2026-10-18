#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/Random.h"

namespace RE
{
	class Uniform :
		public Random  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Uniform };
		static constexpr auto VTABLE{ VTABLE::Uniform };

		// override (Random)
		virtual ~Uniform() = default;   // 00
		virtual float Next() override;  // 01
		virtual char* Name() override;  // 02
	};
}
