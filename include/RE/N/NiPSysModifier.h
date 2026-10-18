#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiPSysData;
	class NiParticleSystem;

	class NiPSysModifier :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysModifier };

		// add
		virtual void Update(float a_arg1, NiPSysData* a_arg2);                     // 23
		virtual void Initialize(NiPSysData* apData, std::uint16_t aiNewParticle);  // 24
		virtual void HandleReset();                                                // 25
		virtual void Unk_26();                                                     // 26
		virtual void Unk_27();                                                     // 27
		virtual bool IsBSPSysStripUpdateModifier();                                // 28

	protected:
		NiPSysModifier* ctor()
		{
			using func_t = NiPSysModifier*(__thiscall*)(NiPSysModifier*);
			static REL::Relocation<func_t> func{ Offsets::NiPSysModifier::ctor };
			return func(this);
		}

	public:
		// members
		NiFixedString     m_kName;     // 08
		std::uint32_t     m_uiOrder;   // 0C
		NiParticleSystem* m_pkTarget;  // 10
		bool              m_bActive;   // 14
		std::uint8_t      pad15[0x3];  // 15
	};
	static_assert(sizeof(NiPSysModifier) == 0x18);
}
