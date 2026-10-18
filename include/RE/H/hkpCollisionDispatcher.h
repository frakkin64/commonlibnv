#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpCollisionQualityInfo.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkpContactMgrFactory;

	class hkpCollisionDispatcher :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCollisionDispatcher };
		static constexpr auto VTABLE{ VTABLE::hkpCollisionDispatcher };

		class Agent3Funcs;
		class Agent3FuncsIntern;
		class AgentFuncs;
		class DebugEntry;
		class ShapeInheritance;

		class Agent3Funcs
		{
		public:
			// members
			void*        m_createFunc;              // 00?
			void*        m_destroyFunc;             // 04?
			void*        m_cleanupFunc;             // 08?
			void*        m_removePointFunc;         // 0C?
			void*        m_commitPotentialFunc;     // 10?
			void*        m_createZombieFunc;        // 14?
			void*        m_updateFilterFunc;        // 18?
			void*        m_calcStatisticsFunc;      // 1C?
			void*        m_invalidateTimFunc;       // 20?
			void*        m_warpTimeFunc;            // 24?
			void*        m_sepNormalFunc;           // 28?
			void*        m_processFunc;             // 2C?
			hkBool       m_isPredictive;            // 30?
			hkBool       m_ignoreSymmetricVersion;  // 31?
			hkBool       m_reusePreviousEntry;      // 32?
			std::uint8_t pad33;                     // 33
		};

		class AgentFuncs
		{
		public:
			// members
			// not placed: m_createFunc(absent)
			void*         m_getPenetrationsFunc;  // 00
			void*         m_getClosestPointFunc;  // 04?
			void*         m_linearCastFunc;       // 08?
			hkBool        m_isFlipped;            // 0C?
			hkBool        m_isPredictive;         // 0D?
			std::uint16_t pad0E;                  // 0E
		};

		class DebugEntry
		{
		public:
			// members
			char m_typeA;     // 00?
			char m_typeB;     // 01?
			char m_priority;  // 02?
		};

		class ShapeInheritance
		{
		public:
			// members
			hkpShapeType m_primaryType;    // 00?
			hkpShapeType m_alternateType;  // 04?
		};

		class Agent3FuncsIntern :
			public hkpCollisionDispatcher::Agent3Funcs  // 00
		{
		public:
			// members
			// not placed: m_symmetric
		};

		// override (hkReferencedObject)
		virtual ~hkpCollisionDispatcher() = default;  // 00

		void debugPrintTable()
		{
			using func_t = decltype(&hkpCollisionDispatcher::debugPrintTable);
			static REL::Relocation<func_t> func{ Offsets::hkpCollisionDispatcher::debugPrintTable };
			func(this);
		}

	protected:
		void internalRegisterCollisionAgent(void* agentTypesTable, std::int32_t agentType, hkpShapeType typeA, hkpShapeType typeB, hkpShapeType origA, hkpShapeType origB, void* debugTable, std::int32_t depth)
		{
			using func_t = decltype(&hkpCollisionDispatcher::internalRegisterCollisionAgent);
			static REL::Relocation<func_t> func{ Offsets::hkpCollisionDispatcher::internalRegisterCollisionAgent };
			func(this, agentTypesTable, agentType, typeA, typeB, origA, origB, debugTable, depth);
		}

	public:
		// members
		void*                                                                       m_defaultCollisionAgent;            // 08?
		hkpContactMgrFactory*                                                       m_contactMgrFactory[8][8];          // 0C?
		std::uint32_t                                                               m_hasAlternateType[32];             // 10C?
		std::int32_t                                                                m_numAgent2Types;                   // 18C?
		std::uint8_t                                                                m_agent2Types[32][32];              // 190?
		std::uint8_t                                                                m_agent2TypesPred[32][32];          // 590?
		hkpCollisionDispatcher::AgentFuncs                                          m_agent2Func[64];                   // 990?
		std::int32_t                                                                m_numAgent3Types;                   // D90?
		std::uint8_t                                                                m_agent3Types[32][32];              // D94?
		std::uint8_t                                                                m_agent3TypesPred[32][32];          // 1194?
		hkpCollisionDispatcher::Agent3FuncsIntern                                   m_agent3Func[16];                   // 1594?
		char                                                                        m_collisionQualityTable[10][10];    // 18D4?
		hkpCollisionQualityInfo                                                     m_collisionQualityInfo[8];          // 1938?
		hkBool                                                                      m_collisionAgentRegistered;         // 1B38?
		hkBool                                                                      m_agent3Registered;                 // 1B39?
		hkBool                                                                      m_midphaseAgent3Registered;         // 1B3A?
		hkBool                                                                      m_checkEnabled;                     // 1B3B?
		hkArray<hkpCollisionDispatcher::ShapeInheritance, hkContainerHeapAllocator> m_shapeInheritance;                 // 1B3C?
		hkpCollisionDispatcher::DebugEntry                                          (*m_debugAgent2Table)[32][32];      // 1B48?
		hkpCollisionDispatcher::DebugEntry                                          (*m_debugAgent2TablePred)[32][32];  // 1B4C?
		hkpCollisionDispatcher::DebugEntry                                          (*m_debugAgent3Table)[32][32];      // 1B50?
		hkpCollisionDispatcher::DebugEntry                                          (*m_debugAgent3TablePred)[32][32];  // 1B54?
		float                                                                       m_expectedMaxLinearVelocity;        // 1B58?
		float                                                                       m_expectedMinPsiDeltaTime;          // 1B5C?
	};
}
