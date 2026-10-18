#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMesh;
	class NavMeshTriangle;

	class NavMeshSearchNode
	{
	public:
		NavMeshTriangle* GetTriangle() const
		{
			using func_t = decltype(&NavMeshSearchNode::GetTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchNode::GetTriangle };
			return func(this);
		}

	public:
		// members
		NavMesh*      pNavMesh;   // 00
		std::uint16_t sTriangle;  // 04
		std::uint16_t pad06;      // 06
		float         CenterX;    // 08
		float         CenterY;    // 0C
		float         CenterZ;    // 10
	};
}
