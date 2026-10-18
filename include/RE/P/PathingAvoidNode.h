#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class PathingAvoidNode
	{
	public:
		enum class AVOID_NODE_TYPE : std::int32_t
		{
			kAVOID_NODE_SPHERE = 0x0,
			kAVOID_NODE_CYLINDER = 0x1,
			kAVOID_NODE_SPHERE_ACTOR = 0x2,
		};

		PathingAvoidNode* ctor(NiPoint3 const& arPoint, float afRadius, float afCost)
		{
			using func_t = PathingAvoidNode*(__thiscall*)(PathingAvoidNode*, NiPoint3 const&, float, float);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNode::ctor };
			return func(this, arPoint, afRadius, afCost);
		}

		float GetCostForPoint(NiPoint3& arPoint) const
		{
			using func_t = decltype(&PathingAvoidNode::GetCostForPoint);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNode::GetCostForPoint };
			return func(this, arPoint);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&PathingAvoidNode::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNode::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PathingAvoidNode::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNode::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		NiPoint3                          Point1;   // 00
		NiPoint3                          Point2;   // 0C
		float                             fRadius;  // 18
		float                             fCost;    // 1C
		PathingAvoidNode::AVOID_NODE_TYPE eType;    // 20
	};
	static_assert(sizeof(PathingAvoidNode) == 0x24);
}
