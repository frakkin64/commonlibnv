#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPoint.h"

namespace RE
{
	class hkpCollidable;

	class alignas(16) hkpRootCdPoint
	{
	public:
		hkpRootCdPoint& operator_call(hkpRootCdPoint const& __that)
		{
			using func_t = decltype(&hkpRootCdPoint::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkpRootCdPoint::operator_call };
			return func(this, __that);
		}

		hkpRootCdPoint* ctor(hkpRootCdPoint const& __that)
		{
			using func_t = hkpRootCdPoint*(__thiscall*)(hkpRootCdPoint*, hkpRootCdPoint const&);
			static REL::Relocation<func_t> func{ Offsets::hkpRootCdPoint::ctor };
			return func(this, __that);
		}

	public:
		// members
		hkContactPoint       m_contact;          // 00
		const hkpCollidable* m_rootCollidableA;  // 20
		std::uint32_t        m_shapeKeyA;        // 24
		std::uint32_t        m_shapeKeysA[8];    // 28
		const hkpCollidable* m_rootCollidableB;  // 48
		std::uint32_t        m_shapeKeyB;        // 4C?
		std::uint32_t        m_shapeKeysB[8];    // 50?
	};
}
