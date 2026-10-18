#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"

namespace RE
{
	class Tile;

	class CharGenMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CharGenMenu };
		static constexpr auto VTABLE{ VTABLE::CharGenMenu };

		enum class ITEM_TYPE : std::int32_t
		{
			kIT_ATTRIBUTE = 0x0,
			kIT_TAG_SKILL = 0x1,
			kNUM_TYPES = 0x2,
		};

		// override (Menu)
		virtual ~CharGenMenu() = default;                                              // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		CharGenMenu* ctor()
		{
			using func_t = CharGenMenu*(__thiscall*)(CharGenMenu*);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::ctor };
			return func(this);
		}

		static Tile* Create(std::int32_t aiItemType, std::int32_t aiMaxPoints, bool abOnlyAddValues, bool abShowTaggedSkills)
		{
			using func_t = decltype(&CharGenMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::Create };
			return func(aiItemType, aiMaxPoints, abOnlyAddValues, abShowTaggedSkills);
		}

		static void Close()
		{
			using func_t = decltype(&CharGenMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::Close };
			func();
		}

	private:
		void InitAttributeList()
		{
			using func_t = decltype(&CharGenMenu::InitAttributeList);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::InitAttributeList };
			func(this);
		}

		void InitSkillList()
		{
			using func_t = decltype(&CharGenMenu::InitSkillList);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::InitSkillList };
			func(this);
		}

		void UpdatePointCounter()
		{
			using func_t = decltype(&CharGenMenu::UpdatePointCounter);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::UpdatePointCounter };
			func(this);
		}

		static void ResetAttributesFunc(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&CharGenMenu::ResetAttributesFunc);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::ResetAttributesFunc };
			func(apTile, aeIndex);
		}

		static void ResetSkillsFunc(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&CharGenMenu::ResetSkillsFunc);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::ResetSkillsFunc };
			func(apTile, aeIndex);
		}

		static void SetAttributesFunc(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&CharGenMenu::SetAttributesFunc);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::SetAttributesFunc };
			func(apTile, aeIndex);
		}

		static void TagSkillsFunc(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&CharGenMenu::TagSkillsFunc);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::TagSkillsFunc };
			func(apTile, aeIndex);
		}

		void SetDisplayString(Tile* apTile)
		{
			using func_t = decltype(&CharGenMenu::SetDisplayString);
			static REL::Relocation<func_t> func{ Offsets::CharGenMenu::SetDisplayString };
			func(this, apTile);
		}

	public:
		// members
		CharGenMenu::ITEM_TYPE    eItemType;            // 28
		Tile*                     pTiles[7];            // 2C
		std::int32_t              iCurrPoints;          // 48
		std::int32_t              iMaxPoints;           // 4C
		float                     fPrevHighlightIndex;  // 50
		bool                      bOnlyAddValues;       // 54
		bool                      bShowTaggedSkills;    // 55
		std::uint16_t             pad56;                // 56
		ListBox<ActorValue_Index> lbItemList;           // 58
	};
	static_assert(sizeof(CharGenMenu) == 0x88);
}
