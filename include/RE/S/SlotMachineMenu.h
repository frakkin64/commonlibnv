#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiCamera;
	class NiControllerManager;
	class NiControllerSequence;
	class NiSourceTexture;
	class TESCasino;
	class Tile;

	class SlotMachineMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SlotMachineMenu };
		static constexpr auto VTABLE{ VTABLE::SlotMachineMenu };

		enum class ReelSymbols : std::int32_t
		{
			kSL_A = 0x0,
			kSL_AB = 0x1,
			kSL_B = 0x2,
			kSL_BB = 0x3,
			kSL_C = 0x4,
			kSL_CB = 0x5,
			kSL_D = 0x6,
			kSL_DB = 0x7,
			kSL_E = 0x8,
			kSL_EB = 0x9,
			kSL_F = 0xA,
			kSL_FB = 0xB,
			kSL_WILD = 0xC,
			kSL_WILDB = 0xD,
			kNUM_SYMBOLS = 0xE,
		};

		enum class SlotResults : std::int32_t
		{
			kSL_NO_MATCH = 0x0,
			kSL_PAIR = 0x1,
			kSL_WILD_NULL_NULL = 0x2,
			kSL_WINNING_VALUES = 0x3,
			kSL_WILD_SYM_ = 0x4,
			kSL_WILD_PAIR = 0x5,
			kSL_THREE_MATCH = 0x6,
		};

		enum class SlotState : std::int32_t
		{
			kBL_INTRO_ANIM = 0x0,
			kBL_DEALING_ANIM = 0x1,
			kBL_HIT_ANIM = 0x2,
			kBL_SPLIT_ANIM = 0x3,
			kBL_PLAYER_TURN = 0x4,
			kBL_PLAYER_SPLIT = 0x5,
			kBL_PLAYER_DOUBLE = 0x6,
			kBL_CLEAN_TABLE_ANIM = 0x7,
			kBL_DEALER_FLIP_ANIM = 0x8,
			kBL_DEALER_HIT_ANIM = 0x9,
			kBL_IDLE = 0xA,
			kBL_DEALER_TURN = 0xB,
			kBL_DETERMINE_WINNER = 0xC,
			kBL_CLOSING_MENU = 0xD,
			kNUM_STATES = 0xE,
		};

		// override (Menu)
		virtual ~SlotMachineMenu() = default;                                   // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D

		SlotMachineMenu* ctor()
		{
			using func_t = SlotMachineMenu*(__thiscall*)(SlotMachineMenu*);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::ctor };
			return func(this);
		}

		static Tile* Create(TESCasino* apCasino, std::int32_t aiMinBet, std::int32_t aiMaxBet, std::int32_t aiMinWinnings, bool abDebugMode)
		{
			using func_t = decltype(&SlotMachineMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::Create };
			return func(apCasino, aiMinBet, aiMaxBet, aiMinWinnings, abDebugMode);
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&SlotMachineMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::Draw3DElements };
			func();
		}

		static void Close()
		{
			using func_t = decltype(&SlotMachineMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::Close };
			func();
		}

	private:
		bool InitializeCasinoData()
		{
			using func_t = decltype(&SlotMachineMenu::InitializeCasinoData);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::InitializeCasinoData };
			return func(this);
		}

		bool SetupActiveReels()
		{
			using func_t = decltype(&SlotMachineMenu::SetupActiveReels);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::SetupActiveReels };
			return func(this);
		}

		void Prepare3DElements()
		{
			using func_t = decltype(&SlotMachineMenu::Prepare3DElements);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::Prepare3DElements };
			func(this);
		}

		NiCamera* Create3DCamera()
		{
			using func_t = decltype(&SlotMachineMenu::Create3DCamera);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::Create3DCamera };
			return func(this);
		}

		void SwapBackfacingTextures()
		{
			using func_t = decltype(&SlotMachineMenu::SwapBackfacingTextures);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::SwapBackfacingTextures };
			func(this);
		}

		void SwapFrontfacingTextures()
		{
			using func_t = decltype(&SlotMachineMenu::SwapFrontfacingTextures);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::SwapFrontfacingTextures };
			func(this);
		}

		SlotMachineMenu::SlotResults SpinReels()
		{
			using func_t = decltype(&SlotMachineMenu::SpinReels);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::SpinReels };
			return func(this);
		}

		SlotMachineMenu::SlotResults InterpretSpin()
		{
			using func_t = decltype(&SlotMachineMenu::InterpretSpin);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::InterpretSpin };
			return func(this);
		}

		bool ApplyLuck(SlotMachineMenu::SlotResults spinResult)
		{
			using func_t = decltype(&SlotMachineMenu::ApplyLuck);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::ApplyLuck };
			return func(this, spinResult);
		}

		void UpdateEarningsString()
		{
			using func_t = decltype(&SlotMachineMenu::UpdateEarningsString);
			static REL::Relocation<func_t> func{ Offsets::SlotMachineMenu::UpdateEarningsString };
			func(this);
		}

	public:
		// members
		SlotMachineMenu::SlotState   eSlotState;              // 28
		SlotMachineMenu::ReelSymbols eActiveReelSymbols[28];  // 2C
		SlotMachineMenu::SlotResults eSpinResult;             // 9C
		Tile*                        pTiles[10];              // A0
		std::int32_t                 iLuckSkill;              // C8
		std::int32_t                 iCurrentBet;             // CC
		std::int32_t                 iNumActiveSymbols;       // D0
		std::int32_t                 iChipCount;              // D4
		bool                         bLucky;                  // D8
		std::uint8_t                 padD9[0x3];              // D9
		SlotMachineMenu::ReelSymbols eReelStartSymbols[3];    // DC
		SlotMachineMenu::ReelSymbols eReelResults[3];         // E8
		std::uint32_t                uiPrevIdleTick;          // F4
		bool                         bSwapTextures;           // F8
		bool                         bShowingTutorial;        // F9
		std::uint16_t                padFA;                   // FA
		std::int32_t                 iNextSoundIndex;         // FC
		bool                         bRunScriptOnExit;        // 100
		std::uint8_t                 pad101[0x3];             // 101
		NiAVObject*                  pSlotMachineGeometry;    // 104
		NiAVObject*                  pReelGeometry[3];        // 108
		NiPointer<NiSourceTexture>   pSlotReelTextures[8];    // 114
		NiControllerManager*         pSlotAnimManager;        // 134
		NiControllerSequence*        pSlotLeverAnim;          // 138
		NiControllerSequence*        pSlotCoinAnim;           // 13C
		NiControllerSequence*        pSlotPayoutListAnim[2];  // 140
		NiControllerSequence*        pSlotReelAnim[3];        // 148
		std::int32_t                 iCheatToggle;            // 154
	};
	static_assert(sizeof(SlotMachineMenu) == 0x158);
}
