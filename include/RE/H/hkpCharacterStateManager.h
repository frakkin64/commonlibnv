#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpCharacterStateType.h"

namespace RE
{
	class hkpCharacterState;

	class hkpCharacterStateManager :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCharacterStateManager };
		static constexpr auto VTABLE{ VTABLE::hkpCharacterStateManager };

		// override (hkReferencedObject)
		virtual ~hkpCharacterStateManager() = default;  // 00

		hkpCharacterStateManager* ctor()
		{
			using func_t = hkpCharacterStateManager*(__thiscall*)(hkpCharacterStateManager*);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterStateManager::ctor };
			return func(this);
		}

		void registerState(hkpCharacterState* state, hkpCharacterStateType stateType)
		{
			using func_t = decltype(&hkpCharacterStateManager::registerState);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterStateManager::registerState };
			func(this, state, stateType);
		}

	public:
		// members
		hkpCharacterState* m_registeredState[11];  // 08?
	};
}
