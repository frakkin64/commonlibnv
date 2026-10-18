#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingLocation.h"
#include "RE/P/PathingRequest.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class PathingRequestHide :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestHide };
		static constexpr auto VTABLE{ VTABLE::PathingRequestHide };

		// override (PathingRequest)
		virtual ~PathingRequestHide() = default;                              // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07

		PathingRequestHide* ctor()
		{
			using func_t = PathingRequestHide*(__thiscall*)(PathingRequestHide*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestHide::ctor };
			return func(this);
		}

		PathingRequestHide* ctor(PathingRequestHide const& aRequest)
		{
			using func_t = PathingRequestHide*(__thiscall*)(PathingRequestHide*, PathingRequestHide const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestHide::ctor_1 };
			return func(this, aRequest);
		}

	public:
		// members
		PathingLocation ThreatLocation;    // B0
		float           fMinHideDistance;  // D8
	};
	static_assert(sizeof(PathingRequestHide) == 0xDC);
}
