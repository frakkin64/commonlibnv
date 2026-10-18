#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class BaseFormComponent;
	class NiAVObject;
	class TESForm;
	class TEX_SWAP;

	class TESModelTextureSwap :
		public TESModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModelTextureSwap };
		static constexpr auto VTABLE{ VTABLE::TESModelTextureSwap };

		// override (TESModel)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03
		virtual ~TESModelTextureSwap() = default;                           // 04
		virtual TESModelTextureSwap* GetAsModelTextureSwap() override;      // 07

		TESModelTextureSwap* ctor()
		{
			using func_t = TESModelTextureSwap*(__thiscall*)(TESModelTextureSwap*);
			static REL::Relocation<func_t> func{ Offsets::TESModelTextureSwap::ctor };
			return func(this);
		}

		void Save(CHUNK_ID aeModelID, CHUNK_ID aeTextureID, CHUNK_ID aeSwapID)
		{
			using func_t = decltype(&TESModelTextureSwap::Save);
			static REL::Relocation<func_t> func{ Offsets::TESModelTextureSwap::Save };
			func(this, aeModelID, aeTextureID, aeSwapID);
		}

		bool BuildTextureSwapChunkData(void*& apOutData, std::uint32_t& aiOutDataSize)
		{
			using func_t = decltype(&TESModelTextureSwap::BuildTextureSwapChunkData);
			static REL::Relocation<func_t> func{ Offsets::TESModelTextureSwap::BuildTextureSwapChunkData };
			return func(this, apOutData, aiOutDataSize);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESModelTextureSwap::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESModelTextureSwap::InitItem };
			func(this, apOwner);
		}

		void SwapTextures(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESModelTextureSwap::SwapTextures);
			static REL::Relocation<func_t> func{ Offsets::TESModelTextureSwap::SwapTextures };
			func(this, ap3D);
		}

		bool UnpackTextureSwapChunkData(void* apData, std::uint32_t aiDataSize, std::uint32_t aiVersion)
		{
			using func_t = decltype(&TESModelTextureSwap::UnpackTextureSwapChunkData);
			static REL::Relocation<func_t> func{ Offsets::TESModelTextureSwap::UnpackTextureSwapChunkData };
			return func(this, apData, aiDataSize, aiVersion);
		}

	public:
		// members
		BSSimpleList<TEX_SWAP*> TextureSwapList;  // 18
	};
	static_assert(sizeof(TESModelTextureSwap) == 0x20);
}
