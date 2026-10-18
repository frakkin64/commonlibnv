#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"

namespace RE
{
	class Tile;

	class QuantityMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QuantityMenu };
		static constexpr auto VTABLE{ VTABLE::QuantityMenu };

		// override (Menu)
		virtual ~QuantityMenu() = default;                                             // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		static Tile* Create(std::int32_t aiMaxAmount, void* afpCallback, std::int32_t aiStartAmount)
		{
			using func_t = decltype(&QuantityMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::QuantityMenu::Create };
			return func(aiMaxAmount, afpCallback, aiStartAmount);
		}

		static void Close()
		{
			using func_t = decltype(&QuantityMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::QuantityMenu::Close };
			func();
		}

	public:
		// members
		Tile* pTiles[6];      // 28
		float fPrevQuantity;  // 40
	};
	static_assert(sizeof(QuantityMenu) == 0x44);
}
