#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpAction.h"

namespace RE
{
	class hkpEntity;

	class hkpUnaryAction :
		public hkpAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpUnaryAction };
		static constexpr auto VTABLE{ VTABLE::hkpUnaryAction };

		// override (hkpAction)
		virtual ~hkpUnaryAction() = default;                                                       // 00
		virtual void getEntities(hkArray<hkpEntity*, hkContainerHeapAllocator>* a_arg1) override;  // 04
		virtual void entityRemovedCallback(hkpEntity* a_arg1) override;                            // 06

		hkpUnaryAction* ctor(hkpEntity* entity, std::uint32_t userData)
		{
			using func_t = hkpUnaryAction*(__thiscall*)(hkpUnaryAction*, hkpEntity*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpUnaryAction::ctor };
			return func(this, entity, userData);
		}

	public:
		// members
		hkpEntity* m_entity;  // 18
	};
}
