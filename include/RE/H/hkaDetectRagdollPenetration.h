#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkaDetectRagdollPenetration_BonePenetration.h"
#include "RE/H/hkaDetectRagdollPenetration_Output.h"

namespace RE
{
	class hkaRagdollRaycastInterface;
	class hkaSkeleton;
	class hkpAabbPhantom;

	class hkaDetectRagdollPenetration :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaDetectRagdollPenetration };
		static constexpr auto VTABLE{ VTABLE::hkaDetectRagdollPenetration };

		using BonePenetration = hkaDetectRagdollPenetration_BonePenetration;
		using Output = hkaDetectRagdollPenetration_Output;

		class Setup;

		enum class BonePenetrationStatus : std::int32_t
		{
			kHK_NOP = 0x0,
			kHK_YESP = 0x1,
			kHK_YESP_DESCENDANT = 0x2,
		};

		class Setup
		{
		public:
			// members
			const hkaSkeleton*          m_ragdollSkeleton;   // 00?
			hkaRagdollRaycastInterface* m_raycastInterface;  // 04?
			hkpAabbPhantom*             m_ragdollPhantom;    // 08?
		};

		// override (hkReferencedObject)
		virtual ~hkaDetectRagdollPenetration() = default;  // 00

		// members
		hkaDetectRagdollPenetration::Setup                                                    m_setup;         // 08?
		std::int32_t                                                                          m_numBones;      // 14?
		hkArray<hkaDetectRagdollPenetration::BonePenetrationStatus, hkContainerHeapAllocator> m_boneStates;    // 18?
		hkBool                                                                                m_ragdollIsOut;  // 24?
		std::uint8_t                                                                          pad25[0x3];      // 25
	};
}
