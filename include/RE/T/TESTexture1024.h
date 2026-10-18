#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESTexture.h"

namespace RE
{
	class TESTexture1024 :
		public TESTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESTexture1024 };
		static constexpr auto VTABLE{ VTABLE::TESTexture1024 };

		// override (TESTexture)
		virtual std::uint32_t GetMaxAllowedSize() override;  // 04
	};
	static_assert(sizeof(TESTexture1024) == 0xC);
}
