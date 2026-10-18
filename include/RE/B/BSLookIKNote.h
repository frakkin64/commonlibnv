#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSAnimNote.h"

namespace RE
{
	class BSLookIKNote :
		public BSAnimNote  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLookIKNote };
		static constexpr auto VTABLE{ VTABLE::BSLookIKNote };

		enum class LOOKIK_STATE : std::int32_t
		{
			kBS_LIK_NONE = 0x0,
			kBS_LIK_START = 0x1,
			kBS_LIK_STOP = 0x2,
		};

		// members
		float                      fGain;   // 10
		BSLookIKNote::LOOKIK_STATE eState;  // 14
	};
}
