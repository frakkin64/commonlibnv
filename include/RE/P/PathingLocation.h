#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class BGSWorldLocation;
	class FindTriangleForLocationFilter;
	class NavMeshInfo;
	class NavMeshPtr;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class __declspec(novtable) PathingLocation
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingLocation };
		static constexpr auto VTABLE{ VTABLE::PathingLocation };

		// add
		virtual void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer);  // 00
		virtual void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer);  // 01

		void dtor()
		{
			using func_t = void(__thiscall*)(PathingLocation*);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::dtor };
			func(this);
		}

		bool QUnused() const
		{
			using func_t = decltype(&PathingLocation::QUnused);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::QUnused };
			return func(this);
		}

		PathingLocation* ctor()
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor };
			return func(this);
		}

		PathingLocation* ctor(PathingLocation const& aLoc)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, PathingLocation const&);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_1 };
			return func(this, aLoc);
		}

		PathingLocation& operator_call(PathingLocation const& aLoc)
		{
			using func_t = decltype(&PathingLocation::operator_call);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::operator_call };
			return func(this, aLoc);
		}

		PathingLocation* ctor(TESObjectREFR* apRef)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_2 };
			return func(this, apRef);
		}

		PathingLocation* ctor(NiPoint3 const& aLocation, TESObjectREFR* apRef)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, NiPoint3 const&, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_3 };
			return func(this, aLocation, apRef);
		}

		PathingLocation* ctor(NiPoint3 const& aLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, NiPoint3 const&, TESObjectCELL*, TESWorldSpace*);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_4 };
			return func(this, aLocation, apCell, apWorldSpace);
		}

		PathingLocation* ctor(NiPoint3 const& aLocation, NavMeshInfo const* apNavMeshInfo)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, NiPoint3 const&, NavMeshInfo const*);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_5 };
			return func(this, aLocation, apNavMeshInfo);
		}

		PathingLocation* ctor(NiPoint3 const& aLocation, NavMeshInfo const* apNavMeshInfo, std::uint16_t ausTriangleIndex)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, NiPoint3 const&, NavMeshInfo const*, std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_6 };
			return func(this, aLocation, apNavMeshInfo, ausTriangleIndex);
		}

		PathingLocation* ctor(NiPoint3 const& aLocation, PathingLocation const& aHintLoc)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, NiPoint3 const&, PathingLocation const&);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_7 };
			return func(this, aLocation, aHintLoc);
		}

		PathingLocation* ctor(BGSWorldLocation const& aWorldLocation)
		{
			using func_t = PathingLocation*(__thiscall*)(PathingLocation*, BGSWorldLocation const&);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ctor_8 };
			return func(this, aWorldLocation);
		}

		void SetNavMeshInfo(NavMeshInfo const* apNavMeshInfo)
		{
			using func_t = decltype(&PathingLocation::SetNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::SetNavMeshInfo };
			func(this, apNavMeshInfo);
		}

		void SetLocation(NiPoint3 const& aLocation)
		{
			using func_t = decltype(&PathingLocation::SetLocation);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::SetLocation };
			func(this, aLocation);
		}

		TESObjectCELL* GetCell() const
		{
			using func_t = decltype(&PathingLocation::GetCell);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::GetCell };
			return func(this);
		}

		NavMeshInfo const* GetBestNavMeshInfo() const
		{
			using func_t = decltype(&PathingLocation::GetBestNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::GetBestNavMeshInfo };
			return func(this);
		}

		bool GetNavMesh(NavMeshPtr& aRetNavMesh) const
		{
			using func_t = decltype(&PathingLocation::GetNavMesh);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::GetNavMesh };
			return func(this, aRetNavMesh);
		}

		bool HasNavMeshData() const
		{
			using func_t = decltype(&PathingLocation::HasNavMeshData);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::HasNavMeshData };
			return func(this);
		}

		bool ResolveNavMeshInfo(FindTriangleForLocationFilter* apFilter)
		{
			using func_t = decltype(&PathingLocation::ResolveNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ResolveNavMeshInfo };
			return func(this, apFilter);
		}

		void ClearTriangleData()
		{
			using func_t = decltype(&PathingLocation::ClearTriangleData);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ClearTriangleData };
			func(this);
		}

		bool ResolveToClosestNavmeshAndTriangle()
		{
			using func_t = decltype(&PathingLocation::ResolveToClosestNavmeshAndTriangle);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ResolveToClosestNavmeshAndTriangle };
			return func(this);
		}

		bool ResolveNavMeshInfoOnly()
		{
			using func_t = decltype(&PathingLocation::ResolveNavMeshInfoOnly);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::ResolveNavMeshInfoOnly };
			return func(this);
		}

		void PrintDebugText(char* apBuffer, std::int32_t aiMaxSize) const
		{
			using func_t = decltype(&PathingLocation::PrintDebugText);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::PrintDebugText };
			func(this, apBuffer, aiMaxSize);
		}

		bool IsValidLocation(float afRadius)
		{
			using func_t = decltype(&PathingLocation::IsValidLocation);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::IsValidLocation };
			return func(this, afRadius);
		}

		bool IsCloseTo(PathingLocation const& aOtherLoc, float afTolerance)
		{
			using func_t = decltype(&PathingLocation::IsCloseTo);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::IsCloseTo };
			return func(this, aOtherLoc, afTolerance);
		}

		std::uint16_t GetTriangle() const
		{
			using func_t = decltype(&PathingLocation::GetTriangle);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::GetTriangle };
			return func(this);
		}

		void SetLocationSimple(NiPoint3 const& aLocation)
		{
			using func_t = decltype(&PathingLocation::SetLocationSimple);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::SetLocationSimple };
			func(this, aLocation);
		}

	private:
		void SetAllMeshesReachable(std::int32_t aiVal)
		{
			using func_t = decltype(&PathingLocation::SetAllMeshesReachable);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::SetAllMeshesReachable };
			func(this, aiVal);
		}

		void SetupData(NiPoint3 const& aLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace)
		{
			using func_t = decltype(&PathingLocation::SetupData);
			static REL::Relocation<func_t> func{ Offsets::PathingLocation::SetupData };
			func(this, aLocation, apCell, apWorldSpace);
		}

	public:
		// members
		NiPoint3                                       Location;     // 04
		const NavMeshInfo*                             pNavMesh;     // 10
		const BSSimpleArray<NavMeshInfo const*, 1024>* pNavMeshes;   // 14
		TESObjectCELL*                                 pCell;        // 18
		TESWorldSpace*                                 pWorldSpace;  // 1C
		std::uint32_t                                  iCellKey;     // 20
		std::uint16_t                                  usTriangle;   // 24
		std::uint8_t                                   uiFlags;      // 26
		std::uint8_t                                   pad27;        // 27
	};
	static_assert(sizeof(PathingLocation) == 0x28);
}
