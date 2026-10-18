#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;

	class PathingCoverLocation :
		public PathingLocation  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingCoverLocation };
		static constexpr auto VTABLE{ VTABLE::PathingCoverLocation };

		// override (PathingLocation)
		virtual void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer) override;  // 00
		virtual void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer) override;  // 01

		void dtor()
		{
			using func_t = void(__thiscall*)(PathingCoverLocation*);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::dtor };
			func(this);
		}

		PathingCoverLocation& operator_call(PathingCoverLocation const& aLoc)
		{
			using func_t = decltype(&PathingCoverLocation::operator_call);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::operator_call };
			return func(this, aLoc);
		}

		std::uint32_t GetKey()
		{
			using func_t = decltype(&PathingCoverLocation::GetKey);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::GetKey };
			return func(this);
		}

		bool CheckDynamicCoverValid(std::uint32_t aiLastMovedTime)
		{
			using func_t = decltype(&PathingCoverLocation::CheckDynamicCoverValid);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::CheckDynamicCoverValid };
			return func(this, aiLastMovedTime);
		}

		std::uint32_t GetDynamicCoverObstacleTimeStamp()
		{
			using func_t = decltype(&PathingCoverLocation::GetDynamicCoverObstacleTimeStamp);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::GetDynamicCoverObstacleTimeStamp };
			return func(this);
		}

		bool IsLedgeCover() const
		{
			using func_t = decltype(&PathingCoverLocation::IsLedgeCover);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::IsLedgeCover };
			return func(this);
		}

		bool IsLeftSideClosest(NiPoint3 const& arPoint)
		{
			using func_t = decltype(&PathingCoverLocation::IsLeftSideClosest);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::IsLeftSideClosest };
			return func(this, arPoint);
		}

		bool IsStandCover() const
		{
			using func_t = decltype(&PathingCoverLocation::IsStandCover);
			static REL::Relocation<func_t> func{ Offsets::PathingCoverLocation::IsStandCover };
			return func(this);
		}

	public:
		// members
		NiPoint3     LeftVertex;         // 28
		NiPoint3     RightVertex;        // 34
		NiPoint3     EdgeDirection;      // 40
		std::uint8_t cCoverHeight;       // 4C
		bool         bStandCover;        // 4D
		bool         bHigherThanCrouch;  // 4E
		bool         bLeftEdgeOpen;      // 4F
		bool         bRightEdgeOpen;     // 50
		std::uint8_t cEdge;              // 51
		std::uint8_t cState;             // 52
		std::uint8_t pad53;              // 53
	};
	static_assert(sizeof(PathingCoverLocation) == 0x54);
}
