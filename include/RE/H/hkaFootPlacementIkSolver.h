#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkaSkeleton;

	class alignas(16) hkaFootPlacementIkSolver :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaFootPlacementIkSolver };
		static constexpr auto VTABLE{ VTABLE::hkaFootPlacementIkSolver };

		class Setup;

		class alignas(16) Setup
		{
		public:
			// members
			const hkaSkeleton* m_skeleton;                  // 00?
			std::int16_t       m_hipIndex;                  // 04?
			std::int16_t       m_kneeIndex;                 // 06?
			std::int16_t       m_ankleIndex;                // 08?
			std::uint8_t       pad0A[0x6];                  // 0A
			hkVector4          m_kneeAxisLS;                // 10?
			hkVector4          m_footEndLS;                 // 20?
			hkVector4          m_worldUpDirectionWS;        // 30?
			hkVector4          m_modelUpDirectionMS;        // 40?
			float              m_originalGroundHeightMS;    // 50?
			float              m_footPlantedAnkleHeightMS;  // 54?
			float              m_footRaisedAnkleHeightMS;   // 58?
			float              m_maxAnkleHeightMS;          // 5C?
			float              m_minAnkleHeightMS;          // 60?
			float              m_cosineMaxKneeAngle;        // 64?
			float              m_cosineMinKneeAngle;        // 68?
			float              m_raycastDistanceUp;         // 6C?
			float              m_raycastDistanceDown;       // 70?
			bool               m_useFootLocking;            // 74?
			std::uint8_t       pad75[0xB];                  // 75
		};

		// override (hkReferencedObject)
		virtual ~hkaFootPlacementIkSolver() = default;  // 00

		// members
		std::uint8_t                    pad08[0x8];                      // 08
		hkaFootPlacementIkSolver::Setup m_setup;                         // 10?
		float                           m_currentWeight;                 // 90?
		float                           m_previousGroundHeightWS;        // 94?
		std::uint8_t                    pad98[0x8];                      // 98
		hkVector4                       m_previousGroundNormalWS;        // A0?
		float                           m_previousVerticalDisplacement;  // B0?
		hkBool                          m_isFootLocked;                  // B4?
		std::uint8_t                    padB5[0xB];                      // B5
		hkVector4                       m_lockedFootPositionInWS;        // C0?
		hkVector4                       m_lockedFootEndPositionInWS;     // D0?
		hkVector4                       m_footUnlockingOffset;           // E0?
	};
}
