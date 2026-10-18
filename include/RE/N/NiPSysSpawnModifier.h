#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiPSysSpawnModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysSpawnModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysSpawnModifier };

		// add
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A

		// members
		std::uint16_t m_usNumSpawnGenerations;  // 18
		std::uint16_t pad1A;                    // 1A
		float         m_fPercentageSpawned;     // 1C
		std::uint16_t m_usMinNumToSpawn;        // 20
		std::uint16_t m_usMaxNumToSpawn;        // 22
		float         m_fSpawnSpeedChaos;       // 24
		float         m_fSpawnDirChaos;         // 28
		float         m_fLifeSpan;              // 2C
		float         m_fLifeSpanVar;           // 30
	};
}
