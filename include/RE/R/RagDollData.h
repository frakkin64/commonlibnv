#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiNode;
	class RagDollBone;
	class TESFile;
	class TESObjectREFR;

	class RagDollData
	{
	public:
		void Save()
		{
			using func_t = decltype(&RagDollData::Save);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::Save };
			func(this);
		}

		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&RagDollData::Load);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::Load };
			return func(this, apFile);
		}

		bool Compare(RagDollData* apCompare)
		{
			using func_t = decltype(&RagDollData::Compare);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::Compare };
			return func(this, apCompare);
		}

		bool UpdateDataFromReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&RagDollData::UpdateDataFromReference);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::UpdateDataFromReference };
			return func(this, apRef);
		}

		bool UpdateReferenceFromData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&RagDollData::UpdateReferenceFromData);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::UpdateReferenceFromData };
			return func(this, apRef);
		}

		static std::uint8_t CountRagDollBones(NiNode* apNode)
		{
			using func_t = decltype(&RagDollData::CountRagDollBones);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::CountRagDollBones };
			return func(apNode);
		}

	protected:
		bool UpdateRagDollDataFromNode(NiNode* apNode, std::uint32_t& aiBoneIndex, bool abInit)
		{
			using func_t = decltype(&RagDollData::UpdateRagDollDataFromNode);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::UpdateRagDollDataFromNode };
			return func(this, apNode, aiBoneIndex, abInit);
		}

		bool UpdateNodeFromRagDollData(NiNode* apNode, std::uint32_t& aiBoneIndex)
		{
			using func_t = decltype(&RagDollData::UpdateNodeFromRagDollData);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::UpdateNodeFromRagDollData };
			return func(this, apNode, aiBoneIndex);
		}

		void CreateRagDollBoneArray(TESObjectREFR* apRef)
		{
			using func_t = decltype(&RagDollData::CreateRagDollBoneArray);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::CreateRagDollBoneArray };
			func(this, apRef);
		}

		void UpdateBip01NodeFromRagdollData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&RagDollData::UpdateBip01NodeFromRagdollData);
			static REL::Relocation<func_t> func{ Offsets::RagDollData::UpdateBip01NodeFromRagdollData };
			func(this, apRef);
		}

	public:
		// members
		std::uint8_t iBoneCount;  // 00
		std::uint8_t pad01[0x3];  // 01
		RagDollBone* pBoneArray;  // 04
		NiPoint3     Bip01Rot;    // 08
	};
}
