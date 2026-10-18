#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiRefObject.h"
#include "RE/P/PathingNode.h"
#include "RE/V/VirtualPathingNode.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NavMeshInfo;
	class NiPoint3;
	class PathingLocation;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class PathingSolution :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingSolution };
		static constexpr auto VTABLE{ VTABLE::PathingSolution };

		// override (NiRefObject)
		virtual ~PathingSolution() = default;  // 00

		std::uint32_t GetVirtualNodeCount() const
		{
			using func_t = decltype(&PathingSolution::GetVirtualNodeCount);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetVirtualNodeCount };
			return func(this);
		}

		PathingNode* GetLastNode()
		{
			using func_t = decltype(&PathingSolution::GetLastNode);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetLastNode };
			return func(this);
		}

		bool IsIncomplete() const
		{
			using func_t = decltype(&PathingSolution::IsIncomplete);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::IsIncomplete };
			return func(this);
		}

		void ClearCurrentDetailedPath()
		{
			using func_t = decltype(&PathingSolution::ClearCurrentDetailedPath);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ClearCurrentDetailedPath };
			func(this);
		}

		PathingSolution* ctor()
		{
			using func_t = PathingSolution*(__thiscall*)(PathingSolution*);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ctor };
			return func(this);
		}

		void Clear()
		{
			using func_t = decltype(&PathingSolution::Clear);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::Clear };
			func(this);
		}

		float ComputeVirtualPathLength() const
		{
			using func_t = decltype(&PathingSolution::ComputeVirtualPathLength);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ComputeVirtualPathLength };
			return func(this);
		}

		VirtualPathingNode* GetVirtualNode(std::uint32_t aiIndex)
		{
			using func_t = decltype(&PathingSolution::GetVirtualNode);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetVirtualNode };
			return func(this, aiIndex);
		}

		float ComputeDetailedPathLength() const
		{
			using func_t = decltype(&PathingSolution::ComputeDetailedPathLength);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ComputeDetailedPathLength };
			return func(this);
		}

		PathingNode* GetNode(std::uint32_t aiIndex)
		{
			using func_t = decltype(&PathingSolution::GetNode);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetNode };
			return func(this, aiIndex);
		}

		float ComputeSplineLength(std::int32_t aiNodeIndex) const
		{
			using func_t = decltype(&PathingSolution::ComputeSplineLength);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ComputeSplineLength };
			return func(this, aiNodeIndex);
		}

		void ComputeLocationFromParameter(float a_arg1, NiPoint3& a_arg2) const
		{
			using func_t = decltype(&PathingSolution::ComputeLocationFromParameter);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ComputeLocationFromParameter };
			func(this, a_arg1, a_arg2);
		}

		bool FindPointOnPath(float afCurrentParameter, float a_arg2, bool a_arg3, float* abForward, NiPoint3* apNewParameter)
		{
			using func_t = decltype(&PathingSolution::FindPointOnPath);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::FindPointOnPath };
			return func(this, afCurrentParameter, a_arg2, a_arg3, abForward, apNewParameter);
		}

		float ComputeDistanceToParameter(float afParameter) const
		{
			using func_t = decltype(&PathingSolution::ComputeDistanceToParameter);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::ComputeDistanceToParameter };
			return func(this, afParameter);
		}

		float GetSplineParametersFromPercentage(float afPathPercent, float a_arg2, std::uint32_t& a_arg3) const
		{
			using func_t = decltype(&PathingSolution::GetSplineParametersFromPercentage);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetSplineParametersFromPercentage };
			return func(this, afPathPercent, a_arg2, a_arg3);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&PathingSolution::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PathingSolution::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::LoadGame };
			func(this, apLoadGameBuffer);
		}

		std::uint32_t GetNodeCount() const
		{
			using func_t = decltype(&PathingSolution::GetNodeCount);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetNodeCount };
			return func(this);
		}

		bool IsValid() const
		{
			using func_t = decltype(&PathingSolution::IsValid);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::IsValid };
			return func(this);
		}

		VirtualPathingNode* GetLastVirtualNode()
		{
			using func_t = decltype(&PathingSolution::GetLastVirtualNode);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::GetLastVirtualNode };
			return func(this);
		}

	private:
		std::uint32_t AddPathingNode(PathingLocation const& aLocation, NiPoint3 const& aTangent)
		{
			using func_t = decltype(&PathingSolution::AddPathingNode);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddPathingNode };
			return func(this, aLocation, aTangent);
		}

		std::uint32_t AddVirtualPathingNode(PathingLocation const& apLocation)
		{
			using func_t = std::uint32_t (PathingSolution::*)(PathingLocation const&);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddVirtualPathingNode };
			return func(this, apLocation);
		}

		std::uint32_t AddVirtualPathingNode(NavMeshInfo const* apNavMeshInfo)
		{
			using func_t = std::uint32_t (PathingSolution::*)(NavMeshInfo const*);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddVirtualPathingNode_1 };
			return func(this, apNavMeshInfo);
		}

		std::uint32_t AddVirtualPathingNode(NiPoint3 const& aLocation, NavMeshInfo const* apNavMeshInfo)
		{
			using func_t = std::uint32_t (PathingSolution::*)(NiPoint3 const&, NavMeshInfo const*);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddVirtualPathingNode_2 };
			return func(this, aLocation, apNavMeshInfo);
		}

		std::uint32_t AddVirtualPathingNode(NavMeshInfo const* apNavMeshInfo, NiPoint3 const& aLocation, TESObjectREFR* apDoor)
		{
			using func_t = std::uint32_t (PathingSolution::*)(NavMeshInfo const*, NiPoint3 const&, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddVirtualPathingNode_3 };
			return func(this, apNavMeshInfo, aLocation, apDoor);
		}

		void SetIncomplete(bool abIncomplete)
		{
			using func_t = decltype(&PathingSolution::SetIncomplete);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::SetIncomplete };
			func(this, abIncomplete);
		}

		std::uint32_t AddVirtualPathingNode(PathingLocation const& aLocation, TESObjectREFR* apDoor)
		{
			using func_t = std::uint32_t (PathingSolution::*)(PathingLocation const&, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddVirtualPathingNode_4 };
			return func(this, aLocation, apDoor);
		}

		std::uint32_t AddVirtualPathingNode(NiPoint3 const& aLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace)
		{
			using func_t = std::uint32_t (PathingSolution::*)(NiPoint3 const&, TESObjectCELL*, TESWorldSpace*);
			static REL::Relocation<func_t> func{ Offsets::PathingSolution::AddVirtualPathingNode_5 };
			return func(this, aLocation, apCell, apWorldSpace);
		}

	public:
		// members
		BSSimpleArray<VirtualPathingNode, 1024> VirtualPathingNodes;           // 08
		std::int32_t                            iFirstLoadedVirtualNodeIndex;  // 18
		std::int32_t                            iLastLoadedVirtualNodeIndex;   // 1C
		BSSimpleArray<PathingNode, 1024>        CurrentPathingNodes;           // 20
		BSSimpleArray<std::uint32_t, 1024>      DoorIDs;                       // 30
		bool                                    bIncompletePath;               // 40
		std::uint8_t                            pad41[0x3];                    // 41
	};
	static_assert(sizeof(PathingSolution) == 0x44);
}
