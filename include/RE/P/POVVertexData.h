#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/F/FastNavMeshEdgeHandle.h"
#include "RE/F/FastNavMeshVertHandle.h"

namespace RE
{
	class POVVertexData
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(POVVertexData*);
			static REL::Relocation<func_t> func{ Offsets::POVVertexData::dtor };
			func(this);
		}

	public:
		// members
		FastNavMeshVertHandle                      hVertex;      // 00
		BSSimpleArray<FastNavMeshEdgeHandle, 1024> Edges;        // 08
		BSSimpleArray<FastNavMeshEdgeHandle, 1024> PortalEdges;  // 18
	};
	static_assert(sizeof(POVVertexData) == 0x28);
}
