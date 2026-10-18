#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkaKeyFrameHierarchyUtility_BodyData.h"
#include "RE/H/hkaKeyFrameHierarchyUtility_ControlData.h"
#include "RE/H/hkaKeyFrameHierarchyUtility_WorkElem.h"

namespace RE
{
	class hkaRagdollInstance;

	class hkaRagdollRigidBodyController
	{
	public:
		static void* operator_new(std::uint32_t nbytes)
		{
			using func_t = decltype(&hkaRagdollRigidBodyController::operator_new);
			static REL::Relocation<func_t> func{ Offsets::hkaRagdollRigidBodyController::operator_new };
			return func(nbytes);
		}

	public:
		// members
		hkArray<hkaKeyFrameHierarchyUtility_ControlData, hkContainerHeapAllocator> m_controlDataPalette;       // 00?
		hkArray<std::int32_t, hkContainerHeapAllocator>                            m_bodyIndexToPaletteIndex;  // 0C?
		hkaKeyFrameHierarchyUtility_BodyData                                       m_bodyData;                 // 18?
		hkArray<hkaKeyFrameHierarchyUtility_WorkElem, hkContainerHeapAllocator>    m_internalData;             // 2C?
		hkaRagdollInstance*                                                        m_ragdollInstance;          // 38?
		hkArray<std::int16_t, hkContainerHeapAllocator>                            m_rbParentIndices;          // 3C?
	};
}
