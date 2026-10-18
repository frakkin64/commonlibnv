#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EDGE_EXTRA_INFO_TYPE.h"
#include "RE/N/NavMeshTriangleEdgePortal.h"

namespace RE
{
	class TESFile;

	class EdgeExtraInfo
	{
	public:
		EdgeExtraInfo* ctor()
		{
			using func_t = EdgeExtraInfo*(__thiscall*)(EdgeExtraInfo*);
			static REL::Relocation<func_t> func{ Offsets::EdgeExtraInfo::ctor };
			return func(this);
		}

		void SetFromBuffer(TESFile* apFile, char* apChunkBuffer)
		{
			using func_t = decltype(&EdgeExtraInfo::SetFromBuffer);
			static REL::Relocation<func_t> func{ Offsets::EdgeExtraInfo::SetFromBuffer };
			func(this, apFile, apChunkBuffer);
		}

		void SetFromBufferOld(TESFile* apFile, char* apChunkBuffer)
		{
			using func_t = decltype(&EdgeExtraInfo::SetFromBufferOld);
			static REL::Relocation<func_t> func{ Offsets::EdgeExtraInfo::SetFromBufferOld };
			func(this, apFile, apChunkBuffer);
		}

	public:
		// members
		EDGE_EXTRA_INFO_TYPE      eType;   // 00
		NavMeshTriangleEdgePortal Portal;  // 04
	};
	static_assert(sizeof(EdgeExtraInfo) == 0xC);
}
