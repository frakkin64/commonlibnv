#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkArrayBase.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMultiThreadCheck.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpBroadPhaseHandlePair.h"

namespace RE
{
	class hkAabbUint32;
	class hkCriticalSection;
	class hkpBroadPhaseCastCollector;
	class hkpBroadPhaseHandle;
	class hkpCollidable;

	class hkpBroadPhase :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBroadPhase };
		static constexpr auto VTABLE{ VTABLE::hkpBroadPhase };

		class hkpCastAabbInput;
		class hkpCastRayInput;

		enum class BroadPhaseType : std::int32_t
		{
			kBROADPHASE_16BIT = 0x0,
			kBROADPHASE_32BIT = 0x1,
		};

		class alignas(16) hkpCastAabbInput
		{
		public:
			// members
			hkVector4    m_from;           // 00?
			hkVector4    m_to;             // 10?
			hkVector4    m_halfExtents;    // 20?
			const char*  m_aabbCacheInfo;  // 30?
			std::uint8_t pad34[0xC];       // 34
		};

		class alignas(16) hkpCastRayInput
		{
		public:
			// members
			hkVector4        m_from;           // 00?
			std::int32_t     m_numCasts;       // 10?
			const hkVector4* m_toBase;         // 14?
			std::int32_t     m_toStriding;     // 18?
			const char*      m_aabbCacheInfo;  // 1C?
		};

		// override (hkReferencedObject)
		virtual ~hkpBroadPhase() = default;  // 00

		// add
		virtual hkpBroadPhase::BroadPhaseType getType();                                                                                                                                                                                                        // 03
		virtual void addObject(hkpBroadPhaseHandle* a_arg1, const hkAabbUint32* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3);                                                                                                    // 05 (reversed overload group)
		virtual void addObject(hkpBroadPhaseHandle* a_arg1, const hkAabb* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3);                                                                                                          // 04 (reversed overload group)
		virtual void addObjectBatch(const hkArrayBase<hkpBroadPhaseHandle*>* a_arg1, const hkArrayBase<hkAabb>* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3);                                                                    // 06
		virtual void removeObject(hkpBroadPhaseHandle* a_arg1, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg2);                                                                                                                             // 07
		virtual void removeObjectBatch(const hkArrayBase<hkpBroadPhaseHandle*>* a_arg1, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg2);                                                                                                    // 08
		virtual std::int32_t getNumObjects();                                                                                                                                                                                                                   // 09
		virtual void updateAabbs(hkpBroadPhaseHandle** a_arg1, const hkAabb* a_arg2, std::int32_t a_arg3, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg4, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg5);              // 0A
		virtual void updateAabbsUint32(hkpBroadPhaseHandle** a_arg1, const hkAabbUint32* a_arg2, std::int32_t a_arg3, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg4, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg5);  // 0B
		virtual void defragment();                                                                                                                                                                                                                              // 0C
		virtual void checkDeterminism();                                                                                                                                                                                                                        // 0D
		virtual void getAllAabbs(hkArray<hkAabb, hkContainerHeapAllocator>* a_arg1);                                                                                                                                                                            // 0E
		virtual void getAabb(const hkpBroadPhaseHandle* a_arg1, hkAabb* a_arg2);                                                                                                                                                                                // 0F
		virtual void getExtents(hkVector4* a_arg1, hkVector4* a_arg2);                                                                                                                                                                                          // 10
		virtual void querySingleAabb(const hkAabb* a_arg1, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg2);                                                                                                                                 // 11
		virtual void reQuerySingleObject(const hkpBroadPhaseHandle* a_arg1, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg2);                                                                                                                // 12
		virtual bool areAabbsOverlapping(const hkpBroadPhaseHandle* a_arg1, const hkpBroadPhaseHandle* a_arg2);                                                                                                                                                 // 13
		virtual void shiftAllObjects(const hkVector4* a_arg1, hkVector4* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3);                                                                                                           // 14
		virtual void shiftBroadPhase(const hkVector4* a_arg1, hkVector4* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3);                                                                                                           // 15
		virtual void getOffsetLowHigh32bit(hkVector4* a_arg1, hkVector4* a_arg2);                                                                                                                                                                               // 16
		virtual void castRay(const hkpBroadPhase::hkpCastRayInput* a_arg1, hkpBroadPhaseCastCollector* a_arg2, std::int32_t a_arg3);                                                                                                                            // 17
		virtual std::int32_t getAabbCacheSize();                                                                                                                                                                                                                // 18
		virtual void calcAabbCache(const hkAabb* a_arg1, char* a_arg2);                                                                                                                                                                                         // 1A (reversed overload group)
		virtual void calcAabbCache(const hkArrayBase<hkpCollidable*>* a_arg1, char* a_arg2);                                                                                                                                                                    // 19 (reversed overload group)
		virtual void castAabb(const hkpBroadPhase::hkpCastAabbInput* a_arg1, hkpBroadPhaseCastCollector* a_arg2);                                                                                                                                               // 1B
		virtual void set32BitOffsetAndScale(const hkVector4* a_arg1, const hkVector4* a_arg2, const hkVector4* a_arg3);                                                                                                                                         // 1C

		hkpBroadPhase* ctor()
		{
			using func_t = hkpBroadPhase*(__thiscall*)(hkpBroadPhase*);
			static REL::Relocation<func_t> func{ Offsets::hkpBroadPhase::ctor };
			return func(this);
		}

		void enableMultiThreading(std::int32_t spinCountForCriticalSection)
		{
			using func_t = decltype(&hkpBroadPhase::enableMultiThreading);
			static REL::Relocation<func_t> func{ Offsets::hkpBroadPhase::enableMultiThreading };
			func(this, spinCountForCriticalSection);
		}

	public:
		// members
		hkMultiThreadCheck m_multiThreadCheck;  // 08
		hkCriticalSection* m_criticalSection;   // 10
	};
}
