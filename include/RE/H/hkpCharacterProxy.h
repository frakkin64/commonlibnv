#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpPhantomListener.h"
#include "RE/H/hkpRootCdPoint.h"

namespace RE
{
	class hkStepInfo;
	class hkpAllCdPointCollector;
	class hkpCharacterProxyCinfo;
	class hkpCharacterProxyIntegrateCommand;
	class hkpCharacterProxyListener;
	class hkpPhantom;
	class hkpRigidBody;
	class hkpShapePhantom;
	class hkpSurfaceConstraintInfo;
	class hkpSurfaceInfoDeprecated;

	class alignas(16) hkpCharacterProxy :
		public hkReferencedObject,  // 00
		public hkpEntityListener,  // 08
		public hkpPhantomListener  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCharacterProxy };
		static constexpr auto VTABLE{ VTABLE::hkpCharacterProxy };

		// override (hkReferencedObject)
		virtual ~hkpCharacterProxy() = default;  // 00

		// add
		virtual void updateManifold(hkpAllCdPointCollector const& startPointCollector, hkpAllCdPointCollector const& castCollector, hkBool isMultithreaded);  // 03
		virtual void extractSurfaceConstraintInfo(const hkpRootCdPoint* a_arg1, hkpSurfaceConstraintInfo* a_arg2, float a_arg3) const;                        // 04

		hkVector4 const& getLinearVelocity() const
		{
			using func_t = decltype(&hkpCharacterProxy::getLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterProxy::getLinearVelocity };
			return func(this);
		}

		hkpCharacterProxy* ctor(hkpCharacterProxyCinfo const& info)
		{
			using func_t = hkpCharacterProxy*(__thiscall*)(hkpCharacterProxy*, hkpCharacterProxyCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterProxy::ctor };
			return func(this, info);
		}

		void checkSupportDeprecated(hkVector4 const& direction, hkpSurfaceInfoDeprecated& ground) const
		{
			using func_t = decltype(&hkpCharacterProxy::checkSupportDeprecated);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterProxy::checkSupportDeprecated };
			func(this, direction, ground);
		}

	protected:
		void integrateImplementation(hkStepInfo const& stepInfo, hkVector4 const& gravity, hkpAllCdPointCollector& castCollector, hkpAllCdPointCollector& startPointCollector, hkpCharacterProxyIntegrateCommand* command, std::int32_t maxInteractions)
		{
			using func_t = decltype(&hkpCharacterProxy::integrateImplementation);
			static REL::Relocation<func_t> func{ Offsets::hkpCharacterProxy::integrateImplementation };
			func(this, stepInfo, gravity, castCollector, startPointCollector, command, maxInteractions);
		}

	public:
		// members
		hkVector4                                                     m_velocity;                       // 10
		hkVector4                                                     m_oldDisplacement;                // 20?
		hkpShapePhantom*                                              m_shapePhantom;                   // 30?
		float                                                         m_dynamicFriction;                // 34?
		float                                                         m_staticFriction;                 // 38?
		std::uint32_t                                                 pad3C;                            // 3C
		hkVector4                                                     m_up;                             // 40?
		float                                                         m_extraUpStaticFriction;          // 50?
		float                                                         m_extraDownStaticFriction;        // 54?
		float                                                         m_keepDistance;                   // 58?
		float                                                         m_keepContactTolerance;           // 5C?
		float                                                         m_contactAngleSensitivity;        // 60?
		std::int32_t                                                  m_userPlanes;                     // 64?
		float                                                         m_maxCharacterSpeedForSolver;     // 68?
		float                                                         m_characterStrength;              // 6C?
		float                                                         m_characterMass;                  // 70?
		hkArray<hkpRootCdPoint, hkContainerHeapAllocator>             m_manifold;                       // 74?
		hkArray<hkpCharacterProxyListener*, hkContainerHeapAllocator> m_listeners;                      // 80?
		hkArray<hkpRigidBody*, hkContainerHeapAllocator>              m_bodies;                         // 8C?
		hkArray<hkpPhantom*, hkContainerHeapAllocator>                m_phantoms;                       // 98?
		float                                                         m_maxSlopeCosine;                 // A4?
		float                                                         m_penetrationRecoverySpeed;       // A8?
		std::int32_t                                                  m_maxCastIterations;              // AC?
		bool                                                          m_refreshManifoldInCheckSupport;  // B0?
		std::uint8_t                                                  padB1[0xF];                       // B1
	};
}
