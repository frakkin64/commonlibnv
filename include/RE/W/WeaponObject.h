#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBlendCollisionObject.h"
#include "RE/C/CFilter.h"

namespace RE
{
	class NiAVObject;
	class bhkWorld;

	class WeaponObject :
		public bhkBlendCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::WeaponObject };
		static constexpr auto VTABLE{ VTABLE::WeaponObject };

		static void UpdateChain(NiAVObject* apWeaponObj, bhkWorld* apWorld)
		{
			using func_t = decltype(&WeaponObject::UpdateChain);
			static REL::Relocation<func_t> func{ Offsets::WeaponObject::UpdateChain };
			func(apWeaponObj, apWorld);
		}

		void UpdateConstraints(bool abEnable, CFilter aOwnerFilter, NiAVObject* apRoot3d, bool abDefaultKeyframed)
		{
			using func_t = decltype(&WeaponObject::UpdateConstraints);
			static REL::Relocation<func_t> func{ Offsets::WeaponObject::UpdateConstraints };
			func(this, abEnable, aOwnerFilter, apRoot3d, abDefaultKeyframed);
		}
	};
}
