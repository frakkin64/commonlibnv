#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSDistantObjectBlockLoadTask;
	class BGSTerrainNode;
	class BSMultiBoundNode;
	class NiAVObject;
	class NiGeometry;
	class TESWorldSpace;

	class BGSDistantObjectBlock
	{
	public:
		static void BuildBlockFileName(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildBlockFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildBlockFileName };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildBlockFileNameHighPriority(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildBlockFileNameHighPriority);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildBlockFileNameHighPriority };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildBlockFileNamePA(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildBlockFileNamePA);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildBlockFileNamePA };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildStingerBlockFileName(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildStingerBlockFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildStingerBlockFileName };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildStingerBlockFileNameHighPriority(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildStingerBlockFileNameHighPriority);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildStingerBlockFileNameHighPriority };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildBlockDiffuseTextureFileName(char* apOutput, TESWorldSpace* apWorld)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildBlockDiffuseTextureFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildBlockDiffuseTextureFileName };
			func(apOutput, apWorld);
		}

		static void BuildBlockNormalTextureFileName(char* apOutput, TESWorldSpace* apWorld)
		{
			using func_t = decltype(&BGSDistantObjectBlock::BuildBlockNormalTextureFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::BuildBlockNormalTextureFileName };
			func(apOutput, apWorld);
		}

		static void EnableStingerRenderAll(NiAVObject* apGeom, bool abEnable)
		{
			using func_t = decltype(&BGSDistantObjectBlock::EnableStingerRenderAll);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::EnableStingerRenderAll };
			func(apGeom, abEnable);
		}

		void UpdateStingerVisibility(NiAVObject* apGeomNode, std::int32_t aiLODLevel, std::int16_t aiBaseCellx, std::int16_t aiBaseCelly)
		{
			using func_t = decltype(&BGSDistantObjectBlock::UpdateStingerVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::UpdateStingerVisibility };
			func(this, apGeomNode, aiLODLevel, aiBaseCellx, aiBaseCelly);
		}

		void EnableAllStingerVisibility(NiAVObject* apGeomNode)
		{
			using func_t = decltype(&BGSDistantObjectBlock::EnableAllStingerVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::EnableAllStingerVisibility };
			func(this, apGeomNode);
		}

		void Detach()
		{
			using func_t = decltype(&BGSDistantObjectBlock::Detach);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::Detach };
			func(this);
		}

		void Attach()
		{
			using func_t = decltype(&BGSDistantObjectBlock::Attach);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::Attach };
			func(this);
		}

		bool GetHighPriority()
		{
			using func_t = decltype(&BGSDistantObjectBlock::GetHighPriority);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::GetHighPriority };
			return func(this);
		}

		void OnLoadFinished(bool abHasMeshReplacement)
		{
			using func_t = decltype(&BGSDistantObjectBlock::OnLoadFinished);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::OnLoadFinished };
			func(this, abHasMeshReplacement);
		}

		void TriggerApocalypse(TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::TriggerApocalypse);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::TriggerApocalypse };
			func(this, apWorld, aiLevel, asCellX, asCellY);
		}

		void SwitchToLow(TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::SwitchToLow);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::SwitchToLow };
			func(this, apWorld, aiLevel, asCellX, asCellY);
		}

		void SwitchToHigh(TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantObjectBlock::SwitchToHigh);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::SwitchToHigh };
			func(this, apWorld, aiLevel, asCellX, asCellY);
		}

		void PrepareStingerObject(NiAVObject* apGeom)
		{
			using func_t = decltype(&BGSDistantObjectBlock::PrepareStingerObject);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::PrepareStingerObject };
			func(this, apGeom);
		}

	private:
		void Prepare()
		{
			using func_t = decltype(&BGSDistantObjectBlock::Prepare);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlock::Prepare };
			func(this);
		}

	public:
		// members
		BGSTerrainNode*                          pNode;              // 00
		NiPointer<NiGeometry>                    spMesh;             // 04
		NiPointer<BSMultiBoundNode>              spNode;             // 08
		NiPointer<NiGeometry>                    spOldMesh;          // 0C
		NiPointer<BSMultiBoundNode>              spNodeStinger;      // 10
		NiPointer<BSMultiBoundNode>              spNodeStingerOld;   // 14
		NiPointer<BGSDistantObjectBlockLoadTask> spLoadTask;         // 18
		NiPointer<BGSDistantObjectBlockLoadTask> spLoadTaskStinger;  // 1C
		bool                                     bDoneLoading;       // 20
		bool                                     bAttached;          // 21
		bool                                     bPrepared;          // 22
		bool                                     bHighPriority;      // 23
		bool                                     bDetachFlag;        // 24
		std::uint8_t                             pad25[0x3];         // 25
		std::int32_t                             nDetachCount;       // 28
	};
}
