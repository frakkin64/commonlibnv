#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingRequestClosePoint.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectREFR;

	class PathingRequestSafeStraightLine :
		public PathingRequestClosePoint  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestSafeStraightLine };
		static constexpr auto VTABLE{ VTABLE::PathingRequestSafeStraightLine };

		// override (PathingRequestClosePoint)
		virtual ~PathingRequestSafeStraightLine() = default;                      // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 07
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 08

		PathingRequestSafeStraightLine* ctor(PathingRequestSafeStraightLine const& aRequest)
		{
			using func_t = PathingRequestSafeStraightLine*(__thiscall*)(PathingRequestSafeStraightLine*, PathingRequestSafeStraightLine const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestSafeStraightLine::ctor };
			return func(this, aRequest);
		}

	public:
		// members
		TESObjectREFR* pTarget;  // B8
	};
	static_assert(sizeof(PathingRequestSafeStraightLine) == 0xBC);
}
