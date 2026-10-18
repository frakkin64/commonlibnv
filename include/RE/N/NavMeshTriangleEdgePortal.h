#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshInfo;
	class TESFile;
	class TESForm;

	class NavMeshTriangleEdgePortal
	{
	public:
		void Load(TESForm* apOwner, TESFile* apFile, char* pBuffer)
		{
			using func_t = decltype(&NavMeshTriangleEdgePortal::Load);
			static REL::Relocation<func_t> func{ Offsets::NavMeshTriangleEdgePortal::Load };
			func(this, apOwner, apFile, pBuffer);
		}

	public:
		// members
		NavMeshInfo*  pOtherMesh;  // 00
		std::uint16_t sTriangle;   // 04
		std::uint16_t pad06;       // 06
	};
}
