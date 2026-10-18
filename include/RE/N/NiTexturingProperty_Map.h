#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiTexture;
	class NiTextureTransform;

	class __declspec(novtable) NiTexturingProperty_Map
	{
	public:
		virtual ~NiTexturingProperty_Map() = default;  // 00

		// members
		std::uint16_t        m_uFlags;              // 04?
		std::uint16_t        pad06;                 // 06
		NiPointer<NiTexture> m_spTexture;           // 08?
		NiTextureTransform*  m_pkTextureTransform;  // 0C?
	};
}
