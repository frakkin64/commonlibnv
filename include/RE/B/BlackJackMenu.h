#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiControllerManager;
	class NiControllerSequence;
	class NiSourceTexture;
	class TESCasino;
	class TESObjectREFR;
	class Tile;

	class BlackJackMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BlackJackMenu };
		static constexpr auto VTABLE{ VTABLE::BlackJackMenu };

		class CardData;

		enum class BlackJackState : std::int32_t
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

		enum class CardSymbol : std::int32_t
		{
			kBL_H = 0x0,
			kBL_C = 0x1,
			kBL_D = 0x2,
			kBL_S = 0x3,
			kNUM_CSYMBOLS = 0x4,
			kBL_CS_EMPTY = 0x5,
		};

		enum class CardValue : std::int32_t
		{
			kBL_2 = 0x0,
			kBL_3 = 0x1,
			kBL_4 = 0x2,
			kBL_5 = 0x3,
			kBL_6 = 0x4,
			kBL_7 = 0x5,
			kBL_8 = 0x6,
			kBL_9 = 0x7,
			kBL_10 = 0x8,
			kBL_J = 0x9,
			kBL_Q = 0xA,
			kBL_K = 0xB,
			kBL_A = 0xC,
			kNUM_CVALUES = 0xD,
			kBL_CV_EMPTY = 0xE,
		};

		enum class HandResults : std::int32_t
		{
			kBL_UNKNOWN = 0x0,
			kBL_LOSE = 0x1,
			kBL_DRAW = 0x2,
			kBL_WIN = 0x3,
			kBL_BUST = 0x4,
			kBL_BLACKJACK = 0x5,
			kBL_SURRENDER = 0x6,
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

		enum class enumFlags : std::int32_t
		{
			kBLF_DISABLESURRENDER = 0x1,
			kBLF_SURRENDER = 0x2,
			kBLF_CANSPLIT = 0x4,
			kBLF_SPLIT = 0x8,
			kBLF_SPLITHANDACTIVE = 0x10,
			kBLF_BLACKJACK = 0x20,
			kBLF_CANDOUBLEDOWN_MAIN = 0x40,
			kBLF_DOUBLEDOWN_MAIN = 0x80,
			kBLF_CANDOUBLEDOWN_SPLIT = 0x100,
			kBLF_DOUBLEDOWN_SPLIT = 0x200,
			kBLF_DISABLEHAND_MAIN = 0x400,
			kBLF_DISABLEHAND_SPLIT = 0x800,
			kBLF_DEALERS_TURN = 0x1000,
			kBLF_PLAYER_BUST = 0x2000,
			kBLF_PLAYER_SPLIT_ANIM = 0x4000,
		};

		class CardData
		{
		public:
			// members
			BlackJackMenu::CardValue   eCardValue;    // 00
			BlackJackMenu::CardSymbol  eCardSymbol;   // 04
			NiPointer<NiSourceTexture> frontTexture;  // 08
			NiPointer<NiSourceTexture> backTexture;   // 0C
		};
		static_assert(sizeof(CardData) == 0x10);

		// override (Menu)
		virtual ~BlackJackMenu() = default;                                     // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D

		BlackJackMenu* ctor()
		{
			using func_t = BlackJackMenu*(__thiscall*)(BlackJackMenu*);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::ctor };
			return func(this);
		}

		static void Close()
		{
			using func_t = decltype(&BlackJackMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::Close };
			func();
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&BlackJackMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::Draw3DElements };
			func();
		}

		static Tile* Create(TESCasino* apCasino, std::int32_t aiMinBet, std::int32_t aiMaxBet, std::int32_t aiMinWinnings, bool abDebugMode)
		{
			using func_t = decltype(&BlackJackMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::Create };
			return func(apCasino, aiMinBet, aiMaxBet, aiMinWinnings, abDebugMode);
		}

	private:
		void ZeroFlags()
		{
			using func_t = decltype(&BlackJackMenu::ZeroFlags);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::ZeroFlags };
			func(this);
		}

		bool InitCasinoData()
		{
			using func_t = decltype(&BlackJackMenu::InitCasinoData);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::InitCasinoData };
			return func(this);
		}

		void Prepare3DElements()
		{
			using func_t = decltype(&BlackJackMenu::Prepare3DElements);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::Prepare3DElements };
			func(this);
		}

		bool IsFlagSet(BlackJackMenu::enumFlags aeFlag)
		{
			using func_t = decltype(&BlackJackMenu::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::IsFlagSet };
			return func(this, aeFlag);
		}

		void SetFlag(BlackJackMenu::enumFlags aeFlag, bool abValue)
		{
			using func_t = decltype(&BlackJackMenu::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::SetFlag };
			func(this, aeFlag, abValue);
		}

		void UpdateCardAlpha()
		{
			using func_t = decltype(&BlackJackMenu::UpdateCardAlpha);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::UpdateCardAlpha };
			func(this);
		}

		void ResetCardAlpha()
		{
			using func_t = decltype(&BlackJackMenu::ResetCardAlpha);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::ResetCardAlpha };
			func(this);
		}

		void UpdateTileAlpha(BlackJackMenu::TileIndex TI)
		{
			using func_t = decltype(&BlackJackMenu::UpdateTileAlpha);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::UpdateTileAlpha };
			func(this, TI);
		}

		static void SetBetTiles(bool bBetTiles)
		{
			using func_t = decltype(&BlackJackMenu::SetBetTiles);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::SetBetTiles };
			func(bBetTiles);
		}

		std::int32_t GetHandValue(BSSimpleList<BlackJackMenu::CardData*>* pHand)
		{
			using func_t = decltype(&BlackJackMenu::GetHandValue);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::GetHandValue };
			return func(this, pHand);
		}

		std::int32_t DealCard(BSSimpleList<BlackJackMenu::CardData*>* pHand, bool bApplyLuck, bool bIsDealer)
		{
			using func_t = decltype(&BlackJackMenu::DealCard);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::DealCard };
			return func(this, pHand, bApplyLuck, bIsDealer);
		}

		void DealHand()
		{
			using func_t = decltype(&BlackJackMenu::DealHand);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::DealHand };
			func(this);
		}

		bool CanDoubleDown(bool isSplitHand)
		{
			using func_t = decltype(&BlackJackMenu::CanDoubleDown);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::CanDoubleDown };
			return func(this, isSplitHand);
		}

		void SwapCardTextures(std::int32_t aiHandIndex, std::int32_t aiCardIndex, BlackJackMenu::CardData* cd)
		{
			using func_t = decltype(&BlackJackMenu::SwapCardTextures);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::SwapCardTextures };
			func(this, aiHandIndex, aiCardIndex, cd);
		}

		void SetSideHandVisibility(bool bVisible)
		{
			using func_t = decltype(&BlackJackMenu::SetSideHandVisibility);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::SetSideHandVisibility };
			func(this, bVisible);
		}

		void HighlightSelectedDeck()
		{
			using func_t = decltype(&BlackJackMenu::HighlightSelectedDeck);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::HighlightSelectedDeck };
			func(this);
		}

		void ClearDeckHighlight()
		{
			using func_t = decltype(&BlackJackMenu::ClearDeckHighlight);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::ClearDeckHighlight };
			func(this);
		}

		void SetBetChips()
		{
			using func_t = decltype(&BlackJackMenu::SetBetChips);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::SetBetChips };
			func(this);
		}

		void UpdateEarningsString()
		{
			using func_t = decltype(&BlackJackMenu::UpdateEarningsString);
			static REL::Relocation<func_t> func{ Offsets::BlackJackMenu::UpdateEarningsString };
			func(this);
		}

	public:
		// members
		BlackJackMenu::BlackJackState           eBlackJackState;            // 28
		BlackJackMenu::HandResults              eHandResults[2];            // 2C
		Tile*                                   pTiles[10];                 // 34
		TESObjectREFR*                          pBlackjackRef;              // 5C
		float                                   fBlackJackWinRatio;         // 60
		float                                   fBlackJackShuffle;          // 64
		std::int32_t                            iLuckSkill;                 // 68
		std::int32_t                            iCurrentBet;                // 6C
		std::int32_t                            iCurrentSplitBet;           // 70
		std::int32_t                            iChipCount;                 // 74
		bool                                    bGoodLuck;                  // 78
		bool                                    bBadLuck;                   // 79
		std::uint16_t                           pad7A;                      // 7A
		std::uint32_t                           uiPrevIdleTick;             // 7C
		bool                                    bRunScriptOnExit;           // 80
		std::uint8_t                            pad81[0x3];                 // 81
		std::int32_t                            iAnimIndex[3];              // 84
		BlackJackMenu::CardData                 pDeckOfCards[208];          // 90
		BSSimpleList<BlackJackMenu::CardData*>* pDealerHand;                // D90
		BSSimpleList<BlackJackMenu::CardData*>* pPlayerHand;                // D94
		BSSimpleList<BlackJackMenu::CardData*>* pPlayerSplitHand;           // D98
		std::int32_t                            iNumOfDecks;                // D9C
		std::int32_t                            iCardsRemaining;            // DA0
		bool                                    bCleanDealerHand;           // DA4
		bool                                    bSkipDeal;                  // DA5
		std::uint16_t                           padDA6;                     // DA6
		float                                   fStartKeyTime;              // DA8
		bool                                    bHoldOnSoft17;              // DAC
		std::uint8_t                            padDAD[0x3];                // DAD
		std::uint32_t                           iFlags;                     // DB0
		NiAVObject*                             pTableGeometry;             // DB4
		NiAVObject*                             pHandGeometry;              // DB8
		NiAVObject*                             pHandSplitGeometry;         // DBC
		NiAVObject*                             pHandDealerGeometry;        // DC0
		NiAVObject*                             pBetChipGeometry[6];        // DC4
		NiAVObject*                             pBetShadowGeometry[6];      // DDC
		NiControllerManager*                    pTableAnimManager;          // DF4
		NiControllerManager*                    pPlayerAnimManager;         // DF8
		NiControllerManager*                    pPlayerSplitAnimManager;    // DFC
		NiControllerManager*                    pDealerAnimManager;         // E00
		NiControllerSequence*                   pTableAnimations[2];        // E04
		NiControllerSequence*                   pPlayerAnimations[8];       // E0C
		NiControllerSequence*                   pPlayerSplitAnimations[8];  // E2C
		NiControllerSequence*                   pDealerAnimations[9];       // E4C
	};
	static_assert(sizeof(BlackJackMenu) == 0xE70);
}
