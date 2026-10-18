#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3InterpController.h"

namespace RE
{
	class NiMaterialColorController :
		public NiPoint3InterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMaterialColorController };
		static constexpr auto VTABLE{ VTABLE::NiMaterialColorController };

		// members
		std::uint16_t m_uFlags;  // 38
		std::uint16_t pad3A;     // 3A
	};
}
