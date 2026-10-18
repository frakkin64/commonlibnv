#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpCharacterStateType.h"

namespace RE
{
	class hkpCharacterStateManager;

	class hkpCharacterContext :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCharacterContext };
		static constexpr auto VTABLE{ VTABLE::hkpCharacterContext };

		enum class CharacterType : std::int32_t
		{
			kHK_CHARACTER_PROXY = 0x0,
			kHK_CHARACTER_RIGIDBODY = 0x1,
		};

		// override (hkReferencedObject)
		virtual ~hkpCharacterContext() = default;  // 00

		hkpCharacterContext* ctor(hkpCharacterStateManager const* Manager, hkpCharacterStateType initialState)
		{
			using func_t = hkpCharacterContext*(__thiscall*)(hkpCharacterContext*, hkpCharacterStateManager const*, hkpCharacterStateType);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterContext::ctor };
			return func(this, Manager, initialState);
		}

	public:
		// members
		hkpCharacterContext::CharacterType m_characterType;          // 08?
		const hkpCharacterStateManager*    m_stateManager;           // 0C?
		hkpCharacterStateType              m_currentState;           // 10?
		hkpCharacterStateType              m_previousState;          // 14?
		hkBool                             m_filterEnable;           // 18?
		std::uint8_t                       pad19[0x3];               // 19
		float                              m_maxLinearAcceleration;  // 1C?
		float                              m_maxLinearVelocity;      // 20?
		float                              m_gain;                   // 24?
		std::uint8_t                       pad28[0x8];               // 28
	};
	static_assert(sizeof(hkpCharacterContext) == 0x30);
}
