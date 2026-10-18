#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorMover.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class PlayerMover :
		public ActorMover  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PlayerMover };
		static constexpr auto VTABLE{ VTABLE::PlayerMover };

		// override (ActorMover)
		virtual ~PlayerMover() = default;                                                   // 00
		virtual void SetMoveModePreference(std::uint32_t auiPreferredMoveMode) override;    // 01
		virtual void ClearMoveModePreference(std::uint32_t auiPreferredMoveMode) override;  // 02
		virtual void ForceMoveMode(std::uint32_t aiMoveMode) override;                      // 03
		virtual void Update(float fdeltaT) override;                                        // 05
		virtual void UpdateTurnTimer(float fdeltaT) override;                               // 06
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                // 0A
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                // 0B
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;            // 0C
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 0E

		void SetMoveMode(std::uint32_t auiMoveMode, bool abValue)
		{
			using func_t = decltype(&PlayerMover::SetMoveMode);
			static REL::Relocation<func_t> func{ Offsets::PlayerMover::SetMoveMode };
			func(this, auiMoveMode, abValue);
		}

	public:
		// members
		NiPoint3      SideVec;       // 88
		std::uint32_t MoveMode;      // 94
		std::uint32_t LastTurnDir;   // 98
		float         fMinTurnTime;  // 9C
	};
	static_assert(sizeof(PlayerMover) == 0xA0);
}
