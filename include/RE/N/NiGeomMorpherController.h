#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiInterpController.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiInterpolator;
	class NiMorphData;

	class NiGeomMorpherController :
		public NiInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeomMorpherController };
		static constexpr auto VTABLE{ VTABLE::NiGeomMorpherController };

		class InterpItem;

		class InterpItem
		{
		public:
			// members
			NiPointer<NiInterpolator> m_spInterpolator;  // 00?
			float                     m_fWeight;         // 04?
		};

		// add
		virtual void Unk_3A();  // 3A
		virtual void Unk_3B();  // 3B

		// members
		std::uint16_t                        m_uFlags;             // 34
		std::uint16_t                        pad36;                // 36
		NiPointer<NiMorphData>               m_spMorphData;        // 38
		NiGeomMorpherController::InterpItem* m_pkInterpItems;      // 3C
		bool                                 m_bNeedPreDisplay;    // 40
		bool                                 m_bIgnoreBaseTarget;  // 41
		bool                                 m_bAlwaysUpdate;      // 42
		bool                                 m_bBoundCalculated;   // 43
	};
}
