#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class AnimatingText;
	class BGSNote;
	class BGSTerminal;
	class TERMINAL_MENU_ITEM;
	class TESObjectREFR;
	class Tile;
	class Tile_Value;

	class ComputersMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ComputersMenu };
		static constexpr auto VTABLE{ VTABLE::ComputersMenu };

		class AnimatingTextManager;

		enum class Mode : std::int32_t
		{
			kCMM_INTRO = 0x0,
			kCMM_WAIT = 0x1,
			kCMM_NORMAL = 0x2,
		};

		class AnimatingTextManager
		{
		public:
			void Update()
			{
				using func_t = decltype(&AnimatingTextManager::Update);
				static REL::Relocation<func_t> func{ Offsets::ComputersMenu_AnimatingTextManager::Update };
				func(this);
			}

			void AddItem(char const* apString, Tile_Value* apStringTrait, Tile_Value* apVisTrait, std::int32_t aiWhere)
			{
				using func_t = decltype(&AnimatingTextManager::AddItem);
				static REL::Relocation<func_t> func{ Offsets::ComputersMenu_AnimatingTextManager::AddItem };
				func(this, apString, apStringTrait, apVisTrait, aiWhere);
			}

			void ForceFinish()
			{
				using func_t = decltype(&AnimatingTextManager::ForceFinish);
				static REL::Relocation<func_t> func{ Offsets::ComputersMenu_AnimatingTextManager::ForceFinish };
				func(this);
			}

		public:
			// members
			NiTPointerList<AnimatingText*> xAnimatingText;  // 00?
		};

		// override (Menu)
		virtual ~ComputersMenu() = default;                                            // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		static Tile* Create(TESObjectREFR* apTerminalRef)
		{
			using func_t = decltype(&ComputersMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::Create };
			return func(apTerminalRef);
		}

		static void Close()
		{
			using func_t = decltype(&ComputersMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::Close };
			func();
		}

		void FlashCursor()
		{
			using func_t = decltype(&ComputersMenu::FlashCursor);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::FlashCursor };
			func(this);
		}

		void DisplayTerminal(bool abAddToStack)
		{
			using func_t = decltype(&ComputersMenu::DisplayTerminal);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::DisplayTerminal };
			func(this, abAddToStack);
		}

		void DisplayPreviousTerminal()
		{
			using func_t = decltype(&ComputersMenu::DisplayPreviousTerminal);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::DisplayPreviousTerminal };
			func(this);
		}

		void DisplayIntro()
		{
			using func_t = decltype(&ComputersMenu::DisplayIntro);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::DisplayIntro };
			func(this);
		}

		void FinishIntro()
		{
			using func_t = decltype(&ComputersMenu::FinishIntro);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::FinishIntro };
			func(this);
		}

		static void Redisplay(Tile* apTile, TERMINAL_MENU_ITEM* apMenuItem)
		{
			using func_t = decltype(&ComputersMenu::Redisplay);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::Redisplay };
			func(apTile, apMenuItem);
		}

		static void PostDisplay(Tile* apTile, TERMINAL_MENU_ITEM* apMenuItem)
		{
			using func_t = decltype(&ComputersMenu::PostDisplay);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::PostDisplay };
			func(apTile, apMenuItem);
		}

	protected:
		void PlayNoteSound(BGSNote* apNote)
		{
			using func_t = decltype(&ComputersMenu::PlayNoteSound);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::PlayNoteSound };
			func(this, apNote);
		}

		void DisplayNoteText(BGSNote* apNote)
		{
			using func_t = decltype(&ComputersMenu::DisplayNoteText);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::DisplayNoteText };
			func(this, apNote);
		}

		void DisplayNoteImage(BGSNote* apNote)
		{
			using func_t = decltype(&ComputersMenu::DisplayNoteImage);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::DisplayNoteImage };
			func(this, apNote);
		}

	private:
		ComputersMenu* ctor()
		{
			using func_t = ComputersMenu*(__thiscall*)(ComputersMenu*);
			static REL::Relocation<func_t> func{ Offsets::ComputersMenu::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: Sounds
		Tile*                                pTiles[16];              // 28
		ListBox<TERMINAL_MENU_ITEM*>         lbMenuItems;             // 68
		BSSimpleList<BGSTerminal*>           TerminalStack;           // 98
		std::uint32_t                        uiResultDisplayTimeout;  // A0
		Tile_Value*                          pCursorVis;              // A4
		BGSTerminal*                         pTerminal;               // A8
		TESObjectREFR*                       pTerminalRef;            // AC
		ComputersMenu::Mode                  eMode;                   // B0
		BSStringT<char>                      strNoteText;             // B4
		const char*                          pNoteText;               // BC
		bool                                 bTutorial;               // C0
		bool                                 bDisplayFlag;            // C1
		std::uint8_t                         padC2[0xA];              // C2
		ComputersMenu::AnimatingTextManager* pATManager;              // CC
		void*                                NoteActivationFn[4];     // D0
	};
}
