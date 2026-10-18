#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AnimatingText.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/M/Menu.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BGSTerminal;
	class TESObjectREFR;
	class Tile;
	class Tile_Value;

	class HackingMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HackingMenu };
		static constexpr auto VTABLE{ VTABLE::HackingMenu };

		class Grid;
		class GridRow;
		class TerminalIO;
		class WordList;

		enum class Stage : std::int32_t
		{
			kHMS_INTRO = 0x0,
			kHMS_PREGAME = 0x1,
			kHMS_INGAME = 0x2,
			kHMS_SHUTDOWN = 0x3,
			kHMS_FINISHED = 0x4,
		};

		class Grid
		{
		public:
			void dtor()
			{
				using func_t = void(__thiscall*)(Grid*);
				static REL::Relocation<func_t> func{ Offsets::HackingMenu_Grid::dtor };
				func(this);
			}

			Grid* ctor(std::uint32_t aiSize)
			{
				using func_t = Grid*(__thiscall*)(Grid*, std::uint32_t);
				static REL::Relocation<func_t> func{ Offsets::HackingMenu_Grid::ctor };
				return func(this, aiSize);
			}

			HackingMenu::Grid& operator_call(HackingMenu::Grid const& aCopy)
			{
				using func_t = decltype(&Grid::operator_call);
				static REL::Relocation<func_t> func{ Offsets::HackingMenu_Grid::operator_call };
				return func(this, aCopy);
			}

		public:
			// members
			HackingMenu::GridRow* pData;  // 00
			std::uint32_t         iSize;  // 04
		};

		class GridRow
		{
		public:
			HackingMenu::GridRow& operator_call(HackingMenu::GridRow const& aCopy)
			{
				using func_t = decltype(&GridRow::operator_call);
				static REL::Relocation<func_t> func{ Offsets::HackingMenu_GridRow::operator_call };
				return func(this, aCopy);
			}

		public:
			// members
			std::uint8_t* ucData;  // 00
			std::uint32_t iSize;   // 04
		};
		static_assert(sizeof(GridRow) == 0x8);

		class TerminalIO
		{
		public:
			TerminalIO* ctor(char const* apString, Tile* apParent, char const* apTemplate, std::int32_t aiY, std::uint8_t ucType)
			{
				using func_t = TerminalIO*(__thiscall*)(TerminalIO*, char const*, Tile*, char const*, std::int32_t, std::uint8_t);
				static REL::Relocation<func_t> func{ Offsets::HackingMenu_TerminalIO::ctor };
				return func(this, apString, apParent, apTemplate, aiY, ucType);
			}

		public:
			// members
			AnimatingText Animation;    // 00
			Tile*         pTextTile;    // 2C
			Tile*         pPromptTile;  // 30?
		};

		class WordList :
			public BSSimpleList<char*>  // 00
		{
		public:
			void Add(char const* apWord)
			{
				using func_t = decltype(&WordList::Add);
				static REL::Relocation<func_t> func{ Offsets::HackingMenu_WordList::Add };
				func(this, apWord);
			}
		};

		// override (Menu)
		virtual ~HackingMenu() = default;                                              // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		static Tile* Create(TESObjectREFR* apTerminalRef)
		{
			using func_t = decltype(&HackingMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::Create };
			return func(apTerminalRef);
		}

		static void Close()
		{
			using func_t = decltype(&HackingMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::Close };
			func();
		}

		Tile* FindTile(std::uint32_t aiIndex, std::uint32_t aiCol)
		{
			using func_t = decltype(&HackingMenu::FindTile);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::FindTile };
			return func(this, aiIndex, aiCol);
		}

		void ScrollLog(std::uint32_t aiTicks, char const** pNewEntries)
		{
			using func_t = decltype(&HackingMenu::ScrollLog);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::ScrollLog };
			func(this, aiTicks, pNewEntries);
		}

		void ClearEntry()
		{
			using func_t = decltype(&HackingMenu::ClearEntry);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::ClearEntry };
			func(this);
		}

		void Prepare(std::uint32_t aiWordsWant)
		{
			using func_t = decltype(&HackingMenu::Prepare);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::Prepare };
			func(this, aiWordsWant);
		}

		void MakeHexString(std::uint16_t ausVal, char* apResult)
		{
			using func_t = decltype(&HackingMenu::MakeHexString);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::MakeHexString };
			func(this, ausVal, apResult);
		}

		std::uint32_t CommonPositions(char const* apString1, char const* apString2)
		{
			using func_t = decltype(&HackingMenu::CommonPositions);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::CommonPositions };
			return func(this, apString1, apString2);
		}

		void MakePasswordFile()
		{
			using func_t = decltype(&HackingMenu::MakePasswordFile);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::MakePasswordFile };
			func(this);
		}

		std::uint32_t GetGuaranteedPossible(HackingMenu::Grid const& aGrid)
		{
			using func_t = decltype(&HackingMenu::GetGuaranteedPossible);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::GetGuaranteedPossible };
			return func(this, aGrid);
		}

		std::int32_t GetCharHit()
		{
			using func_t = decltype(&HackingMenu::GetCharHit);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::GetCharHit };
			return func(this);
		}

		void DoIntro()
		{
			using func_t = decltype(&HackingMenu::DoIntro);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::DoIntro };
			func(this);
		}

		void DoInGame()
		{
			using func_t = decltype(&HackingMenu::DoInGame);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::DoInGame };
			func(this);
		}

		void DoShutdown()
		{
			using func_t = decltype(&HackingMenu::DoShutdown);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::DoShutdown };
			func(this);
		}

		void AccessTerminal()
		{
			using func_t = decltype(&HackingMenu::AccessTerminal);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::AccessTerminal };
			func(this);
		}

		void TransitionToComputersMenu()
		{
			using func_t = decltype(&HackingMenu::TransitionToComputersMenu);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::TransitionToComputersMenu };
			func(this);
		}

		void GetGarbageString(char* apTarget, char const* apSource)
		{
			using func_t = decltype(&HackingMenu::GetGarbageString);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::GetGarbageString };
			func(this, apTarget, apSource);
		}

		void RemoveDud()
		{
			using func_t = decltype(&HackingMenu::RemoveDud);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::RemoveDud };
			func(this);
		}

		void FlashCursor()
		{
			using func_t = decltype(&HackingMenu::FlashCursor);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::FlashCursor };
			func(this);
		}

		void UpdateCursorPos()
		{
			using func_t = decltype(&HackingMenu::UpdateCursorPos);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::UpdateCursorPos };
			func(this);
		}

		void UpdateScrollingCursor(HackingMenu::TerminalIO* apIO)
		{
			using func_t = decltype(&HackingMenu::UpdateScrollingCursor);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::UpdateScrollingCursor };
			func(this, apIO);
		}

		void MakeGuessBlock()
		{
			using func_t = decltype(&HackingMenu::MakeGuessBlock);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::MakeGuessBlock };
			func(this);
		}

	private:
		HackingMenu* ctor()
		{
			using func_t = HackingMenu*(__thiscall*)(HackingMenu*);
			static REL::Relocation<func_t> func{ Offsets::HackingMenu::ctor };
			return func(this);
		}

	public:
		// members
		HackingMenu::TerminalIO*      IOLines[46];     // 28
		AnimatingText                 xEntryText;      // E0
		Tile*                         pTiles[8];       // 10C
		BSSoundHandle                 Sounds[5];       // 12C
		NiTPointerList<Tile*>         xLogTiles;       // 168
		NiTPointerList<Tile*>         xGuessTiles;     // 174
		HackingMenu::WordList         wordList;        // 180
		NiTPointerList<std::uint32_t> xUsedBonuses;    // 188
		BGSTerminal*                  pTerminal;       // 194
		TESObjectREFR*                pTerminalRef;    // 198
		const char*                   pPassword;       // 19C
		std::uint32_t                 iNumGuesses;     // 1A0
		std::uint32_t                 iTotGuesses;     // 1A4
		std::uint32_t                 iWordsHave;      // 1A8
		std::uint32_t                 iWordLength;     // 1AC
		std::uint32_t*                iBufferPos;      // 1B0
		const std::int32_t            iYStart;         // 1B4
		const std::int32_t            iYInterval;      // 1B8
		std::int32_t                  iLastOffset;     // 1BC
		Tile*                         pLastTarget;     // 1C0
		HackingMenu::Stage            eStage;          // 1C4
		Tile*                         pOverTile;       // 1C8
		std::int32_t                  iCursorX;        // 1CC
		std::uint32_t                 dwAccessTime;    // 1D0
		Tile_Value*                   pCursorVis;      // 1D4
		bool                          bSuppressEntry;  // 1D8
		bool                          bUsedReset;      // 1D9
		bool                          bTutorial;       // 1DA
		std::uint8_t                  pad1DB;          // 1DB
	};
}
