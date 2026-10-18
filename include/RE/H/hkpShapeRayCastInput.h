#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpRayShapeCollectionFilter;

	class alignas(16) hkpShapeRayCastInput
	{
	public:
		hkpShapeRayCastInput* ctor()
		{
			using func_t = hkpShapeRayCastInput*(__thiscall*)(hkpShapeRayCastInput*);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeRayCastInput::ctor };
			return func(this);
		}

	public:
		// members
		hkVector4                          m_from;                      // 00?
		hkVector4                          m_to;                        // 10?
		std::uint32_t                      m_filterInfo;                // 20?
		const hkpRayShapeCollectionFilter* m_rayShapeCollectionFilter;  // 24?
		std::uint8_t                       pad28[0x8];                  // 28
	};
}
