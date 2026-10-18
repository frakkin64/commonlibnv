#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkStackTracer_CallTree_Node.h"

namespace RE
{
	class hkMemoryAllocator;

	class hkStackTracer_CallTree
	{
	public:
		using Node = hkStackTracer_CallTree_Node;

		std::int32_t insertCallStack(std::uint32_t const* addrs, std::int32_t numAddrs)
		{
			using func_t = decltype(&hkStackTracer_CallTree::insertCallStack);
			static REL::Relocation<func_t> func{ Offsets::hkStackTracer_CallTree::insertCallStack };
			return func(this, addrs, numAddrs);
		}

	public:
		// members
		hkArrayBase<hkStackTracer_CallTree_Node> m_nodes;      // 00?
		hkMemoryAllocator*                       m_allocator;  // 0C?
	};
}
