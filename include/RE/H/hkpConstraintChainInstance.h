#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkpConstraintInstance.h"

namespace RE
{
	class hkpEntity;

	class hkpConstraintChainInstance :
		public hkpConstraintInstance  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintChainInstance };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintChainInstance };

		// override (hkpConstraintInstance)
		virtual ~hkpConstraintChainInstance() = default;                 // 00
		virtual void entityRemovedCallback(hkpEntity* entity) override;  // 04

		hkpConstraintChainInstance* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkpConstraintChainInstance*(__thiscall*)(hkpConstraintChainInstance*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpConstraintChainInstance::ctor };
			return func(this, f);
		}

	public:
		// members
		// not placed: m_chainedEntities, m_action
	};
}
