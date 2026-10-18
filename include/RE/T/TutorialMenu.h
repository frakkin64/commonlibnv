#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"

namespace RE
{
	class BGSMessage;
	class Tile;

	class TutorialMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TutorialMenu };
		static constexpr auto VTABLE{ VTABLE::TutorialMenu };

		// override (Menu)
		virtual ~TutorialMenu() = default;                                             // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		static bool IsHelpEnabled()
		{
			using func_t = decltype(&TutorialMenu::IsHelpEnabled);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::IsHelpEnabled };
			return func();
		}

		TutorialMenu* ctor()
		{
			using func_t = TutorialMenu*(__thiscall*)(TutorialMenu*);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::ctor };
			return func(this);
		}

		static bool Create(BGSMessage* apMessage, bool abHelpManual)
		{
			using func_t = decltype(&TutorialMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::Create };
			return func(apMessage, abHelpManual);
		}

		static void Close()
		{
			using func_t = decltype(&TutorialMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::Close };
			func();
		}

		void SetPage(std::uint32_t aiPage)
		{
			using func_t = decltype(&TutorialMenu::SetPage);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::SetPage };
			func(this, aiPage);
		}

		void UpdatePrevNext()
		{
			using func_t = decltype(&TutorialMenu::UpdatePrevNext);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::UpdatePrevNext };
			func(this);
		}

		void SetTitleAndText(BGSMessage* apMessage)
		{
			using func_t = decltype(&TutorialMenu::SetTitleAndText);
			static REL::Relocation<func_t> func{ Offsets::TutorialMenu::SetTitleAndText };
			func(this, apMessage);
		}

	public:
		// members
		// not placed: pHelpManual(absent)
		Tile*         pTiles[8];     // 28
		std::uint32_t iCurrentPage;  // 48
		std::uint32_t iNumPages;     // 4C
		std::uint32_t iTimer;        // 50
	};
	static_assert(sizeof(TutorialMenu) == 0x54);
}
