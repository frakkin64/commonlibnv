#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeRayCastOutput.h"

namespace RE
{
	class hkpCollidable;

	class alignas(16) hkpWorldRayCastOutput :
		public hkpShapeRayCastOutput  // 00
	{
	public:
		void reset()
		{
			using func_t = decltype(&hkpWorldRayCastOutput::reset);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldRayCastOutput::reset };
			func(this);
		}

		hkpWorldRayCastOutput* ctor(hkpWorldRayCastOutput const& __that)
		{
			using func_t = hkpWorldRayCastOutput*(__thiscall*)(hkpWorldRayCastOutput*, hkpWorldRayCastOutput const&);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldRayCastOutput::ctor };
			return func(this, __that);
		}

		hkpWorldRayCastOutput& operator_call(hkpWorldRayCastOutput const& __that)
		{
			using func_t = decltype(&hkpWorldRayCastOutput::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldRayCastOutput::operator_call };
			return func(this, __that);
		}

	public:
		// members
		const hkpCollidable* m_rootCollidable;  // 50
		std::uint8_t         pad54[0xC];        // 54
	};
}
