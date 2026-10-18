#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpFreeList.h"
#include "RE/H/hkpMoppSplitter.h"

namespace RE
{
	class hkpMoppAssembler;
	class hkpMoppCompilerPrimitive;
	class hkpMoppCostFunction;
	class hkpMoppMediator;
	class hkpMoppSplitter_hkpMoppScratchArea;
	class hkpMoppSplitter_hkpMoppSplitParams;
	class hkpMoppSplittingPlaneDirection;
	class hkpMoppTreeInternalNode;
	class hkpMoppTreeNode;
	class hkpMoppTreeTerminal;

	class hkpMoppDefaultSplitter :
		public hkpMoppSplitter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppDefaultSplitter };
		static constexpr auto VTABLE{ VTABLE::hkpMoppDefaultSplitter };

		class hkpMoppMaxList;

		class hkpMoppMaxList
		{
		public:
			// members
			std::int32_t               m_currentNumElements;  // 00?
			std::int32_t               m_sizeOfArray;         // 04?
			hkpMoppCompilerPrimitive** buffer;                // 08?
			hkpMoppCompilerPrimitive*  lastRemovedElement;    // 0C?
		};

		// override (hkpMoppSplitter)
		virtual ~hkpMoppDefaultSplitter() = default;  // 00

		// add
		virtual void releaseNode(hkpMoppTreeNode* nodeToRelease);                                                                                                                                                               // 03
		virtual std::int32_t getFreeNodes();                                                                                                                                                                                    // 04
		virtual hkpMoppTreeNode* buildTree(hkpMoppMediator* mediator, hkpMoppCostFunction* costFunction, hkpMoppAssembler* assembler, hkpMoppSplitter_hkpMoppSplitParams const& in, hkpMoppSplitter_hkpMoppScratchArea& temp);  // 05

		// members
		// not placed: m_compileParams, m_maxList, m_freeNodes
		std::uint8_t                          pad08[0x8];            // 08
		hkpFreeList<hkpMoppTreeTerminal*>     m_freeTerminals;       // 10
		hkpMoppCostFunction*                  m_costFunction;        // 18?
		hkpMoppAssembler*                     m_assembler;           // 1C?
		hkpMoppMediator*                      m_mediator;            // 20?
		hkpMoppTreeInternalNode*              m_rootNode;            // 24?
		std::int32_t                          m_numPlaneDirections;  // 28?
		const hkpMoppSplittingPlaneDirection* m_planeDirections;     // 2C?
		std::int32_t                          m_optimalDepth;        // 30?
	};
}
