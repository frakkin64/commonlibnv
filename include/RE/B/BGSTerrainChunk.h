#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSTerrainChunkLoadTask;
	class BGSTerrainNode;
	class BSMultiBoundNode;
	class BSShaderPPLightingProperty;
	class NiCamera;
	class NiCullingProcess;
	class NiGeometry;
	class NiTexture;
	class TESObjectREFR;
	class TESWorldSpace;

	class BGSTerrainChunk
	{
	public:
		enum class ChunkTextureType : std::int32_t
		{
			kCHUNK_TEXTURE_DIFFUSE = 0x0,
			kCHUNK_TEXTURE_NORMAL = 0x1,
		};

		static void UpdateMultiBoundVisibility(NiCamera* apCamera, NiCullingProcess& aCullProc)
		{
			using func_t = decltype(&BGSTerrainChunk::UpdateMultiBoundVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::UpdateMultiBoundVisibility };
			func(apCamera, aCullProc);
		}

		static void BuildChunkFileName(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSTerrainChunk::BuildChunkFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::BuildChunkFileName };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildChunkDiffuseTextureFileName(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSTerrainChunk::BuildChunkDiffuseTextureFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::BuildChunkDiffuseTextureFileName };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		static void BuildChunkNormalTextureFileName(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSTerrainChunk::BuildChunkNormalTextureFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::BuildChunkNormalTextureFileName };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		NiTexture* GetTexture(BGSTerrainChunk::ChunkTextureType aTexType)
		{
			using func_t = decltype(&BGSTerrainChunk::GetTexture);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::GetTexture };
			return func(this, aTexType);
		}

		void Attach()
		{
			using func_t = decltype(&BGSTerrainChunk::Attach);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::Attach };
			func(this);
		}

		void AddWaterToSystem(bool abForce)
		{
			using func_t = decltype(&BGSTerrainChunk::AddWaterToSystem);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::AddWaterToSystem };
			func(this, abForce);
		}

		static void ShowNormalDetail()
		{
			using func_t = decltype(&BGSTerrainChunk::ShowNormalDetail);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::ShowNormalDetail };
			func();
		}

		void Hide()
		{
			using func_t = decltype(&BGSTerrainChunk::Hide);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::Hide };
			func(this);
		}

		void Show()
		{
			using func_t = decltype(&BGSTerrainChunk::Show);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::Show };
			func(this);
		}

	private:
		void Prepare()
		{
			using func_t = decltype(&BGSTerrainChunk::Prepare);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainChunk::Prepare };
			func(this);
		}

	public:
		// members
		BGSTerrainNode*                       pNode;                           // 00
		NiPointer<NiGeometry>                 spMesh;                          // 04
		NiPointer<NiGeometry>                 spWater;                         // 08
		NiPointer<NiGeometry>                 spWaterAtReflectionHeight;       // 0C
		NiPointer<BSMultiBoundNode>           spNode;                          // 10
		NiPointer<BSMultiBoundNode>           spWaterNode;                     // 14
		NiPointer<BSMultiBoundNode>           spWaterReflNode;                 // 18
		TESObjectREFR*                        pLODWaterRef;                    // 1C
		TESObjectREFR*                        pLODWaterAtReflectionHeightRef;  // 20
		NiPointer<BGSTerrainChunkLoadTask>    spLoadTask;                      // 24
		bool                                  bDoneLoading;                    // 28
		bool                                  bAttached;                       // 29
		bool                                  bPrepared;                       // 2A
		std::uint8_t                          pad2B;                           // 2B
		NiPointer<BSShaderPPLightingProperty> spLightingProp;                  // 2C
	};
}
