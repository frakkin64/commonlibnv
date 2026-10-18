#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESImageSpaceModifier;

	template <std::size_t N>
	class TESImageSpaceModifiableCountForm :
		public BaseFormComponent  // 00
	{
	public:
		// override (BaseFormComponent)
		virtual void InitializeDataComponent();                         // 00
		virtual void ClearDataComponent();                              // 01
		virtual void CopyComponent(BaseFormComponent* apCopyFC);        // 02
		virtual bool CompareComponent(BaseFormComponent* apCompareFC);  // 03

		// members
		TESImageSpaceModifier* pFormImageSpaceModifying[N];
	};
}
