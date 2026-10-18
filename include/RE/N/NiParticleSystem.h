#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiParticles.h"

namespace RE
{
	class NiPSysModifier;

	class NiParticleSystem :
		public NiParticles  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticleSystem };
		static constexpr auto VTABLE{ VTABLE::NiParticleSystem };

		// add
		virtual void Unk_3C();  // 3C
		virtual void Unk_3D();  // 3D

		std::uint32_t GetModifierCount() const
		{
			using func_t = decltype(&NiParticleSystem::GetModifierCount);
			static REL::Relocation<func_t> func{ Offsets::NiParticleSystem::GetModifierCount };
			return func(this);
		}

		NiPSysModifier* GetModifierAt(std::uint32_t uiIndex)
		{
			using func_t = decltype(&NiParticleSystem::GetModifierAt);
			static REL::Relocation<func_t> func{ Offsets::NiParticleSystem::GetModifierAt };
			return func(this, uiIndex);
		}

	public:
		// members
		// not placed: m_bWorldSpace, m_kModifierList, m_fLastTime, m_bResetSystem, m_bDynamicBounds, m_kUnmodifiedWorld
	};
}
