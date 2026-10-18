#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class Collector;
	class NodePair;
	class TreeTreeCollector;

	template <class T0, class T1>
	class hkAabbTreeQueryUtils
	{
	public:
		class Collector
		{
		public:
			// add
			virtual ~Collector() = default;                                 // 00
			virtual float addLeaf(const hkAabbTree<T0, T1>::Node* a_arg1);  // 01
		};

		class NodePair
		{
		public:
			// members
			hkAabbTree<T0, T1>::Node* m_a;
			hkAabbTree<T0, T1>::Node* m_b;
		};

		class IdxPair
		{
		public:
			// members
			std::uint16_t m_a;
			std::uint16_t m_b;
		};

		class TreeTreeCollector
		{
		public:
			virtual ~TreeTreeCollector() = default;  // 00
		};

		class ClosestPointCollector :
			public Collector  // 00
		{
		public:
			// members
			hkVector4 m_point;
			float m_distanceSquared;
		};

		class TreeTreeNodePairCollector :
			public TreeTreeCollector  // 00
		{
		public:
			// members
			hkArray<NodePair, hkContainerHeapAllocator>* m_resultBuffer;
		};

		class AllHitsCollector :
			public Collector  // 00
		{
		public:
			// members
			hkInplaceArray<void const*, 128, hkContainerHeapAllocator> m_hits;
		};

		class AllHitsNodeCollector :
			public Collector  // 00
		{
		public:
			// members
			hkArray<typename hkAabbTree<T0, T1>::Node*, hkContainerHeapAllocator>* m_hits;
		};
	};
}
