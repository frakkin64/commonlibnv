#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDisplayCone.h"
#include "RE/H/hkDisplayPlane.h"
#include "RE/H/hkpConstraintDrawer.h"

namespace RE
{
	class alignas(16) hkpRagdollLimitsDrawer :
		public hkpConstraintDrawer  // 00
	{
	public:
		hkpRagdollLimitsDrawer* ctor()
		{
			using func_t = hkpRagdollLimitsDrawer*(__thiscall*)(hkpRagdollLimitsDrawer*);
			static REL::Relocation<func_t> func{ Offsets::hkpRagdollLimitsDrawer::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(hkpRagdollLimitsDrawer*);
			static REL::Relocation<func_t> func{ Offsets::hkpRagdollLimitsDrawer::dtor };
			func(this);
		}

	public:
		// members
		hkDisplayCone  m_twistCone;   // D0
		hkDisplayCone  m_planeCone1;  // 160
		hkDisplayCone  m_planeCone2;  // 1F0
		hkDisplayPlane m_plane;       // 280
	};
}
