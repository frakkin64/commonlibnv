#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpWorldCinfo_BroadPhaseBorderBehaviour.h"
#include "RE/H/hkpWorldCinfo_ContactPointGeneration.h"
#include "RE/H/hkpWorldCinfo_SimulationType.h"
#include "RE/H/hkpWorldCinfo_TreeUpdateType.h"

namespace RE
{
	class hkWorldMemoryAvailableWatchDog;
	class hkpCollisionFilter;
	class hkpConvexListFilter;

	class alignas(16) hkpWorldCinfo :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldCinfo };
		static constexpr auto VTABLE{ VTABLE::hkpWorldCinfo };

		using BroadPhaseBorderBehaviour = hkpWorldCinfo_BroadPhaseBorderBehaviour;
		using ContactPointGeneration = hkpWorldCinfo_ContactPointGeneration;
		using SimulationType = hkpWorldCinfo_SimulationType;
		using TreeUpdateType = hkpWorldCinfo_TreeUpdateType;

		// override (hkReferencedObject)
		virtual ~hkpWorldCinfo() = default;  // 00

		hkpWorldCinfo* ctor()
		{
			using func_t = hkpWorldCinfo*(__thiscall*)(hkpWorldCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldCinfo::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: m_treeUpdateType(misaligned), m_simulationType(misaligned)
		std::uint8_t                                                 pad08[0x8];                                                   // 08
		hkVector4                                                    m_gravity;                                                    // 10
		std::int32_t                                                 m_broadPhaseQuerySize;                                        // 20
		float                                                        m_contactRestingVelocity;                                     // 24
		hkEnum<hkpWorldCinfo_BroadPhaseBorderBehaviour, std::int8_t> m_broadPhaseBorderBehaviour;                                  // 28
		hkBool                                                       m_mtPostponeAndSortBroadPhaseBorderCallbacks;                 // 29
		std::uint8_t                                                 pad2A[0x6];                                                   // 2A
		hkAabb                                                       m_broadPhaseWorldAabb;                                        // 30
		hkBool                                                       m_useKdTree;                                                  // 50
		hkBool                                                       m_useMultipleTree;                                            // 51
		std::uint8_t                                                 pad52;                                                        // 52
		hkBool                                                       m_autoUpdateKdTree;                                           // 53
		float                                                        m_collisionTolerance;                                         // 54
		hkRefPtr<hkpCollisionFilter>                                 m_collisionFilter;                                            // 58
		hkRefPtr<hkpConvexListFilter>                                m_convexListFilter;                                           // 5C
		float                                                        m_expectedMaxLinearVelocity;                                  // 60
		std::int32_t                                                 m_sizeOfToiEventQueue;                                        // 64
		float                                                        m_expectedMinPsiDeltaTime;                                    // 68
		hkRefPtr<hkWorldMemoryAvailableWatchDog>                     m_memoryWatchDog;                                             // 6C
		std::int32_t                                                 m_broadPhaseNumMarkers;                                       // 70
		hkEnum<hkpWorldCinfo_ContactPointGeneration, std::int8_t>    m_contactPointGeneration;                                     // 74
		hkBool                                                       m_allowToSkipConfirmedCallbacks;                              // 75
		std::uint16_t                                                pad76;                                                        // 76
		float                                                        m_solverTau;                                                  // 78
		float                                                        m_solverDamp;                                                 // 7C
		std::int32_t                                                 m_solverIterations;                                           // 80
		std::int32_t                                                 m_solverMicrosteps;                                           // 84
		float                                                        m_maxConstraintViolation;                                     // 88
		hkBool                                                       m_forceCoherentConstraintOrderingInSolver;                    // 8C
		std::uint8_t                                                 pad8D[0x3];                                                   // 8D
		float                                                        m_snapCollisionToConvexEdgeThreshold;                         // 90
		float                                                        m_snapCollisionToConcaveEdgeThreshold;                        // 94
		hkBool                                                       m_enableToiWeldRejection;                                     // 98
		hkBool                                                       m_enableDeprecatedWelding;                                    // 99
		std::uint16_t                                                pad9A;                                                        // 9A
		float                                                        m_iterativeLinearCastEarlyOutDistance;                        // 9C
		std::int32_t                                                 m_iterativeLinearCastMaxIterations;                           // A0
		std::uint8_t                                                 m_deactivationNumInactiveFramesSelectFlag0;                   // A4
		std::uint8_t                                                 m_deactivationNumInactiveFramesSelectFlag1;                   // A5
		std::uint8_t                                                 m_deactivationIntegrateCounter;                               // A6
		hkBool                                                       m_shouldActivateOnRigidBodyTransformChange;                   // A7
		float                                                        m_deactivationReferenceDistance;                              // A8
		float                                                        m_toiCollisionResponseRotateNormal;                           // AC
		std::int32_t                                                 m_maxSectorsPerCollideTask;                                   // B0
		hkBool                                                       m_processToisMultithreaded;                                   // B4
		std::uint8_t                                                 padB5[0x3];                                                   // B5
		std::int32_t                                                 m_maxEntriesPerToiCollideTask;                                // B8
		std::int32_t                                                 m_maxNumToiCollisionPairsSinglethreaded;                      // BC
		float                                                        m_numToisTillAllowedPenetrationSimplifiedToi;                 // C0
		float                                                        m_numToisTillAllowedPenetrationToi;                           // C4
		float                                                        m_numToisTillAllowedPenetrationToiHigher;                     // C8
		float                                                        m_numToisTillAllowedPenetrationToiForced;                     // CC
		hkBool                                                       m_enableDeactivation;                                         // D0
		std::uint8_t                                                 padD1;                                                        // D1
		hkBool                                                       m_enableSimulationIslands;                                    // D2
		std::uint8_t                                                 padD3;                                                        // D3
		std::uint32_t                                                m_minDesiredIslandSize;                                       // D4
		hkBool                                                       m_processActionsInSingleThread;                               // D8
		hkBool                                                       m_allowIntegrationOfIslandsWithoutConstraintsInASeparateJob;  // D9
		std::uint16_t                                                padDA;                                                        // DA
		float                                                        m_frameMarkerPsiSnap;                                         // DC
		hkBool                                                       m_fireCollisionCallbacks;                                     // E0
		std::uint8_t                                                 padE1[0xF];                                                   // E1
	};
	static_assert(sizeof(hkpWorldCinfo) == 0xF0);
}
