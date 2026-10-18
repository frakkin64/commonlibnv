#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiLight.h"

namespace RE
{
	class NiDirectionalLight :
		public NiLight  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDirectionalLight };
		static constexpr auto VTABLE{ VTABLE::NiDirectionalLight };

		// members
		// not placed: m_kWorldDir
	};
}
