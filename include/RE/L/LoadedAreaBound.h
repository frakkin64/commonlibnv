#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class Actor;
	class GridCellArray;
	class NiPoint3;
	class TESObjectCELL;
	class TESObjectREFR;
	class bhkAabbPhantom;
	class bhkRigidBody;
	class hkAabb;
	class hkpPhantom;
	class hkpRigidBody;
	class hkpSimulationIsland;
	class hkpWorld;

	class LoadedAreaBound :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LoadedAreaBound };
		static constexpr auto VTABLE{ VTABLE::LoadedAreaBound };

		// override (NiRefObject)
		virtual ~LoadedAreaBound() = default;  // 00

		LoadedAreaBound* ctor(float afBoundOffset, float afBoundDepth, float afSideWallHeightOffset, float afVelocityDampen)
		{
			using func_t = LoadedAreaBound*(__thiscall*)(LoadedAreaBound*, float, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::ctor };
			return func(this, afBoundOffset, afBoundDepth, afSideWallHeightOffset, afVelocityDampen);
		}

		void Update(TESObjectCELL* apCell, GridCellArray* apCellGrid)
		{
			using func_t = decltype(&LoadedAreaBound::Update);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::Update };
			func(this, apCell, apCellGrid);
		}

		void Clear()
		{
			using func_t = decltype(&LoadedAreaBound::Clear);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::Clear };
			func(this);
		}

	protected:
		bool GetBoundFromCell(TESObjectCELL* apCell, GridCellArray* apCellGrid, hkAabb& arBound)
		{
			using func_t = decltype(&LoadedAreaBound::GetBoundFromCell);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::GetBoundFromCell };
			return func(this, apCell, apCellGrid, arBound);
		}

		void CheckForDynamicBodiesOutsideBound()
		{
			using func_t = decltype(&LoadedAreaBound::CheckForDynamicBodiesOutsideBound);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::CheckForDynamicBodiesOutsideBound };
			func(this);
		}

		void SetBodiesMotionOutsideAABB(hkAabb& boundAABB, hkArray<hkpSimulationIsland*, hkContainerHeapAllocator> const& arSimIslandA)
		{
			using func_t = decltype(&LoadedAreaBound::SetBodiesMotionOutsideAABB);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::SetBodiesMotionOutsideAABB };
			func(this, boundAABB, arSimIslandA);
		}

		void CheckPhantomsOutsideAABB(hkAabb& boundAABB, hkArray<hkpPhantom*, hkContainerHeapAllocator> const& arPhantomA, hkpWorld* apWorld)
		{
			using func_t = decltype(&LoadedAreaBound::CheckPhantomsOutsideAABB);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::CheckPhantomsOutsideAABB };
			func(this, boundAABB, arPhantomA, apWorld);
		}

		void WarpBody(bhkRigidBody* apBody, hkArray<hkpRigidBody*, hkContainerHeapAllocator>& arWarpedBodies)
		{
			using func_t = decltype(&LoadedAreaBound::WarpBody);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::WarpBody };
			func(this, apBody, arWarpedBodies);
		}

		void WarpActor(Actor* apActor)
		{
			using func_t = decltype(&LoadedAreaBound::WarpActor);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::WarpActor };
			func(this, apActor);
		}

		void FindWarpLocation(TESObjectREFR* apRef, NiPoint3 const& arCurLoc, NiPoint3& arWarpLoc)
		{
			using func_t = decltype(&LoadedAreaBound::FindWarpLocation);
			static REL::Relocation<func_t> func{ Offsets::LoadedAreaBound::FindWarpLocation };
			func(this, apRef, arCurLoc, arWarpLoc);
		}

	public:
		// members
		NiPointer<bhkAabbPhantom>            spPhantomA[6];          // 08
		const TESObjectCELL*                 pCurrentCell;           // 20
		NiTMap<bhkRigidBody*, std::uint16_t> HitMap;                 // 24
		float                                fBoundOffset;           // 34
		float                                fBoundDepth;            // 38
		float                                fSideWallHeightOffset;  // 3C
		float                                fVelocityDampen;        // 40
	};
	static_assert(sizeof(LoadedAreaBound) == 0x44);
}
