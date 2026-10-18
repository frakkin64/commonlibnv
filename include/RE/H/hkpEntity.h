#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkConstraintInternal.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkSmallArray.h"
#include "RE/H/hkpMaterial.h"
#include "RE/H/hkpMaxSizeMotion.h"
#include "RE/H/hkpWorldObject.h"

namespace RE
{
	class hkLocalFrame;
	class hkMotionState;
	class hkSpuCollisionCallbackUtil;
	class hkpAction;
	class hkpBreakableBody;
	class hkpConstraintInstance;
	class hkpContactListener;
	class hkpEntityActivationListener;
	class hkpEntityListener;
	class hkpSimulationIsland;

	class alignas(16) hkpEntity :
		public hkpWorldObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpEntity };
		static constexpr auto VTABLE{ VTABLE::hkpEntity };

		class ExtendedListeners;
		class SpuCollisionCallback;

		class ExtendedListeners
		{
		public:
			// members
			hkSmallArray<hkpEntityActivationListener*> m_activationListeners;  // 00?
			hkSmallArray<hkpEntityListener*>           m_entityListeners;      // 08?
		};

		class SpuCollisionCallback
		{
		public:
			// members
			hkSpuCollisionCallbackUtil* m_util;         // 00?
			std::uint16_t               m_capacity;     // 04?
			std::uint8_t                m_eventFilter;  // 06?
			std::uint8_t                m_userFilter;   // 07?
		};

		// override (hkpWorldObject)
		virtual ~hkpEntity() = default;                    // 00
		virtual hkMotionState* getMotionState() override;  // 04

		// add
		virtual void deallocateInternalArrays();  // 05

		std::int32_t getNumConstraints() const
		{
			using func_t = decltype(&hkpEntity::getNumConstraints);
			static REL::Relocation<func_t> func{ Offsets::hkpEntity::getNumConstraints };
			return func(this);
		}

		hkpEntity* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkpEntity*(__thiscall*)(hkpEntity*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpEntity::ctor };
			return func(this, flag);
		}

	public:
		// members
		hkpMaterial                                               m_material;                              // 8C
		void*                                                     m_limitContactImpulseUtil;               // 98
		float                                                     m_damageMultiplier;                      // 9C
		hkpBreakableBody*                                         m_breakableBody;                         // A0
		std::uint32_t                                             m_solverData;                            // A4
		std::uint16_t                                             m_storageIndex;                          // A8
		std::uint16_t                                             m_contactPointCallbackDelay;             // AA
		hkSmallArray<hkConstraintInternal>                        m_constraintsMaster;                     // AC
		hkArray<hkpConstraintInstance*, hkContainerHeapAllocator> m_constraintsSlave;                      // B4
		hkArray<std::uint8_t, hkContainerHeapAllocator>           m_constraintRuntime;                     // C0
		hkpSimulationIsland*                                      m_simulationIsland;                      // CC
		char                                                      m_autoRemoveLevel;                       // D0
		std::uint8_t                                              m_numShapeKeysInContactPointProperties;  // D1
		std::uint8_t                                              m_responseModifierFlags;                 // D2
		std::uint8_t                                              padD3;                                   // D3
		std::uint32_t                                             m_uid;                                   // D4
		hkpEntity::SpuCollisionCallback                           m_spuCollisionCallback;                  // D8
		hkpMaxSizeMotion                                          m_motion;                                // E0
		hkSmallArray<hkpContactListener*>                         m_contactListeners;                      // 200?
		hkSmallArray<hkpAction*>                                  m_actions;                               // 208?
		hkRefPtr<hkLocalFrame>                                    m_localFrame;                            // 210?
		hkpEntity::ExtendedListeners*                             m_extendedListeners;                     // 214?
		std::uint8_t                                              pad218[0x8];                             // 218
	};
}
