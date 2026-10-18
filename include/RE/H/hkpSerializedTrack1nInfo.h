#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkpAgent1nSector;
	class hkpSerializedSubTrack1nInfo;

	class hkpSerializedTrack1nInfo
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(hkpSerializedTrack1nInfo*);
			static REL::Relocation<func_t> func{ Offsets::hkpSerializedTrack1nInfo::dtor };
			func(this);
		}

	public:
		// members
		hkArray<hkpAgent1nSector*, hkContainerHeapAllocator>            m_sectors;    // 00?
		hkArray<hkpSerializedSubTrack1nInfo*, hkContainerHeapAllocator> m_subTracks;  // 0C?
	};
}
