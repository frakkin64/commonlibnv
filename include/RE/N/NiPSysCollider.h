#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPSysColliderManager;
	class NiPSysSpawnModifier;

	class NiPSysCollider :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysCollider };
		static constexpr auto VTABLE{ VTABLE::NiPSysCollider };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25

		// members
		float                     m_fBounce;          // 08
		bool                      m_bSpawnOnCollide;  // 0C
		bool                      m_bDieOnCollide;    // 0D
		std::uint16_t             pad0E;              // 0E
		NiPSysSpawnModifier*      m_pkSpawnModifier;  // 10
		NiPoint3                  m_kCollisionPoint;  // 14
		float                     m_fCollisionTime;   // 20
		NiPSysColliderManager*    m_pkManager;        // 24
		NiPointer<NiPSysCollider> m_spNext;           // 28
	};
	static_assert(sizeof(NiPSysCollider) == 0x2C);
}
