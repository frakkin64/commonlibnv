#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiKeyBasedInterpolator.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiFloatData;
	class NiFloatKey;

	class NiFloatInterpolator :
		public NiKeyBasedInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiFloatInterpolator };

		void ReplaceKeys(NiFloatKey* pkKeys, std::uint32_t uiNumKeys, NiAnimationKey_KeyType eType)
		{
			using func_t = decltype(&NiFloatInterpolator::ReplaceKeys);
			static REL::Relocation<func_t> func{ Offsets::NiFloatInterpolator::ReplaceKeys };
			func(this, pkKeys, uiNumKeys, eType);
		}

	public:
		// members
		float                  m_fFloatValue;  // 0C
		NiPointer<NiFloatData> m_spFloatData;  // 10
		std::uint32_t          m_uiLastIdx;    // 14
	};
}
