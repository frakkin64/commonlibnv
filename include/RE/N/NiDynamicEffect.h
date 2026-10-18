#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAVObject.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class NiNode;

	class NiDynamicEffect :
		public NiAVObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDynamicEffect };
		static constexpr auto VTABLE{ VTABLE::NiDynamicEffect };

		void IncRevisionID()
		{
			using func_t = decltype(&NiDynamicEffect::IncRevisionID);
			static REL::Relocation<func_t> func{ Offsets::NiDynamicEffect::IncRevisionID };
			func(this);
		}

	public:
		// members
		bool                    m_bOn;                  // 9C
		std::uint8_t            m_ucEffectType;         // 9D
		std::uint16_t           pad9E;                  // 9E
		std::int32_t            m_iIndex;               // A0
		std::uint32_t           m_uiPushCount;          // A4
		std::uint32_t           m_uiRevID;              // A8
		NiTPointerList<NiNode*> m_kAffectedNodeList;    // AC
		NiTPointerList<NiNode*> m_kUnaffectedNodeList;  // B8
	};
	static_assert(sizeof(NiDynamicEffect) == 0xC4);
}
