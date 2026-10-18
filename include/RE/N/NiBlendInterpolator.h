#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiInterpolator.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiBlendInterpolator :
		public NiInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBlendInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBlendInterpolator };

		class InterpArrayItem;

		class InterpArrayItem
		{
		public:
			// members
			NiPointer<NiInterpolator> m_spInterpolator;     // 00?
			float                     m_fWeight;            // 04?
			float                     m_fNormalizedWeight;  // 08?
			char                      m_cPriority;          // 0C?
			std::uint8_t              pad0D[0x3];           // 0D
			float                     m_fEaseSpinner;       // 10?
			float                     m_fUpdateTime;        // 14?
		};

		// add
		virtual void Unk_37();  // 37
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
		virtual void Unk_3A();  // 3A

		// members
		std::uint8_t                          m_uFlags;                 // 0C
		std::uint8_t                          m_ucArraySize;            // 0D
		std::uint8_t                          m_ucInterpCount;          // 0E
		std::uint8_t                          m_ucSingleIdx;            // 0F
		char                                  m_cHighPriority;          // 10
		char                                  m_cNextHighPriority;      // 11
		std::uint16_t                         pad12;                    // 12
		NiBlendInterpolator::InterpArrayItem* m_pkInterpArray;          // 14
		NiInterpolator*                       m_pkSingleInterpolator;   // 18
		float                                 m_fWeightThreshold;       // 1C
		float                                 m_fSingleTime;            // 20
		float                                 m_fHighSumOfWeights;      // 24
		float                                 m_fNextHighSumOfWeights;  // 28
		float                                 m_fHighEaseSpinner;       // 2C
	};
}
