#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkCharacterController.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpRootCdPoint.h"

namespace RE
{
	class MagicProjectile;
	class TESObjectREFR;
	class bhkCharacterControllerCinfo;
	class hkpCollidable;
	class hkpSimplexSolverInput;

	class alignas(16) bhkCharacterListenerSpell :
		public bhkCharacterController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterListenerSpell };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterListenerSpell };

		// override (bhkCharacterController)
		virtual ~bhkCharacterListenerSpell() = default;  // 00

		// add
		virtual void processConstraintsCallback(hkArray<hkpRootCdPoint, hkContainerHeapAllocator> const& arManifold, hkpSimplexSolverInput& arInput);  // 35
		virtual void contactPointAddedCallback(hkpRootCdPoint const& point);                                                                           // 36
		virtual void contactPointRemovedCallback(hkpRootCdPoint const& point);                                                                         // 37

		bhkCharacterListenerSpell* ctor(bhkCharacterControllerCinfo& arInfo, MagicProjectile* apProjectile)
		{
			using func_t = bhkCharacterListenerSpell*(__thiscall*)(bhkCharacterListenerSpell*, bhkCharacterControllerCinfo&, MagicProjectile*);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterListenerSpell::ctor };
			return func(this, arInfo, apProjectile);
		}

	private:
		TESObjectREFR* GetObjectREFR(hkpCollidable const* apCollidable)
		{
			using func_t = decltype(&bhkCharacterListenerSpell::GetObjectREFR);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterListenerSpell::GetObjectREFR };
			return func(this, apCollidable);
		}

	public:
		// members
		MagicProjectile* pProj;        // 650
		std::uint8_t     pad654[0xC];  // 654
	};
}
