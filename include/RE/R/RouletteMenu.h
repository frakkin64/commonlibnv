#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiControllerManager;
	class NiControllerSequence;
	class NiSourceTexture;
	class TESCasino;
	class Tile;

	class RouletteMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RouletteMenu };
		static constexpr auto VTABLE{ VTABLE::RouletteMenu };

		class BetTileInfo;
		class RouletteBet;

		enum class BetTileColor : std::int32_t
		{
			kRO_COLOR_NONE = 0x0,
			kRO_COLOR_BLACK = 0x1,
			kRO_COLOR_RED = 0x2,
		};

		enum class BetType : std::int32_t
		{
			kRO_ONE = 0x23,
			kRO_TWO = 0x11,
			kRO_THREE = 0xB,
			kRO_FOUR = 0x8,
			kRO_FIVE = 0x6,
			kRO_SIX = 0x5,
			kRO_TWELVE = 0x2,
			kRO_EIGHTEEN = 0x1,
			kRO_REDBLACK = 0x1,
			kRO_EVENODD = 0x1,
		};

		enum class RouletteState : std::int32_t
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

		enum class TileIndex : std::int32_t
		{
			kEStatusButton = 0x0,
			kESpecialButton = 0x1,
			kESkillsButton = 0x2,
			kEPerksButton = 0x3,
			kEGeneralButton = 0x4,
			kEStatusRect = 0x5,
			kESpecialRect = 0x6,
			kESkillsRect = 0x7,
			kEGeneralRect = 0x8,
			kEHealingMode = 0x9,
			kEStimpakButton = 0xA,
			kERadAwayButton = 0xB,
			kEHeadImage = 0xC,
			kEHeadPct = 0xD,
			kETorsoImage = 0xE,
			kETorsoPct = 0xF,
			kELeftArmImage = 0x10,
			kELeftArmPct = 0x11,
			kERightArmImage = 0x12,
			kERightArmPct = 0x13,
			kELeftLegImage = 0x14,
			kELeftLegPct = 0x15,
			kERightLegImage = 0x16,
			kERightLegPct = 0x17,
			kEFaceImage = 0x18,
			kEItemIcon = 0x19,
			kEItemDesc = 0x1A,
			kEPlayerName = 0x1B,
			kEConditionButton = 0x1C,
			kERadsButton = 0x1D,
			kEEffectsButton = 0x1E,
			kERadXButton = 0x1F,
			kERadEffects = 0x20,
			kEStatusEffects = 0x21,
			kEPerksRect = 0x22,
			kEKarmaAlignment = 0x23,
			kEKarmaImage = 0x24,
			kEPlayerTitle = 0x25,
			kERadResistLevel = 0x26,
			kETitle = 0x27,
			kELevelInfo = 0x28,
			kEHPInfo = 0x29,
			kEAPInfo = 0x2A,
			kEXPInfo = 0x2B,
			kERadResistLabel = 0x2C,
			kENoEffects = 0x2D,
			kEReputationRect = 0x2E,
			kEReputationIcon = 0x2F,
			kEReputationTitle = 0x30,
			kEGenRepToggleButton = 0x31,
			kEGenRepRect = 0x32,
			kEReputationName = 0x33,
			kESkillBadgeImage = 0x34,
			kEH20Button = 0x35,
			kEH20Effects = 0x36,
			kEFODButton = 0x37,
			kEFODEffects = 0x38,
			kESLPButton = 0x39,
			kESLPEffects = 0x3A,
			kEDrBagButton = 0x3B,
			kNUM_TILES = 0x3C,
		};

		class BetTileInfo
		{
		public:
			// members
			BSSimpleList<std::int32_t> numValueList;    // 00
			RouletteMenu::BetTileColor tileColor;       // 08
			RouletteMenu::BetType      betPayoutRatio;  // 0C
			NiPoint3                   location;        // 10
			char                       faceName[8];     // 1C
			char                       cBetTiles[64];   // 24
		};
		static_assert(sizeof(BetTileInfo) == 0x64);

		class RouletteBet
		{
		public:
			// members
			std::int32_t betValue;    // 00?
			std::int32_t betIndex;    // 04?
			std::int32_t modelIndex;  // 08?
		};

		// override (Menu)
		virtual ~RouletteMenu() = default;                                      // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D

		RouletteMenu* ctor()
		{
			using func_t = RouletteMenu*(__thiscall*)(RouletteMenu*);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::ctor };
			return func(this);
		}

		static void Close()
		{
			using func_t = decltype(&RouletteMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::Close };
			func();
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&RouletteMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::Draw3DElements };
			func();
		}

		static Tile* Create(TESCasino* apCasino, std::int32_t aiMinBet, std::int32_t aiMaxBet, std::int32_t aiMinWinnings, bool abDebugMode)
		{
			using func_t = decltype(&RouletteMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::Create };
			return func(apCasino, aiMinBet, aiMaxBet, aiMinWinnings, abDebugMode);
		}

	private:
		void Prepare3DElements()
		{
			using func_t = decltype(&RouletteMenu::Prepare3DElements);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::Prepare3DElements };
			func(this);
		}

		void PrepareBetTiles()
		{
			using func_t = decltype(&RouletteMenu::PrepareBetTiles);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::PrepareBetTiles };
			func(this);
		}

		bool SetBet(std::int32_t aiIndex)
		{
			using func_t = decltype(&RouletteMenu::SetBet);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::SetBet };
			return func(this, aiIndex);
		}

		bool RemoveBet(std::int32_t aiIndex)
		{
			using func_t = decltype(&RouletteMenu::RemoveBet);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::RemoveBet };
			return func(this, aiIndex);
		}

		std::int32_t GetBetIndex()
		{
			using func_t = decltype(&RouletteMenu::GetBetIndex);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::GetBetIndex };
			return func(this);
		}

		void HideBetChip(std::int32_t aiIndex)
		{
			using func_t = decltype(&RouletteMenu::HideBetChip);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::HideBetChip };
			func(this, aiIndex);
		}

		void ShiftWheelTexture(std::int32_t aiResult)
		{
			using func_t = decltype(&RouletteMenu::ShiftWheelTexture);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::ShiftWheelTexture };
			func(this, aiResult);
		}

		void SpinWheel()
		{
			using func_t = decltype(&RouletteMenu::SpinWheel);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::SpinWheel };
			func(this);
		}

		void SetTileTextAlpha(RouletteMenu::TileIndex TI, float alpha)
		{
			using func_t = decltype(&RouletteMenu::SetTileTextAlpha);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::SetTileTextAlpha };
			func(this, TI, alpha);
		}

		void ResetBetChips()
		{
			using func_t = decltype(&RouletteMenu::ResetBetChips);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::ResetBetChips };
			func(this);
		}

		void SetBetChip()
		{
			using func_t = decltype(&RouletteMenu::SetBetChip);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::SetBetChip };
			func(this);
		}

		void UpdateEarningsString()
		{
			using func_t = decltype(&RouletteMenu::UpdateEarningsString);
			static REL::Relocation<func_t> func{ Offsets::RouletteMenu::UpdateEarningsString };
			func(this);
		}

	public:
		// members
		RouletteMenu::RouletteState               eRouletteState;          // 28
		Tile*                                     pTiles[11];              // 2C
		std::uint32_t                             uiPrevIdleTick;          // 58
		RouletteMenu::BetTileInfo                 betTileInfoArray[159];   // 5C
		BSSimpleList<RouletteMenu::RouletteBet*>* pBetList;                // 3E78
		std::int32_t                              iNumberStrip[38];        // 3E7C
		NiAVObject*                               pRouletteTableGeometry;  // 3F14
		NiAVObject*                               pRouletteGridGeometry;   // 3F18
		NiAVObject*                               pCursorGeometry;         // 3F1C
		NiAVObject*                               pBetGeometry[10];        // 3F20
		NiAVObject*                               pBetShadowGeometry[10];  // 3F48
		NiAVObject*                               pCurrentBetFace;         // 3F70
		NiAVObject*                               pValidBetFace;           // 3F74
		NiAVObject*                               pInvalidBetFace;         // 3F78
		NiPointer<NiSourceTexture>                pWheelTexture;           // 3F7C
		NiControllerManager*                      pTableAnimManager;       // 3F80
		NiControllerSequence*                     pTableAnimations[3];     // 3F84
		float                                     fRadius;                 // 3F90
		float                                     fValidRadius;            // 3F94
		float                                     fSpecialRadius[15];      // 3F98
		float                                     fxTranslate;             // 3FD4
		float                                     fyTranslate;             // 3FD8
		float                                     fzTranslate;             // 3FDC
		std::int32_t                              iNextModelIndex;         // 3FE0
		std::int32_t                              iNumBetsSet;             // 3FE4
		std::int32_t                              iCurrentBet;             // 3FE8
		std::int32_t                              iTotalBet;               // 3FEC
		std::int32_t                              iChipCount;              // 3FF0
		std::int32_t                              iLuckValue;              // 3FF4
		std::int32_t                              iTotalWinnings;          // 3FF8
		std::int32_t                              iMinBet;                 // 3FFC
		std::int32_t                              iMaxBet;                 // 4000
		std::int32_t                              iResultValue;            // 4004
		std::int32_t                              iSpinAnimIndex;          // 4008
		bool                                      bCleanTable;             // 400C
		bool                                      bLucky;                  // 400D
		bool                                      bUnlucky;                // 400E
		bool                                      bRunScriptOnExit;        // 400F
		std::int32_t                              iCheatToggle;            // 4010
	};
	static_assert(sizeof(RouletteMenu) == 0x4014);
}
