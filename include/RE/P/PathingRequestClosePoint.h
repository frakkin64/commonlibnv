#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingRequest.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class PathingRequestClosePoint :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestClosePoint };
		static constexpr auto VTABLE{ VTABLE::PathingRequestClosePoint };

		// override (PathingRequest)
		virtual ~PathingRequestClosePoint() = default;                        // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07

		PathingRequestClosePoint* ctor()
		{
			using func_t = PathingRequestClosePoint*(__thiscall*)(PathingRequestClosePoint*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestClosePoint::ctor };
			return func(this);
		}

		PathingRequestClosePoint* ctor(PathingRequestClosePoint const& aRequest)
		{
			using func_t = PathingRequestClosePoint*(__thiscall*)(PathingRequestClosePoint*, PathingRequestClosePoint const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestClosePoint::ctor_1 };
			return func(this, aRequest);
		}

	public:
		// members
		float fMinDistance;  // B0
		float fMaxDistance;  // B4
	};
	static_assert(sizeof(PathingRequestClosePoint) == 0xB8);
}
