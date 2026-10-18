#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSLoadGameSubBuffer.h"
#include "RE/N/NiTMap.h"
#include "RE/Q/QUEUED_SUB_BUFFER_TYPE.h"

namespace RE
{
	class TESForm;

	class BGSSaveLoadQueuedSubBufferMap
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(BGSSaveLoadQueuedSubBufferMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadQueuedSubBufferMap::dtor };
			func(this);
		}

		void LoadAllQueuedSubBuffers()
		{
			using func_t = decltype(&BGSSaveLoadQueuedSubBufferMap::LoadAllQueuedSubBuffers);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadQueuedSubBufferMap::LoadAllQueuedSubBuffers };
			func(this);
		}

	protected:
		void LoadQueuedSubBuffers(QUEUED_SUB_BUFFER_TYPE aeType)
		{
			using func_t = decltype(&BGSSaveLoadQueuedSubBufferMap::LoadQueuedSubBuffers);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadQueuedSubBufferMap::LoadQueuedSubBuffers };
			func(this, aeType);
		}

	public:
		// members
		NiTMap<TESForm*, BGSLoadGameSubBuffer> QueuedSubBuffers[3];  // 00
	};
	static_assert(sizeof(BGSSaveLoadQueuedSubBufferMap) == 0x30);
}
