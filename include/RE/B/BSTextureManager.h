#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTextureManager_eTextureType.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSRenderedTexture;
	class NiDX9Renderer;
	class NiDepthStencilBuffer;
	class NiRenderedTexture;

	class BSTextureManager
	{
	public:
		using eTextureType = BSTextureManager_eTextureType;

		class DebugInfo;
		class RenderedTextureData;

		class DebugInfo
		{
		public:
			// members
			std::uint32_t uiTexturesFreedThisFrame;  // 00?
		};

		class RenderedTextureData
		{
		public:
			// members
			NiPointer<BSRenderedTexture>                     spRenderedTexture;  // 00?
			std::uint32_t                                    iD3DFormat;         // 04?
			std::uint32_t                                    iEDRAMFormat;       // 08?
			std::uint32_t                                    uFlags;             // 0C?
			bool                                             bUsedThisFrame;     // 10?
			std::uint8_t                                     pad11[0x3];         // 11
			BSTextureManager_eTextureType                    eType;              // 14?
			std::uint32_t                                    uiBorrowedCount;    // 18?
			std::uint32_t                                    uiReturnedCount;    // 1C?
			NiTPrimitiveArray<BSTextureManager_eTextureType> lUsage;             // 20?
		};

		void ReturnRenderedTexture(BSRenderedTexture* apTexToReturn)
		{
			using func_t = decltype(&BSTextureManager::ReturnRenderedTexture);
			static REL::Relocation<func_t> func{ Offsets::BSTextureManager::ReturnRenderedTexture };
			func(this, apTexToReturn);
		}

		BSRenderedTexture* BorrowRenderedTexture(NiDX9Renderer* apRenderer, BSTextureManager_eTextureType aeType, std::uint32_t alAdditionalFlags, NiRenderedTexture* apAliasTex, std::uint32_t uiAliasOffset)
		{
			using func_t = decltype(&BSTextureManager::BorrowRenderedTexture);
			static REL::Relocation<func_t> func{ Offsets::BSTextureManager::BorrowRenderedTexture };
			return func(this, apRenderer, aeType, alAdditionalFlags, apAliasTex, uiAliasOffset);
		}

	public:
		// members
		// not placed: spUnusedAliasedTextureList(absent)
		NiTPointerList<NiPointer<BSRenderedTexture>>           spUsedAliasedTextureList[4];  // 00
		NiTPointerList<BSTextureManager::RenderedTextureData*> unusedRTPool;                 // 30?
		NiTPointerList<BSTextureManager::RenderedTextureData*> usedRTPool;                   // 3C?
		NiTPointerList<NiPointer<BSRenderedTexture>>           unusedFrustumShadowRTPool;    // 48?
		NiTPointerList<NiPointer<BSRenderedTexture>>           usedFrustumShadowRTPool;      // 54?
		NiPointer<NiDepthStencilBuffer>                        spSharedDepthBuffer;          // 60?
		NiPointer<NiDepthStencilBuffer>                        spSharedMSDepthBuffer;        // 64?
		NiPointer<NiDepthStencilBuffer>                        spShadowDepthBuffer;          // 68?
	};
}
