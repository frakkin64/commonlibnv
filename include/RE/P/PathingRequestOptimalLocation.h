#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingRequest.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class PathingRequestOptimalLocation :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestOptimalLocation };
		static constexpr auto VTABLE{ VTABLE::PathingRequestOptimalLocation };

		// override (PathingRequest)
		virtual ~PathingRequestOptimalLocation() = default;                   // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07

		PathingRequestOptimalLocation* ctor()
		{
			using func_t = PathingRequestOptimalLocation*(__thiscall*)(PathingRequestOptimalLocation*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestOptimalLocation::ctor };
			return func(this);
		}

	public:
		// members
		float fMinDistance;          // B0
		float fMaxDistance;          // B4
		float fAbsoluteMinDistance;  // B8
		float fAbsoluteMaxDistance;  // BC
	};
	static_assert(sizeof(PathingRequestOptimalLocation) == 0xC0);
}
