#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkgpAbstractMesh.h"
#include "RE/H/hkgpMeshBase_Edge.h"
#include "RE/H/hkgpMeshBase_Triangle.h"
#include "RE/H/hkgpMeshBase_Vertex.h"
#include "RE/H/hkgpMesh_CollideShapeTriangle.h"
#include "RE/H/hkgpMesh_IConvexOverlap.h"
#include "RE/H/hkgpMesh_LineShape.h"
#include "RE/H/hkgpMesh_Location.h"
#include "RE/H/hkgpMesh_NearestFeaturePolicy.h"
#include "RE/H/hkgpMesh_PrismPolicy.h"
#include "RE/H/hkgpMesh_TriangleShape.h"
#include "RE/H/hkgpMesh_WeldingPolicy.h"

namespace RE
{
	class hkGeometry;
	class hkTransform;
	class hkgpConvexHull;

	class alignas(16) hkgpMesh :
		public hkgpAbstractMesh<hkgpMeshBase_Edge, hkgpMeshBase_Vertex, hkgpMeshBase_Triangle, hkContainerHeapAllocator>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh };

		using CollideShapeTriangle = hkgpMesh_CollideShapeTriangle;
		using IConvexOverlap = hkgpMesh_IConvexOverlap;
		using LineShape = hkgpMesh_LineShape;
		using Location = hkgpMesh_Location;
		using NearestFeaturePolicy = hkgpMesh_NearestFeaturePolicy;
		using PrismPolicy = hkgpMesh_PrismPolicy;
		using TriangleShape = hkgpMesh_TriangleShape;
		using WeldingPolicy = hkgpMesh_WeldingPolicy;

		class SingleEdge;
		class sResult;

		enum class eResult : std::int32_t
		{
			kSUCCESS = 0x0,
			kUNABLE_TO_CUT = 0x1,
			kINVALID_SUB_PARTS = 0x2,
			kNO_RINGS_FOUND = 0x3,
			kINVALID_TRIANGULATION_DOMAIN = 0x4,
			kCANNOT_INSERT_VERTEX = 0x5,
			kCANNOT_INSERT_EDGE = 0x6,
			kVOIDS_DETECTED = 0x7,
			kVOLUME_STALL = 0x8,
			kOPEN_MANIFOLD = 0x9,
			kUNDEFINED = 0xA,
		};

		class SingleEdge
		{
		public:
			// members
			const hkgpMeshBase_Vertex* m_a;     // 00?
			const hkgpMeshBase_Vertex* m_b;     // 04?
			hkgpMeshBase_Edge          m_e;     // 08?
			std::int32_t               m_refs;  // 10?
		};

		class sResult
		{
		public:
			// members
			hkgpMesh::eResult m_value;  // 00?
		};

		// override (hkgpAbstractMesh<hkgpMeshBase_Edge, hkgpMeshBase_Vertex, hkgpMeshBase_Triangle, hkContainerHeapAllocator>)
		virtual ~hkgpMesh() = default;  // 00
		virtual void reset();           // 03

		std::int32_t fetchPositions(hkArray<hkVector4, hkContainerHeapAllocator>& positions) const
		{
			using func_t = decltype(&hkgpMesh::fetchPositions);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::fetchPositions };
			return func(this, positions);
		}

		void locate(hkVector4 const& x, hkgpMesh_Location& location) const
		{
			using func_t = decltype(&hkgpMesh::locate);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::locate };
			func(this, x, location);
		}

		bool hasValidTopology(bool raiseError) const
		{
			using func_t = decltype(&hkgpMesh::hasValidTopology);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::hasValidTopology };
			return func(this, raiseError);
		}

		bool bindEdge(hkgpMeshBase_Edge edge, bool onlyToNaked, bool mustMatch)
		{
			using func_t = decltype(&hkgpMesh::bindEdge);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::bindEdge };
			return func(this, edge, onlyToNaked, mustMatch);
		}

		void fixBindings()
		{
			using func_t = decltype(&hkgpMesh::fixBindings);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::fixBindings };
			func(this);
		}

		std::int32_t segregateVerticesBasedOnPartId()
		{
			using func_t = decltype(&hkgpMesh::segregateVerticesBasedOnPartId);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::segregateVerticesBasedOnPartId };
			return func(this);
		}

		void append(hkgpMesh* other)
		{
			using func_t = decltype(&hkgpMesh::append);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::append };
			func(this, other);
		}

		static bool clipTriangles(hkgpMesh* ma, hkgpMeshBase_Triangle* ta, hkgpMesh* mb, hkgpMeshBase_Triangle* tb, float minDist)
		{
			using func_t = decltype(&hkgpMesh::clipTriangles);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::clipTriangles };
			return func(ma, ta, mb, tb, minDist);
		}

		std::int32_t removeButterflies(std::int32_t tag)
		{
			using func_t = decltype(&hkgpMesh::removeButterflies);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::removeButterflies };
			return func(this, tag);
		}

		hkgpMesh* ctor()
		{
			using func_t = hkgpMesh*(__thiscall*)(hkgpMesh*);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::ctor };
			return func(this);
		}

		std::int32_t explodeParts(hkArray<hkgpMesh*, hkContainerHeapAllocator>& sets, bool doSimplify, bool doConvexHulls) const
		{
			using func_t = decltype(&hkgpMesh::explodeParts);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::explodeParts };
			return func(this, sets, doSimplify, doConvexHulls);
		}

		void appendFromGeometry(hkGeometry const& geom, hkTransform const& xform, std::int32_t partId)
		{
			using func_t = decltype(&hkgpMesh::appendFromGeometry);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::appendFromGeometry };
			func(this, geom, xform, partId);
		}

		void appendFromConvexHull(hkgpConvexHull const* hull)
		{
			using func_t = decltype(&hkgpMesh::appendFromConvexHull);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::appendFromConvexHull };
			func(this, hull);
		}

		hkgpMesh* trim(hkgpConvexHull const* hull)
		{
			using func_t = decltype(&hkgpMesh::trim);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::trim };
			return func(this, hull);
		}

		hkgpMesh::sResult cutAndCap(hkVector4 const& result)
		{
			using func_t = decltype(&hkgpMesh::cutAndCap);
			static REL::Relocation<func_t> func{ Offsets::hkgpMesh::cutAndCap };
			return func(this, result);
		}

	public:
		// members
		const hkgpMesh_IConvexOverlap*                            m_iconvexoverlap;           // 38?
		std::uint32_t                                             pad3C;                      // 3C
		hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>  m_trianglesTree;            // 40?
		hkArray<hkVector4, hkContainerHeapAllocator>              m_randSamples;              // B0?
		hkArray<hkVector4, hkContainerHeapAllocator>              m_planes;                   // BC?
		hkArray<hkgpMeshBase_Triangle*, hkContainerHeapAllocator> m_planeRoots;               // C8?
		std::uint8_t                                              padD4[0x1C];                // D4
		hkgpConvexHull*                                           m_convexHull;               // F0
		std::uint8_t                                              padF4[0xC];                 // F4
		hkVector4                                                 m_lastPlane;                // 100?
		bool                                                      m_hasErrors;                // 110?
		bool                                                      m_hasPerVertexNormals;      // 111?
		std::uint16_t                                             pad112;                     // 112
		float                                                     m_epsMinEdgeSqLength;       // 114?
		float                                                     m_epsMinTwiceTriangleArea;  // 118?
		float                                                     m_epsVertexWeldingRadius;   // 11C?
	};
}
