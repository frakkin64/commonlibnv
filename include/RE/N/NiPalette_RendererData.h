#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiPalette;

	class __declspec(novtable) NiPalette_RendererData
	{
	public:
		virtual ~NiPalette_RendererData() = default;  // 00

		// members
		NiPalette* m_pkPalette;  // 04?
	};
}
