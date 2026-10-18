#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PathingRequest.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PathingLOSGridMap;

	class PathingRequestLOS :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestLOS };
		static constexpr auto VTABLE{ VTABLE::PathingRequestLOS };

		// override (PathingRequest)
		virtual ~PathingRequestLOS() = default;                               // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07

		PathingRequestLOS* ctor()
		{
			using func_t = PathingRequestLOS*(__thiscall*)(PathingRequestLOS*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestLOS::ctor };
			return func(this);
		}

		PathingRequestLOS* ctor(PathingRequestLOS const& aRequest)
		{
			using func_t = PathingRequestLOS*(__thiscall*)(PathingRequestLOS*, PathingRequestLOS const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestLOS::ctor_1 };
			return func(this, aRequest);
		}

	public:
		// members
		NiPointer<PathingLOSGridMap>  spLOSGridMap;           // B0
		BSSimpleArray<NiPoint3, 1024> IgnoreLocations;        // B4
		float                         fIgnoreLocationRadius;  // C4
		NiPoint3                      SearchCenter;           // C8
		float                         fSearchCenterRadius;    // D4
	};
	static_assert(sizeof(PathingRequestLOS) == 0xD8);
}
