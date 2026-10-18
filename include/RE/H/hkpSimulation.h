#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpStepResult.h"

namespace RE
{
	class hkStepInfo;
	class hkpAgentNnEntry;
	class hkpEntity;
	class hkpWorld;

	class hkpSimulation :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimulation };
		static constexpr auto VTABLE{ VTABLE::hkpSimulation };

		enum class FindContacts : std::int32_t
		{
			kFIND_CONTACTS_DEFAULT = 0x0,
			kFIND_CONTACTS_EXTRA = 0x1,
		};

		enum class LastProcessingStep : std::int32_t
		{
			kINTEGRATE = 0x0,
			kCOLLIDE = 0x1,
		};

		enum class ResetCollisionInformation : std::int32_t
		{
			kRESET_TOI = 0x1,
			kRESET_TIM = 0x2,
			kRESET_AABB = 0x4,
			kRESET_ALL = 0x7,
		};

		// override (hkReferencedObject)
		virtual ~hkpSimulation() = default;  // 00

		// add
		virtual hkpStepResult stepDeltaTime(float physicsDeltaTime);                                                                                                                       // 03
		virtual hkpStepResult integrate(float a_arg1);                                                                                                                                     // 04
		virtual hkpStepResult collide();                                                                                                                                                   // 05
		virtual hkpStepResult advanceTime();                                                                                                                                               // 06
		virtual void collideEntitiesDiscrete(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world, hkStepInfo const& stepInfo, hkpSimulation::FindContacts findExtraContacts);  // 07
		virtual void resetCollisionInformationForEntities(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world, hkpSimulation::ResetCollisionInformation resetInfo);            // 08
		virtual void assertThereIsNoCollisionInformationForEntities(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world);                                                      // 09
		virtual void removeCollisionInformationForAgent(hkpAgentNnEntry* agent);                                                                                                           // 0A
		virtual void assertThereIsNoCollisionInformationForAgent(hkpAgentNnEntry* agent);                                                                                                  // 0B
		virtual void reintegrateAndRecollideEntities(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world, std::int32_t reintegrateRecollideMode);                              // 0C
		virtual void collideInternal(hkStepInfo const& stepInfoIn);                                                                                                                        // 0D
		virtual void warpTime(float deltaTime);                                                                                                                                            // 0E

		static void collideEntitiesBroadPhaseDiscrete(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world)
		{
			using func_t = decltype(&hkpSimulation::collideEntitiesBroadPhaseDiscrete);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulation::collideEntitiesBroadPhaseDiscrete };
			func(entities, numEntities, world);
		}

	protected:
		hkpStepResult reCollideAfterStepFailure()
		{
			using func_t = decltype(&hkpSimulation::reCollideAfterStepFailure);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulation::reCollideAfterStepFailure };
			return func(this);
		}

		hkpStepResult integrateInternal(hkStepInfo const& stepInfoIn)
		{
			using func_t = decltype(&hkpSimulation::integrateInternal);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulation::integrateInternal };
			return func(this, stepInfoIn);
		}

	public:
		// members
		// not placed: m_determinismCheckFrameCounter, m_world, m_lastProcessingStep, m_currentTime, m_currentPsiTime, m_physicsDeltaTime
		std::uint8_t  pad08[0xC];            // 08
		float         m_simulateUntilTime;   // 14
		float         m_frameMarkerPsiSnap;  // 18?
		std::uint8_t  pad1C[0xC];            // 1C
		std::uint32_t m_previousStepResult;  // 28
	};
}
