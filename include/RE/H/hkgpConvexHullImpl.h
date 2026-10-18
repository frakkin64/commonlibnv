#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkgpAbstractMeshDefinitions_Triangle.h"
#include "RE/H/hkgpAbstractMeshDefinitions_Vertex.h"
#include "RE/H/hkgpConvexHull_Side.h"
#include "RE/H/hkgpConvexHull_Triangle.h"
#include "RE/H/hkgpConvexHull_Vertex.h"

namespace RE
{
	class hkgpConvexHull;

	class alignas(16) hkgpConvexHullImpl
	{
	public:
		class Plane;
		class Triangle;
		class Vertex;

		class Plane
		{
		public:
			// members
			std::int32_t  m_c[3];   // 00?
			std::uint32_t pad0C;    // 0C
			std::int64_t  m_d;      // 10?
			std::int32_t  m_index;  // 18?
			std::uint32_t pad1C;    // 1C
		};

		class alignas(16) Vertex :
			public hkgpAbstractMeshDefinitions_Vertex<hkgpConvexHullImpl::Vertex, hkgpConvexHull_Vertex>  // 00
		{
		public:
			// members
			std::uint8_t pad08[0x8];  // 08
			hkVector4    m_source;    // 10?
			std::int32_t m_x[3];      // 20?
			float        m_scratch;   // 2C?
			std::int32_t m_refs;      // 30?
			std::int32_t m_index;     // 34?
			std::uint8_t pad38[0x8];  // 38
		};

		class Triangle :
			public hkgpAbstractMeshDefinitions_Triangle<hkgpConvexHullImpl::Triangle, hkgpConvexHull_Triangle, hkgpConvexHullImpl::Vertex*>  // 00
		{
		public:
			// members
			hkgpConvexHullImpl::Plane m_plane;  // 20?
			std::int32_t              m_pid;    // 40?
			std::int32_t              m_index;  // 44?
		};

		void mustHaveIndex() const
		{
			using func_t = decltype(&hkgpConvexHullImpl::mustHaveIndex);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::mustHaveIndex };
			func(this);
		}

		void mustHaveMassProperties() const
		{
			using func_t = decltype(&hkgpConvexHullImpl::mustHaveMassProperties);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::mustHaveMassProperties };
			func(this);
		}

		bool clipLine(hkVector4 const& a, hkVector4 const& b, float& t0, float& t1, float epsilon) const
		{
			using func_t = decltype(&hkgpConvexHullImpl::clipLine);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::clipLine };
			return func(this, a, b, t0, t1, epsilon);
		}

		bool isPointInside(hkVector4 const& point, bool usePlanes, float epsilon) const
		{
			using func_t = decltype(&hkgpConvexHullImpl::isPointInside);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::isPointInside };
			return func(this, point, usePlanes, epsilon);
		}

		hkResult buildMassProperties_hkgpConvexHullImpl__PositionAsTransform_()
		{
			using func_t = decltype(&hkgpConvexHullImpl::buildMassProperties_hkgpConvexHullImpl__PositionAsTransform_);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::buildMassProperties_hkgpConvexHullImpl__PositionAsTransform_ };
			return func(this);
		}

		float getEdgeLengths() const
		{
			using func_t = decltype(&hkgpConvexHullImpl::getEdgeLengths);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::getEdgeLengths };
			return func(this);
		}

		void generateVertexAdjacencyGraph(hkArray<std::int32_t, hkContainerHeapAllocator>& edges, hkArray<std::int32_t, hkContainerHeapAllocator>& vertexOffsets) const
		{
			using func_t = decltype(&hkgpConvexHullImpl::generateVertexAdjacencyGraph);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::generateVertexAdjacencyGraph };
			func(this, edges, vertexOffsets);
		}

		std::int32_t build(hkVector4 const* points, std::int32_t numPoints, bool forcePlanar, hkgpConvexHullImpl const* domain)
		{
			using func_t = decltype(&hkgpConvexHullImpl::build);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::build };
			return func(this, points, numPoints, forcePlanar, domain);
		}

		bool decimateVertices(std::int32_t numVerticesToKeep, bool containment)
		{
			using func_t = decltype(&hkgpConvexHullImpl::decimateVertices);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::decimateVertices };
			return func(this, numVerticesToKeep, containment);
		}

		hkgpConvexHull_Side splitByPlane_hkgpConvexHullImpl__PositionAsSource_(hkVector4 const& plane, hkgpConvexHull** pos, hkgpConvexHull** neg, float thickness) const
		{
			using func_t = decltype(&hkgpConvexHullImpl::splitByPlane_hkgpConvexHullImpl__PositionAsSource_);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHullImpl::splitByPlane_hkgpConvexHullImpl__PositionAsSource_ };
			return func(this, plane, pos, neg, thickness);
		}

	public:
		// members
		// not placed: m_config, m_mesh, m_pendings, m_planes, m_supportCache, m_centroids, m_boundingBoxes, m_projectionAxis, m_projectionPlane, m_origin, m_scale, m_scaleInv, m_localTransform, m_inertia, m_inertiaMatrix, m_volume, m_surface, m_dimensions, m_pid
		std::uint8_t  pad00[0x8];           // 00
		std::uint32_t m_uid;                // 08
		bool          m_hasMassProperties;  // 0C?
		bool          m_hasIndexing;        // 0D?
		std::uint16_t pad0E;                // 0E
	};
}
