#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSpinLock.h"
#include "RE/S/ScrapHeapBuffer.h"

namespace RE
{
	class ScrapHeapManager
	{
	public:
		char* RequestBuffer(std::uint32_t& ariRequestedInitialSize)
		{
			using func_t = decltype(&ScrapHeapManager::RequestBuffer);
			static REL::Relocation<func_t> func{ Offsets::ScrapHeapManager::RequestBuffer };
			return func(this, ariRequestedInitialSize);
		}

		void ReleaseBuffer(char* apBuffer, std::uint32_t aiCommittedSize)
		{
			using func_t = decltype(&ScrapHeapManager::ReleaseBuffer);
			static REL::Relocation<func_t> func{ Offsets::ScrapHeapManager::ReleaseBuffer };
			func(this, apBuffer, aiCommittedSize);
		}

		void FreeAllBuffers()
		{
			using func_t = decltype(&ScrapHeapManager::FreeAllBuffers);
			static REL::Relocation<func_t> func{ Offsets::ScrapHeapManager::FreeAllBuffers };
			func(this);
		}

	public:
		// members
		ScrapHeapBuffer Buffers[64];       // 00
		std::uint32_t   iBufferCount;      // 200
		std::uint32_t   iBufferTotalSize;  // 204
		BSSpinLock      BufferLock;        // 208?
	};
}
