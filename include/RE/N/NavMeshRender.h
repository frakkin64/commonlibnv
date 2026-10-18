#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshRender_NAVMESH_RENDER_COLOR_TYPE.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class NavMesh;
	class NavMeshTriangle;
	class NiAlphaProperty;
	class NiMaterialProperty;
	class NiNode;
	class NiTriShape;
	class TESObjectCELL;

	class NavMeshRender
	{
	public:
		using NAVMESH_RENDER_COLOR_TYPE = NavMeshRender_NAVMESH_RENDER_COLOR_TYPE;

		static NavMeshRender* GetInstance()
		{
			using func_t = decltype(&NavMeshRender::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::GetInstance };
			return func();
		}

		bool GetDraw()
		{
			using func_t = decltype(&NavMeshRender::GetDraw);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::GetDraw };
			return func(this);
		}

		NavMeshRender* ctor()
		{
			using func_t = NavMeshRender*(__thiscall*)(NavMeshRender*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshRender*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::dtor };
			func(this);
		}

		void SetDraw(bool abDraw)
		{
			using func_t = decltype(&NavMeshRender::SetDraw);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::SetDraw };
			func(this, abDraw);
		}

		void AddDrawOnlyNavMeshes(TESObjectCELL* apCell, bool abUpdate)
		{
			using func_t = decltype(&NavMeshRender::AddDrawOnlyNavMeshes);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::AddDrawOnlyNavMeshes };
			func(this, apCell, abUpdate);
		}

		void UpdateRenderOnlyNavMeshes()
		{
			using func_t = decltype(&NavMeshRender::UpdateRenderOnlyNavMeshes);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::UpdateRenderOnlyNavMeshes };
			func(this);
		}

		NavMeshRender_NAVMESH_RENDER_COLOR_TYPE GetTriangleColor(NavMeshTriangle const* apTri) const
		{
			using func_t = decltype(&NavMeshRender::GetTriangleColor);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::GetTriangleColor };
			return func(this, apTri);
		}

		void SetTransparentOverLayMode(bool abTransparent)
		{
			using func_t = decltype(&NavMeshRender::SetTransparentOverLayMode);
			static REL::Relocation<func_t> func{ Offsets::NavMeshRender::SetTransparentOverLayMode };
			func(this, abTransparent);
		}

	public:
		// members
		NiPointer<NiNode>                         sp3DNode;                          // 00
		NiPointer<NiNode>                         spSelectedPathGeometry;            // 04
		NiPointer<NiNode>                         spLOSMapGeometry;                  // 08
		NiPointer<NiTriShape>                     spVertPoints[17];                  // 0C
		NiPointer<NiMaterialProperty>             spEdgeAndVertexMaterialArray[17];  // 50
		NiPointer<NiMaterialProperty>             spTriangleMaterialArray[17];       // 94
		NiColorA                                  ColorValues[17];                   // D8
		NiPointer<NiAlphaProperty>                spAlphaProp;                       // 1E8
		NiPointer<NiMaterialProperty>             spLocalMapMaterial;                // 1EC
		NiTMap<NavMesh*, NiPointer<NiNode>>       NavMeshNodes;                      // 1F0
		NiTMap<TESObjectCELL*, NiPointer<NiNode>> NavMeshCellMap;                    // 200
		bool                                      bDraw;                             // 210
		std::uint8_t                              pad211[0x3];                       // 211
	};
	static_assert(sizeof(NavMeshRender) == 0x214);
}
