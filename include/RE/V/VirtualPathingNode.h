#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingLocation.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class NavMeshInfo;
	class NiPoint3;
	class TESObjectREFR;

	class VirtualPathingNode
	{
	public:
		bool IsVirtualTeleportDoorNode() const
		{
			using func_t = decltype(&VirtualPathingNode::IsVirtualTeleportDoorNode);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::IsVirtualTeleportDoorNode };
			return func(this);
		}

		bool HasActualLocation() const
		{
			using func_t = decltype(&VirtualPathingNode::HasActualLocation);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::HasActualLocation };
			return func(this);
		}

		VirtualPathingNode* ctor(PathingLocation const& aLocation)
		{
			using func_t = VirtualPathingNode*(__thiscall*)(VirtualPathingNode*, PathingLocation const&);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::ctor };
			return func(this, aLocation);
		}

		VirtualPathingNode* ctor(PathingLocation const& aLocation, TESObjectREFR* apDoorRef)
		{
			using func_t = VirtualPathingNode*(__thiscall*)(VirtualPathingNode*, PathingLocation const&, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::ctor_1 };
			return func(this, aLocation, apDoorRef);
		}

		VirtualPathingNode* ctor(NavMeshInfo const* apNavMeshInfo)
		{
			using func_t = VirtualPathingNode*(__thiscall*)(VirtualPathingNode*, NavMeshInfo const*);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::ctor_2 };
			return func(this, apNavMeshInfo);
		}

		VirtualPathingNode* ctor(NavMeshInfo const* apNavMeshInfo, NiPoint3 const& aLocation, TESObjectREFR* apDoorRef)
		{
			using func_t = VirtualPathingNode*(__thiscall*)(VirtualPathingNode*, NavMeshInfo const*, NiPoint3 const&, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::ctor_3 };
			return func(this, apNavMeshInfo, aLocation, apDoorRef);
		}

		VirtualPathingNode* ctor(NiPoint3 const& aLocation, NavMeshInfo const* apNavMeshInfo)
		{
			using func_t = VirtualPathingNode*(__thiscall*)(VirtualPathingNode*, NiPoint3 const&, NavMeshInfo const*);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::ctor_4 };
			return func(this, aLocation, apNavMeshInfo);
		}

		void SetLocation(PathingLocation& arLocation)
		{
			using func_t = decltype(&VirtualPathingNode::SetLocation);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::SetLocation };
			func(this, arLocation);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&VirtualPathingNode::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::VirtualPathingNode::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::uint32_t   iFlags;    // 00
		PathingLocation Location;  // 04
		TESObjectREFR*  pDoorRef;  // 2C
	};
	static_assert(sizeof(VirtualPathingNode) == 0x30);
}
