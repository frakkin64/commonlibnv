#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkArrayBase.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpBroadPhase.h"
#include "RE/H/hkpBroadPhaseHandlePair.h"

namespace RE
{
	class hkAabbUint32;
	class hkpBroadPhaseCastCollector;
	class hkpBroadPhaseHandle;

	class alignas(16) hkp3AxisSweep :
		public hkpBroadPhase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkp3AxisSweep };
		static constexpr auto VTABLE{ VTABLE::hkp3AxisSweep };

		class hkpBpAxis;
		class hkpBpEndPoint;
		class hkpBpMarker;
		class hkpBpNode;

		class hkpBpEndPoint
		{
		public:
			// members
			std::uint16_t m_value;      // 00?
			std::uint16_t m_nodeIndex;  // 02?
		};

		class hkpBpMarker
		{
		public:
			// members
			std::uint16_t                                    m_nodeIndex;           // 00?
			std::uint16_t                                    m_value;               // 02?
			hkArray<std::uint16_t, hkContainerHeapAllocator> m_overlappingObjects;  // 04?
		};

		class hkpBpNode
		{
		public:
			// members
			std::uint16_t        min_y;     // 00?
			std::uint16_t        min_z;     // 02?
			std::uint16_t        max_y;     // 04?
			std::uint16_t        max_z;     // 06?
			std::uint16_t        min_x;     // 08?
			std::uint16_t        max_x;     // 0A?
			hkpBroadPhaseHandle* m_handle;  // 0C?
		};

		class hkpBpAxis
		{
		public:
			void insert(hkp3AxisSweep::hkpBpNode* nodes, std::int32_t nodeIndex, std::uint16_t minPosition, std::uint16_t maxPosition, std::uint16_t& minInsertPositionOut, std::uint16_t& maxInsertPositionOut)
			{
				using func_t = decltype(&hkpBpAxis::insert);
				static REL::Relocation<func_t> func{ Offsets::hkp3AxisSweep_hkpBpAxis::insert };
				func(this, nodes, nodeIndex, minPosition, maxPosition, minInsertPositionOut, maxInsertPositionOut);
			}

			std::int32_t insertTail(hkp3AxisSweep::hkpBpNode* nodes, std::int32_t axis, hkp3AxisSweep::hkpBpEndPoint* newNodes, std::int32_t numNewEndPoints)
			{
				using func_t = decltype(&hkpBpAxis::insertTail);
				static REL::Relocation<func_t> func{ Offsets::hkp3AxisSweep_hkpBpAxis::insertTail };
				return func(this, nodes, axis, newNodes, numNewEndPoints);
			}

			void removeBatch_2_(hkp3AxisSweep::hkpBpNode* nodes, hkArrayBase<std::int32_t> const& nodeRelocations)
			{
				using func_t = decltype(&hkpBpAxis::removeBatch_2_);
				static REL::Relocation<func_t> func{ Offsets::hkp3AxisSweep_hkpBpAxis::removeBatch_2_ };
				func(this, nodes, nodeRelocations);
			}

		public:
			// members
			hkArray<hkp3AxisSweep::hkpBpEndPoint, hkContainerHeapAllocator> m_endPoints;  // 00?
		};

		// override (hkpBroadPhase)
		virtual ~hkp3AxisSweep() = default;                                                                                                                                                                                                                              // 00
		virtual void addObject(hkpBroadPhaseHandle* a_arg1, const hkAabb* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3) override;                                                                                                          // 04
		virtual void addObject(hkpBroadPhaseHandle* a_arg1, const hkAabbUint32* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3) override;                                                                                                    // 05
		virtual void addObjectBatch(const hkArrayBase<hkpBroadPhaseHandle*>* a_arg1, const hkArrayBase<hkAabb>* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3) override;                                                                    // 06
		virtual void removeObject(hkpBroadPhaseHandle* a_arg1, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg2) override;                                                                                                                             // 07
		virtual void removeObjectBatch(const hkArrayBase<hkpBroadPhaseHandle*>* a_arg1, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg2) override;                                                                                                    // 08
		virtual void updateAabbs(hkpBroadPhaseHandle** a_arg1, const hkAabb* a_arg2, std::int32_t a_arg3, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg4, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg5) override;              // 0A
		virtual void updateAabbsUint32(hkpBroadPhaseHandle** a_arg1, const hkAabbUint32* a_arg2, std::int32_t a_arg3, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg4, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg5) override;  // 0B
		virtual void defragment() override;                                                                                                                                                                                                                              // 0C
		virtual void checkDeterminism() override;                                                                                                                                                                                                                        // 0D
		virtual void shiftAllObjects(const hkVector4* a_arg1, hkVector4* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3) override;                                                                                                           // 14
		virtual void shiftBroadPhase(const hkVector4* a_arg1, hkVector4* a_arg2, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>* a_arg3) override;                                                                                                           // 15
		virtual void set32BitOffsetAndScale(const hkVector4* a_arg1, const hkVector4* a_arg2, const hkVector4* a_arg3) override;                                                                                                                                         // 1C

		// add
		virtual void querySingleAabbWithCollector(const hkAabb* a_arg1, hkpBroadPhaseCastCollector* a_arg2);  // 1D

		void _fixDeterministicOrderAfterNodeIdWasDecreased(std::int32_t nodeIndex)
		{
			using func_t = decltype(&hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased);
			static REL::Relocation<func_t> func{ Offsets::hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased };
			func(this, nodeIndex);
		}

		static void endOverlapCheckMarker(hkp3AxisSweep::hkpBpMarker* markers, hkp3AxisSweep::hkpBpNode& a, std::int32_t nodeIndexA, hkp3AxisSweep::hkpBpNode& b, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>& deletedPairsOut)
		{
			using func_t = decltype(&hkp3AxisSweep::endOverlapCheckMarker);
			static REL::Relocation<func_t> func{ Offsets::hkp3AxisSweep::endOverlapCheckMarker };
			func(markers, a, nodeIndexA, b, deletedPairsOut);
		}

	protected:
		void setBitsBasedOnXInterval(std::int32_t numNodes, std::int32_t x_value, hkp3AxisSweep::hkpBpNode const& queryNode, std::uint16_t queryNodeIndex, std::uint32_t* bitField) const
		{
			using func_t = decltype(&hkp3AxisSweep::setBitsBasedOnXInterval);
			static REL::Relocation<func_t> func{ Offsets::hkp3AxisSweep::setBitsBasedOnXInterval };
			func(this, numNodes, x_value, queryNode, queryNodeIndex, bitField);
		}

	public:
		// members
		std::uint8_t                                                pad14[0xC];                   // 14
		hkAabb                                                      m_aabb;                       // 20
		hkVector4                                                   m_offsetLow;                  // 40
		hkVector4                                                   m_offsetHigh;                 // 50
		hkVector4                                                   m_scale;                      // 60
		hkVector4                                                   m_offsetLow32bit;             // 70
		hkVector4                                                   m_offsetHigh32bit;            // 80
		hkVector4                                                   m_scale32bit;                 // 90
		hkArray<hkp3AxisSweep::hkpBpNode, hkContainerHeapAllocator> m_nodes;                      // A0
		hkp3AxisSweep::hkpBpAxis                                    m_axis[3];                    // AC?
		std::int32_t                                                m_numMarkers;                 // D0?
		std::int32_t                                                m_ld2NumMarkers;              // D4?
		hkp3AxisSweep::hkpBpMarker*                                 m_markers;                    // D8?
		float                                                       m_intToFloatFloorCorrection;  // DC?
	};
}
