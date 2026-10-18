#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/M/Menu.h"

namespace RE
{
	class Actor;
	class BSShaderPPLightingProperty;
	class NiAVObject;
	class NiControllerManager;
	class NiControllerSequence;
	class TESCaravanCard;
	class TESCaravanDeck;
	class Tile;

	class CaravanMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CaravanMenu };
		static constexpr auto VTABLE{ VTABLE::CaravanMenu };

		class TrackInfo;

		enum class ActiveMenu : std::int32_t
		{
			kCA_ANTE_MENU = 0x0,
			kCA_DECK_MENU = 0x1,
			kCA_GAME_MENU = 0x2,
			kCA_RESULTS_MENU = 0x3,
		};

		enum class CaravanState : std::int32_t
		{
			kCA_IDLE = 0x0,
			kCA_CAMERA_TO_DECK_ANIM = 0x1,
			kCA_CAMERA_TO_GAME_ANIM = 0x2,
			kCA_CAMERA_TO_RESULTS_ANIM = 0x3,
			kCA_ANTE_MONEYIN_ANIM = 0x4,
			kCA_DECK_FORWARD_ANIM = 0x5,
			kCA_DECK_BACK_ANIM = 0x6,
			kCA_DECK_FLIP_ANIM = 0x7,
			kCA_DECK_FASTFORWARD_ANIM = 0x8,
			kCA_DECK_REWIND_ANIM = 0x9,
			kCA_DECK_WIPE_ANIM = 0xA,
			kCA_GAME_INTRO_DEAL_ANIM = 0xB,
			kCA_GAME_INTRO_DISCARD_ANIM = 0xC,
			kCA_GAME_PLACECARD_ANIM = 0xD,
			kCA_GAME_DISCARDCARD_ANIM = 0xE,
			kCA_GAME_DISCARDTRACK_ANIM = 0xF,
			kCA_GAME_REMOVECARD_ANIM = 0x10,
			kCA_GAME_JACK_CLEAR_ANIM = 0x11,
			kCA_GAME_JACK_FINISH_ANIM = 0x12,
			kCA_GAME_JOKER_CLEAR_ANIM = 0x13,
			kCA_GAME_JOKER_FINISH_ANIM = 0x14,
			kCA_GAME_PROCESS_AI = 0x15,
			kCA_GAME_GAMEOVER = 0x16,
			kCA_CLOSING_MENU = 0x17,
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
			kCAF_DISABLE_ALLCONTROLS = 0x1,
			kCAF_DISABLE_Y = 0x2,
			kCAF_DISABLE_A = 0x4,
			kCAF_DISABLE_B = 0x8,
			kCAF_DISABLE_X = 0x10,
			kCAF_DISABLE_LB = 0x20,
			kCAF_DISABLE_RB = 0x40,
			kCAF_DISABLE_LT = 0x80,
			kCAF_DISABLE_RT = 0x100,
			kCAF_PLAYERFORFEIT = 0x200,
			kCAF_PLAYERWIN = 0x400,
			kCAF_TRACK_SETUP = 0x800,
			kCAF_SELECT_TRACK = 0x1000,
			kCAF_DESTROY_TRACK = 0x2000,
			kCAF_AI = 0x4000,
			kCAF_PROCESS_JOKER = 0x8000,
			kCAF_ISONTOP = 0x10000,
			kCAF_MARKFORCLOSE = 0x20000,
			kCAF_PROCESSONIDLE = 0x40000,
		};

		class TrackInfo
		{
		public:
			// members
			std::int32_t eDirection;  // 00
			std::int32_t eCardSuit;   // 04
			std::int32_t iValue;      // 08
		};

		// override (Menu)
		virtual ~CaravanMenu() = default;                                              // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoDownClick(std::int32_t aiID, Tile* apTarget) override;          // 02
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual void DoStillDown(std::int32_t aiID, Tile* apTarget) override;          // 08
		virtual void DoIdle() override;                                                // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                               // 0C
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		CaravanMenu* ctor()
		{
			using func_t = CaravanMenu*(__thiscall*)(CaravanMenu*);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::ctor };
			return func(this);
		}

		static void Close()
		{
			using func_t = decltype(&CaravanMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::Close };
			func();
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&CaravanMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::Draw3DElements };
			func();
		}

		static Tile* Create(Actor* apNPCChallenger, TESCaravanDeck* apNPCDeck, std::int32_t aiDiffLevel, float afBetPercentage, bool abDebugMode)
		{
			using func_t = decltype(&CaravanMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::Create };
			return func(apNPCChallenger, apNPCDeck, aiDiffLevel, afBetPercentage, abDebugMode);
		}

	private:
		void SetFlag(CaravanMenu::enumFlags aeFlag, bool abValue)
		{
			using func_t = decltype(&CaravanMenu::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::SetFlag };
			func(this, aeFlag, abValue);
		}

		void ZeroFlags()
		{
			using func_t = decltype(&CaravanMenu::ZeroFlags);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::ZeroFlags };
			func(this);
		}

		void PrepareShared3DElements()
		{
			using func_t = decltype(&CaravanMenu::PrepareShared3DElements);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::PrepareShared3DElements };
			func(this);
		}

		void PrepareAnteMenu()
		{
			using func_t = decltype(&CaravanMenu::PrepareAnteMenu);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::PrepareAnteMenu };
			func(this);
		}

		void PrepareBettingCurrency()
		{
			using func_t = decltype(&CaravanMenu::PrepareBettingCurrency);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::PrepareBettingCurrency };
			func(this);
		}

		void PrepareDeckMenu()
		{
			using func_t = decltype(&CaravanMenu::PrepareDeckMenu);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::PrepareDeckMenu };
			func(this);
		}

		void PrepareGameMenu()
		{
			using func_t = decltype(&CaravanMenu::PrepareGameMenu);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::PrepareGameMenu };
			func(this);
		}

		void PrepareResultsMenu()
		{
			using func_t = decltype(&CaravanMenu::PrepareResultsMenu);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::PrepareResultsMenu };
			func(this);
		}

		bool IsFlagSet(CaravanMenu::enumFlags aeFlag)
		{
			using func_t = decltype(&CaravanMenu::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::IsFlagSet };
			return func(this, aeFlag);
		}

		void UpdateCaravanFlags()
		{
			using func_t = decltype(&CaravanMenu::UpdateCaravanFlags);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateCaravanFlags };
			func(this);
		}

		void UpdateTileAlpha(CaravanMenu::TileIndex eTile)
		{
			using func_t = decltype(&CaravanMenu::UpdateTileAlpha);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateTileAlpha };
			func(this, eTile);
		}

		static void ItemSelectCallback(std::int32_t aiValue)
		{
			using func_t = decltype(&CaravanMenu::ItemSelectCallback);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::ItemSelectCallback };
			func(aiValue);
		}

		static void CancelConfirmFunc()
		{
			using func_t = decltype(&CaravanMenu::CancelConfirmFunc);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::CancelConfirmFunc };
			func();
		}

		void UpdateBettingUI(std::int32_t maxraise, std::int32_t raise)
		{
			using func_t = decltype(&CaravanMenu::UpdateBettingUI);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateBettingUI };
			func(this, maxraise, raise);
		}

		void FlipSelectedCardTextures(std::int32_t aiTarget)
		{
			using func_t = decltype(&CaravanMenu::FlipSelectedCardTextures);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::FlipSelectedCardTextures };
			func(this, aiTarget);
		}

		void SwapDeckBuildingTextures(std::int32_t aiTarget, bool abFastScrolling)
		{
			using func_t = decltype(&CaravanMenu::SwapDeckBuildingTextures);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::SwapDeckBuildingTextures };
			func(this, aiTarget, abFastScrolling);
		}

		void ExchangeCurrency(bool bPlayerWon)
		{
			using func_t = decltype(&CaravanMenu::ExchangeCurrency);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::ExchangeCurrency };
			func(this, bPlayerWon);
		}

		void UpdateDealCardTexture(bool abPlayer)
		{
			using func_t = decltype(&CaravanMenu::UpdateDealCardTexture);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateDealCardTexture };
			func(this, abPlayer);
		}

		void UpdateGameHandTextures(bool abPlayer, bool bStartup)
		{
			using func_t = decltype(&CaravanMenu::UpdateGameHandTextures);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateGameHandTextures };
			func(this, abPlayer, bStartup);
		}

		void UpdateSelectedTrackCardTexture()
		{
			using func_t = decltype(&CaravanMenu::UpdateSelectedTrackCardTexture);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateSelectedTrackCardTexture };
			func(this);
		}

		void UpdateTrackCardTexture(std::int32_t aiTrack, std::int32_t aiRow, std::int32_t aiColumn)
		{
			using func_t = decltype(&CaravanMenu::UpdateTrackCardTexture);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateTrackCardTexture };
			func(this, aiTrack, aiRow, aiColumn);
		}

		void SelectDeckCard(bool abUnselectOnly)
		{
			using func_t = decltype(&CaravanMenu::SelectDeckCard);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::SelectDeckCard };
			func(this, abUnselectOnly);
		}

		void SelectTrackCard(std::int32_t aiTrack, std::int32_t aiRow)
		{
			using func_t = decltype(&CaravanMenu::SelectTrackCard);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::SelectTrackCard };
			func(this, aiTrack, aiRow);
		}

		void SelectWholeTrack(std::int32_t aiTrack)
		{
			using func_t = decltype(&CaravanMenu::SelectWholeTrack);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::SelectWholeTrack };
			func(this, aiTrack);
		}

		void DeselectWholeTrack(std::int32_t aiTrack)
		{
			using func_t = decltype(&CaravanMenu::DeselectWholeTrack);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::DeselectWholeTrack };
			func(this, aiTrack);
		}

		void DeselectTrackCard()
		{
			using func_t = decltype(&CaravanMenu::DeselectTrackCard);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::DeselectTrackCard };
			func(this);
		}

		void UpdateTrackValue(std::int32_t aiTrack)
		{
			using func_t = decltype(&CaravanMenu::UpdateTrackValue);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::UpdateTrackValue };
			func(this, aiTrack);
		}

		void HandleTrackSelection(std::int32_t aiXShift, std::int32_t aiYShift)
		{
			using func_t = decltype(&CaravanMenu::HandleTrackSelection);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::HandleTrackSelection };
			func(this, aiXShift, aiYShift);
		}

		void LoadNewBill(std::int32_t aiBillIndex)
		{
			using func_t = decltype(&CaravanMenu::LoadNewBill);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::LoadNewBill };
			func(this, aiBillIndex);
		}

		void LoadNewCoin(std::int32_t aiCoinIndex)
		{
			using func_t = decltype(&CaravanMenu::LoadNewCoin);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::LoadNewCoin };
			func(this, aiCoinIndex);
		}

		bool IsGameOver()
		{
			using func_t = decltype(&CaravanMenu::IsGameOver);
			static REL::Relocation<func_t> func{ Offsets::CaravanMenu::IsGameOver };
			return func(this);
		}

	public:
		// members
		CaravanMenu::ActiveMenu              eActiveMenu;                   // 28
		CaravanMenu::CaravanState            eGameState;                    // 2C
		Tile*                                pTiles[51];                    // 30
		std::uint32_t                        uiPrevIdleTick;                // FC
		Actor*                               pChallenger;                   // 100
		BSSimpleList<TESCaravanCard*>*       pDeckParam;                    // 104
		std::int32_t                         iDiffLevel;                    // 108
		float                                fBetPercentage;                // 10C
		std::int32_t                         iNPCTotalFunds;                // 110
		NiAVObject*                          pBillsGrid;                    // 114
		NiAVObject*                          pCoinsGrid;                    // 118
		NiAVObject*                          pCoinGeometry[3];              // 11C
		NiAVObject*                          pBillGeometry[3];              // 128
		BSSimpleArray<NiAVObject*, 1024>     pListOfCoins;                  // 134
		BSSimpleList<NiControllerSequence*>* pListOfCoinAnimations;         // 144
		std::int32_t                         iCoinIndexToAnim;              // 148
		BSSimpleArray<NiAVObject*, 1024>     pListOfBills;                  // 14C
		BSSimpleList<NiControllerSequence*>* pListOfBillAnimations;         // 15C
		std::int32_t                         iBillIndexToAnim;              // 160
		BSSimpleArray<std::int32_t, 1024>    intlistbills;                  // 164
		BSSimpleArray<std::int32_t, 1024>    intlistcoins;                  // 174
		NiAVObject*                          pTableGeometry;                // 184
		NiAVObject*                          pInactiveDeckGeometry;         // 188
		NiAVObject*                          pActiveDeckGeometry;           // 18C
		NiAVObject*                          pHandGeometry[2];              // 190
		NiAVObject*                          pTrackGeometry[6][7];          // 198
		NiControllerManager*                 pCameraAnimManager;            // 240
		NiControllerSequence*                pCameraAnimations[4];          // 244
		NiControllerManager*                 pInactiveDeckAnimManager;      // 254
		NiControllerSequence*                pInactiveDeckAnimations[6];    // 258
		NiControllerManager*                 pActiveDeckAnimManager;        // 270
		NiControllerSequence*                pActiveDeckAnimations[6];      // 274
		NiControllerManager*                 pHandAnimManager[2];           // 28C
		NiControllerSequence*                pHandAnimations[2][6];         // 294
		NiControllerSequence*                pStartAnimations[2][8];        // 2C4
		NiControllerManager*                 pTrackAnimManager[6][7];       // 304
		NiControllerSequence*                pTrackAnimations[6][7][4][2];  // 3AC
		BSShaderPPLightingProperty*          deckFaceShaders[96];           // 8EC
		BSSimpleArray<TESCaravanCard*, 1024> pDeckArray;                    // A6C
		BSSimpleArray<std::int32_t, 1024>    jokerLocations[6];             // A7C
		std::int32_t                         iPlayerAnte;                   // ADC
		std::int32_t                         iNPCAnte;                      // AE0
		std::int32_t                         iTotalFunds;                   // AE4
		std::int32_t                         iAnte;                         // AE8
		std::uint32_t                        iCardsInDeck;                  // AEC
		std::uint32_t                        iTotalCards;                   // AF0
		std::int32_t                         iJumpAmount;                   // AF4
		std::int32_t                         iPrevValue;                    // AF8
		std::int32_t                         iNumSteps;                     // AFC
		std::int32_t                         iPrevXLocation;                // B00
		BSSimpleArray<TESCaravanCard*, 1024> pPlayerDeck;                   // B04
		BSSimpleArray<TESCaravanCard*, 1024> pNPCDeck;                      // B14
		BSSimpleArray<TESCaravanCard*, 1024> pPlayerHand;                   // B24
		BSSimpleArray<TESCaravanCard*, 1024> pNPCHand;                      // B34
		BSSimpleArray<TESCaravanCard*, 1024> pCardTracks[6][7];             // B44
		CaravanMenu::TrackInfo               trackInfo[6];                  // DE4
		std::int32_t                         iSelectedDeckCard;             // E2C
		std::int32_t                         iSelectedTrack;                // E30
		std::int32_t                         iSelectedRow;                  // E34
		std::int32_t                         iSelectedColumn;               // E38
		float                                fSelectionDelay;               // E3C
		std::int32_t                         iNextPlayerCard;               // E40
		std::int32_t                         iNextNPCCard;                  // E44
		TESCaravanCard*                      pSelectedCard;                 // E48
		NiAVObject*                          pSelectedObject;               // E4C
		NiAVObject*                          pSelectedShadow;               // E50
		NiAVObject*                          pTrackGrids[6];                // E54
		NiAVObject*                          pCursors[2];                   // E6C
		std::uint32_t                        iFlags;                        // E74
		bool                                 bTutorial;                     // E78
		std::uint8_t                         padE79[0x3];                   // E79
		std::int32_t                         iTutorial;                     // E7C
		std::uint32_t                        padE80;                        // E80
		bool                                 bClickedScrollbar;             // E84
		bool                                 bScrolling;                    // E85
		bool                                 bContinueProcessing;           // E86
		std::uint8_t                         padE87;                        // E87
	};
	static_assert(sizeof(CaravanMenu) == 0xE88);
}
