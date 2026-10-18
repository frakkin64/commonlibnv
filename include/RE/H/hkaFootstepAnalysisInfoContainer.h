#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaFootstepAnalysisInfo;

	class hkaFootstepAnalysisInfoContainer :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaFootstepAnalysisInfoContainer };
		static constexpr auto VTABLE{ VTABLE::hkaFootstepAnalysisInfoContainer };

		// override (hkReferencedObject)
		virtual ~hkaFootstepAnalysisInfoContainer() = default;  // 00

		hkaFootstepAnalysisInfo* newPreviewInfo(std::int32_t numFrames, float a_arg2, float a_arg3, float duration, char const* posTol, char const* velTol, char const* name, char const* nameStrike, char const* nameLift)
		{
			using func_t = decltype(&hkaFootstepAnalysisInfoContainer::newPreviewInfo);
			static REL::Relocation<func_t> func{ Offsets::hkaFootstepAnalysisInfoContainer::newPreviewInfo };
			return func(this, numFrames, a_arg2, a_arg3, duration, posTol, velTol, name, nameStrike, nameLift);
		}

	public:
		// members
		hkArray<hkRefPtr<hkaFootstepAnalysisInfo>, hkContainerHeapAllocator> m_previewInfo;  // 08?
	};
}
