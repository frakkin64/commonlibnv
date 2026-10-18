#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkCharacterController.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpRootCdPoint.h"

namespace RE
{
	class ArrowProjectile;
	class bhkCharacterControllerCinfo;
	class hkVector4;
	class hkpCollidable;
	class hkpSimplexSolverInput;

	class alignas(16) bhkCharacterListenerArrow :
		public bhkCharacterController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterListenerArrow };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterListenerArrow };

		// override (bhkCharacterController)
		virtual ~bhkCharacterListenerArrow() = default;  // 00

		// add
		virtual void processConstraintsCallback(hkArray<hkpRootCdPoint, hkContainerHeapAllocator> const& arManifold, hkpSimplexSolverInput& arInput);  // 35
		virtual void contactPointAddedCallback(hkpRootCdPoint const& point);                                                                           // 36
		virtual void contactPointRemovedCallback(hkpRootCdPoint const& point);                                                                         // 37

		bhkCharacterListenerArrow* ctor(bhkCharacterControllerCinfo& arInfo, ArrowProjectile* apProjectile)
		{
			using func_t = bhkCharacterListenerArrow*(__thiscall*)(bhkCharacterListenerArrow*, bhkCharacterControllerCinfo&, ArrowProjectile*);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterListenerArrow::ctor };
			return func(this, arInfo, apProjectile);
		}

		static void ProcessCollision(ArrowProjectile* apProjectile, hkpCollidable const* apCollidee, hkVector4 const& aContactPoint, hkVector4 const& aContactNormal)
		{
			using func_t = decltype(&bhkCharacterListenerArrow::ProcessCollision);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterListenerArrow::ProcessCollision };
			func(apProjectile, apCollidee, aContactPoint, aContactNormal);
		}

	public:
		// members
		ArrowProjectile* pProj;        // 650
		std::uint8_t     pad654[0xC];  // 654
	};
}
