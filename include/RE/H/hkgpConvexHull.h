#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkgpConvexHull_AbsoluteScaleConfig.h"
#include "RE/H/hkgpConvexHull_IUserObject.h"
#include "RE/H/hkgpConvexHull_Side.h"
#include "RE/H/hkgpConvexHull_Triangle.h"
#include "RE/H/hkgpConvexHull_Vertex.h"

namespace RE
{
	class hkGeometry;
	class hkMatrix3;
	class hkgpConvexHullImpl;

	class hkgpConvexHull :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpConvexHull };
		static constexpr auto VTABLE{ VTABLE::hkgpConvexHull };

		using AbsoluteScaleConfig = hkgpConvexHull_AbsoluteScaleConfig;
		using IUserObject = hkgpConvexHull_IUserObject;
		using Side = hkgpConvexHull_Side;
		using Triangle = hkgpConvexHull_Triangle;
		using Vertex = hkgpConvexHull_Vertex;

		class BuildConfig;

		enum class Inputs : std::int32_t
		{
			kSOURCE_VERTICES = 0x0,
			kINTERNAL_VERTICES = 0x1,
		};

		class BuildConfig
		{
		public:
			// members
			hkBool        m_allowLowerDimensions;  // 00
			std::uint8_t  pad01[0x3];              // 01
			float         m_minCosAngle;           // 04?
			hkBool        m_setSourceIndices;      // 08?
			hkBool        m_buildIndices;          // 09?
			hkBool        m_buildMassProperties;   // 0A?
			hkBool        m_sortInputs;            // 0B?
			hkBool        m_internalInputs;        // 0C?
			hkBool        m_ensurePlaneEnclosing;  // 0D?
			std::uint16_t pad0E;                   // 0E
		};

		// override (hkReferencedObject)
		virtual ~hkgpConvexHull() = default;  // 00

		std::int32_t getIndex(hkgpConvexHull_Vertex const* vertex) const
		{
			using func_t = std::int32_t (hkgpConvexHull::*)(hkgpConvexHull_Vertex const*) const;
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getIndex };
			return func(this, vertex);
		}

		std::int32_t getIndex(hkgpConvexHull_Triangle const* triangle) const
		{
			using func_t = std::int32_t (hkgpConvexHull::*)(hkgpConvexHull_Triangle const*) const;
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getIndex_1 };
			return func(this, triangle);
		}

		std::int32_t getPlaneIndex(hkgpConvexHull_Triangle const* triangle) const
		{
			using func_t = decltype(&hkgpConvexHull::getPlaneIndex);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getPlaneIndex };
			return func(this, triangle);
		}

		float getVolume() const
		{
			using func_t = decltype(&hkgpConvexHull::getVolume);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getVolume };
			return func(this);
		}

		float getSurfaceArea() const
		{
			using func_t = decltype(&hkgpConvexHull::getSurfaceArea);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getSurfaceArea };
			return func(this);
		}

		float getSphericity() const
		{
			using func_t = decltype(&hkgpConvexHull::getSphericity);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getSphericity };
			return func(this);
		}

		hkMatrix3 const& getWorldInertia() const
		{
			using func_t = decltype(&hkgpConvexHull::getWorldInertia);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getWorldInertia };
			return func(this);
		}

		hkVector4 const& getCenterOfMass() const
		{
			using func_t = decltype(&hkgpConvexHull::getCenterOfMass);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getCenterOfMass };
			return func(this);
		}

		std::int32_t getNumPlanes() const
		{
			using func_t = decltype(&hkgpConvexHull::getNumPlanes);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getNumPlanes };
			return func(this);
		}

		hkVector4 const& getPlane(std::int32_t index) const
		{
			using func_t = decltype(&hkgpConvexHull::getPlane);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::getPlane };
			return func(this, index);
		}

		void fetchPositions(hkgpConvexHull::Inputs inputs, hkArray<hkVector4, hkContainerHeapAllocator>& positions) const
		{
			using func_t = decltype(&hkgpConvexHull::fetchPositions);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::fetchPositions };
			func(this, inputs, positions);
		}

		void generateGeometry(hkgpConvexHull::Inputs inputs, hkGeometry& geometry) const
		{
			using func_t = decltype(&hkgpConvexHull::generateGeometry);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::generateGeometry };
			func(this, inputs, geometry);
		}

		hkgpConvexHull* ctor()
		{
			using func_t = hkgpConvexHull*(__thiscall*)(hkgpConvexHull*);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::ctor };
			return func(this);
		}

		hkgpConvexHull* clone() const
		{
			using func_t = decltype(&hkgpConvexHull::clone);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::clone };
			return func(this);
		}

		std::int32_t buildFromPlanes(hkVector4 const* planes, std::int32_t numPlanes, hkgpConvexHull::BuildConfig const& config)
		{
			using func_t = std::int32_t (hkgpConvexHull::*)(hkVector4 const*, std::int32_t, hkgpConvexHull::BuildConfig const&);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::buildFromPlanes };
			return func(this, planes, numPlanes, config);
		}

		std::int32_t buildFromPlanes(hkVector4 const* planes, std::int32_t numPlanes, hkVector4 const& projectionPlane, hkgpConvexHull::BuildConfig const& config)
		{
			using func_t = std::int32_t (hkgpConvexHull::*)(hkVector4 const*, std::int32_t, hkVector4 const&, hkgpConvexHull::BuildConfig const&);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::buildFromPlanes_1 };
			return func(this, planes, numPlanes, projectionPlane, config);
		}

		bool expandByPlanarMargin(float margin)
		{
			using func_t = decltype(&hkgpConvexHull::expandByPlanarMargin);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::expandByPlanarMargin };
			return func(this, margin);
		}

		void absoluteScale(float a_arg1, hkgpConvexHull_AbsoluteScaleConfig const& a_arg2)
		{
			using func_t = decltype(&hkgpConvexHull::absoluteScale);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::absoluteScale };
			func(this, a_arg1, a_arg2);
		}

		static hkgpConvexHull* volumeSimplify(hkgpConvexHull const* hull, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&hkgpConvexHull::volumeSimplify);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::volumeSimplify };
			return func(hull, a_arg2, a_arg3);
		}

		static void createVoronoiFeatures(hkgpConvexHull const* domain, hkArray<hkVector4, hkContainerHeapAllocator> const& points, hkArray<hkgpConvexHull*, hkContainerHeapAllocator>& cells, hkArray<hkgpConvexHull*, hkContainerHeapAllocator>& edges, float margin)
		{
			using func_t = decltype(&hkgpConvexHull::createVoronoiFeatures);
			static REL::Relocation<func_t> func{ Offsets::hkgpConvexHull::createVoronoiFeatures };
			func(domain, points, cells, edges, margin);
		}

	public:
		// members
		hkgpConvexHullImpl*         m_data;        // 08
		void*                       m_userData;    // 0C?
		hkgpConvexHull_IUserObject* m_userObject;  // 10?
	};
}
