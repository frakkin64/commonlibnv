#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class TESObjectREFR;

	class PathingNode
	{
	public:
		void SetTeleportDoor(TESObjectREFR* apDoor)
		{
			using func_t = decltype(&PathingNode::SetTeleportDoor);
			static REL::Relocation<func_t> func{ Offsets::PathingNode::SetTeleportDoor };
			func(this, apDoor);
		}

		bool ActivateNode(Actor* apActor)
		{
			using func_t = decltype(&PathingNode::ActivateNode);
			static REL::Relocation<func_t> func{ Offsets::PathingNode::ActivateNode };
			return func(this, apActor);
		}

		bool IsTeleportDoorNode() const
		{
			using func_t = decltype(&PathingNode::IsTeleportDoorNode);
			static REL::Relocation<func_t> func{ Offsets::PathingNode::IsTeleportDoorNode };
			return func(this);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PathingNode::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PathingNode::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::uint32_t   iFlags;    // 00
		PathingLocation Location;  // 04
		NiPoint3        Tangent;   // 2C
		TESObjectREFR*  pDoorRef;  // 38
	};
	static_assert(sizeof(PathingNode) == 0x3C);
}
