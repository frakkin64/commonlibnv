#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpMoppCompilerPrimitive;
	class hkpMoppTreeInternalNode;
	class hkpMoppTreeTerminal;

	class hkpMoppSplitter_hkpMoppScratchArea
	{
	public:
		// members
		hkpMoppCompilerPrimitive* m_primitives;  // 00?
		hkpMoppTreeInternalNode*  m_nodes;       // 04?
		hkpMoppTreeTerminal*      m_terminals;   // 08?
	};
}
