#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"

namespace RE
{
	class Tile;

	class SleepWaitMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SleepWaitMenu };
		static constexpr auto VTABLE{ VTABLE::SleepWaitMenu };

		// override (Menu)
		virtual ~SleepWaitMenu() = default;                                     // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		SleepWaitMenu* ctor()
		{
			using func_t = SleepWaitMenu*(__thiscall*)(SleepWaitMenu*);
			static REL::Relocation<func_t> func{ Offsets::SleepWaitMenu::ctor };
			return func(this);
		}

		static Tile* Create(bool abSleep)
		{
			using func_t = decltype(&SleepWaitMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::SleepWaitMenu::Create };
			return func(abSleep);
		}

		static void Close()
		{
			using func_t = decltype(&SleepWaitMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::SleepWaitMenu::Close };
			func();
		}

		bool UpdateSleeping()
		{
			using func_t = decltype(&SleepWaitMenu::UpdateSleeping);
			static REL::Relocation<func_t> func{ Offsets::SleepWaitMenu::UpdateSleeping };
			return func(this);
		}

	private:
		void SetTimeText()
		{
			using func_t = decltype(&SleepWaitMenu::SetTimeText);
			static REL::Relocation<func_t> func{ Offsets::SleepWaitMenu::SetTimeText };
			func(this);
		}

	public:
		// members
		Tile*        pTiles[6];        // 28
		float        fElapsedSecs;     // 40
		bool         bRestingActive;   // 44
		bool         bSleepingInBed;   // 45
		bool         bButtonReleased;  // 46
		std::uint8_t pad47;            // 47
		float        fPrevQuantity;    // 48
	};
	static_assert(sizeof(SleepWaitMenu) == 0x4C);
}
