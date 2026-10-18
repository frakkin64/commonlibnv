#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/F/FR2MatrixVTC.h"
#include "RE/F/FanTypeE.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/R/RaceSexMenuContext.h"

namespace RE
{
	class NiAVObject;
	class TESNPC;
	class Tile;

	class RaceSexMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RaceSexMenu };
		static constexpr auto VTABLE{ VTABLE::RaceSexMenu };

		class MenuOption;
		class MenuOptionList;

		enum class Flag : std::int32_t
		{
			kRSM_FLAG_MAKE_NEW_HAIRLIST = 0x0,
			kRSM_FLAG_MAKE_NEW_EYESLIST = 0x1,
			kRSM_FLAG_SLIDER_UPDATE = 0x2,
			kRSM_FLAG_PC_YOUNG = 0x3,
			kRSM_FLAG_STICK_RELEASED = 0x4,
			kRSM_FLAG_ROTATING = 0x5,
			kRSM_FLAG_ZOOMING = 0x6,
			kRSM_FLAG_RANDOM_HEAD = 0x7,
			kRSM_FLAG_UPDATE_HEAD = 0x8,
			kRSM_FLAG_UPDATE_BODY = 0x9,
		};

		enum class ListID : std::int32_t
		{
			kRSM_SEX = 0x0,
			kRSM_RACE = 0x1,
			kRSM_FACE = 0x2,
			kRSM_HAIR = 0x3,
			kRSM_CUSTOM = 0x4,
			kRSM_HAIR_STYLE = 0x5,
			kRSM_HAIR_COLOR = 0x6,
			kRSM_FACIAL_HAIR = 0x7,
			kRSM_EYE_COLOR = 0x8,
			kRSM_SHAPE = 0x9,
			kRSM_SHAPE_GENERAL = 0xA,
			kRSM_SHAPE_SUBMENU_BEGIN = 0xA,
			kRSM_SHAPE_FOREHEAD = 0xB,
			kRSM_SHAPE_BROW = 0xC,
			kRSM_SHAPE_EYES = 0xD,
			kRSM_SHAPE_NOSE = 0xE,
			kRSM_SHAPE_MOUTH = 0xF,
			kRSM_SHAPE_CHEEKS = 0x10,
			kRSM_SHAPE_JAW = 0x11,
			kRSM_SHAPE_CHIN = 0x12,
			kRSM_TONE = 0x13,
			kRSM_SHAPE_SUBMENU_END = 0x13,
			kRSM_LIST_COUNT = 0x14,
		};

		enum class OptionID : std::int32_t
		{
			kRSM_MALE = 0x15,
			kRSM_FEMALE = 0x16,
			kRSM_RACE_OPTION = 0x17,
			kRSM_PRESET_FACE = 0x18,
			kRSM_RANDOMIZE_FACE = 0x19,
			kRSM_AGE_FACE = 0x1A,
			kRSM_HAIR_STYLE_OPTION = 0x1B,
			kRSM_FACIAL_HAIR_OPTION = 0x1C,
			kRSM_HAIR_COLOR_PRESET = 0x1D,
			kRSM_HAIR_COLOR_RED = 0x1E,
			kRSM_HAIR_COLOR_GREEN = 0x1F,
			kRSM_HAIR_COLOR_BLUE = 0x20,
			kRSM_EYE_COLOR_OPTION = 0x21,
			kRSM_SHAPE_SLIDER = 0x22,
			kRSM_TONE_SLIDER = 0x23,
		};

		class MenuOption
		{
		public:
			bool IsSelected()
			{
				using func_t = decltype(&MenuOption::IsSelected);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::IsSelected };
				return func(this);
			}

			std::int32_t GetValue()
			{
				using func_t = decltype(&MenuOption::GetValue);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::GetValue };
				return func(this);
			}

			bool SetValue(std::int32_t aiVal)
			{
				using func_t = decltype(&MenuOption::SetValue);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::SetValue };
				return func(this, aiVal);
			}

			void SetDisplay(char const* apDisplay)
			{
				using func_t = decltype(&MenuOption::SetDisplay);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::SetDisplay };
				func(this, apDisplay);
			}

			void GetRange(std::int32_t& aiLow, std::int32_t& aiHigh)
			{
				using func_t = decltype(&MenuOption::GetRange);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::GetRange };
				func(this, aiLow, aiHigh);
			}

			void SetRange(std::int32_t aiLow, std::int32_t aiHigh)
			{
				using func_t = decltype(&MenuOption::SetRange);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::SetRange };
				func(this, aiLow, aiHigh);
			}

			void SetEnabled(bool abEnabled)
			{
				using func_t = decltype(&MenuOption::SetEnabled);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::SetEnabled };
				func(this, abEnabled);
			}

			std::int32_t GetVisibility()
			{
				using func_t = decltype(&MenuOption::GetVisibility);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::GetVisibility };
				return func(this);
			}

			void Select()
			{
				using func_t = decltype(&MenuOption::Select);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::Select };
				func(this);
			}

			void Deselect()
			{
				using func_t = decltype(&MenuOption::Deselect);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOption::Deselect };
				func(this);
			}

		public:
			// members
			// not placed: strName(absent)
			Tile*         pTile;  // 00
			std::uint32_t iID;    // 04?
			union
			{
				void* pData;
				std::int32_t iData;
			} ___u3;  // 08?
		};

		class MenuOptionList :
			public NiTPointerList<RaceSexMenu::MenuOption*>  // 00
		{
		public:
			MenuOptionList* ctor(std::int32_t aiListID, char const* apHeaderText)
			{
				using func_t = MenuOptionList*(__thiscall*)(MenuOptionList*, std::int32_t, char const*);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::ctor };
				return func(this, aiListID, apHeaderText);
			}

			RaceSexMenu::MenuOption* AddBasicOption(char const* apDisplayText, RaceSexMenu::OptionID aeID)
			{
				using func_t = decltype(&MenuOptionList::AddBasicOption);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::AddBasicOption };
				return func(this, apDisplayText, aeID);
			}

			RaceSexMenu::MenuOption* AddSubmenuOption(char const* apDisplayText, RaceSexMenu::MenuOptionList* apLinkTo)
			{
				using func_t = decltype(&MenuOptionList::AddSubmenuOption);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::AddSubmenuOption };
				return func(this, apDisplayText, apLinkTo);
			}

			RaceSexMenu::MenuOption* AddSliderOption(char const* apDisplayText, RaceSexMenu::OptionID aeID, std::int32_t aiLowVal, std::int32_t aiHighVal, std::int32_t aiStartVal, float afJumpPct)
			{
				using func_t = decltype(&MenuOptionList::AddSliderOption);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::AddSliderOption };
				return func(this, apDisplayText, aeID, aiLowVal, aiHighVal, aiStartVal, afJumpPct);
			}

			void RemoveMenuOption(std::uint32_t aiID)
			{
				using func_t = decltype(&MenuOptionList::RemoveMenuOption);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::RemoveMenuOption };
				func(this, aiID);
			}

			bool Focus(bool abFocus)
			{
				using func_t = decltype(&MenuOptionList::Focus);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::Focus };
				return func(this, abFocus);
			}

			void LinkForwardTo(RaceSexMenu::MenuOptionList* apLinkTo)
			{
				using func_t = decltype(&MenuOptionList::LinkForwardTo);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::LinkForwardTo };
				func(this, apLinkTo);
			}

			void UpdateCurrentSelection()
			{
				using func_t = decltype(&MenuOptionList::UpdateCurrentSelection);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::UpdateCurrentSelection };
				func(this);
			}

			RaceSexMenu::MenuOption* Find(std::uint32_t aiID)
			{
				using func_t = decltype(&MenuOptionList::Find);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::Find };
				return func(this, aiID);
			}

			void SetActive()
			{
				using func_t = decltype(&MenuOptionList::SetActive);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::SetActive };
				func(this);
			}

			void ScrollBy(std::int32_t aiDelta)
			{
				using func_t = decltype(&MenuOptionList::ScrollBy);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::ScrollBy };
				func(this, aiDelta);
			}

		protected:
			RaceSexMenu::MenuOption* AddMenuOption(char const* apDisplayText, char const* apTemplate, std::uint32_t aiID, void* apIter)
			{
				using func_t = decltype(&MenuOptionList::AddMenuOption);
				static REL::Relocation<func_t> func{ Offsets::RaceSexMenu_MenuOptionList::AddMenuOption };
				return func(this, apDisplayText, apTemplate, aiID, apIter);
			}

		public:
			// members
			RaceSexMenu::ListID      eBackLink;        // 0C
			RaceSexMenu::ListID      eForwardLink;     // 10
			Tile*                    pHeader;          // 14
			float                    fScrollDelta;     // 18
			void*                    pfSelectionTest;  // 1C
			RaceSexMenu::MenuOption* pHighlighted;     // 20
		};

		// override (Menu)
		virtual ~RaceSexMenu() = default;                                       // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoDownClick(std::int32_t aiID, Tile* apTarget) override;   // 02
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoStillDown(std::int32_t aiID, Tile* apTarget) override;   // 08
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		static void Close()
		{
			using func_t = decltype(&RaceSexMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::Close };
			func();
		}

		bool IsFlagged(RaceSexMenu::Flag aeFlg)
		{
			using func_t = decltype(&RaceSexMenu::IsFlagged);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::IsFlagged };
			return func(this, aeFlg);
		}

		void SetFlag(RaceSexMenu::Flag aeFlg, bool abOn)
		{
			using func_t = decltype(&RaceSexMenu::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SetFlag };
			func(this, aeFlg, abOn);
		}

		bool SetActiveList(RaceSexMenu::ListID aeList)
		{
			using func_t = decltype(&RaceSexMenu::SetActiveList);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SetActiveList };
			return func(this, aeList);
		}

		void MakeHairStyleList()
		{
			using func_t = decltype(&RaceSexMenu::MakeHairStyleList);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::MakeHairStyleList };
			func(this);
		}

		void ValidateHairOptionList()
		{
			using func_t = decltype(&RaceSexMenu::ValidateHairOptionList);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::ValidateHairOptionList };
			func(this);
		}

		void MakePresetHeadList()
		{
			using func_t = decltype(&RaceSexMenu::MakePresetHeadList);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::MakePresetHeadList };
			func(this);
		}

		void UpdateScrollArrows()
		{
			using func_t = decltype(&RaceSexMenu::UpdateScrollArrows);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::UpdateScrollArrows };
			func(this);
		}

		void OnFaceSliderChange(RaceSexMenu::MenuOption* apChangedSlider)
		{
			using func_t = decltype(&RaceSexMenu::OnFaceSliderChange);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::OnFaceSliderChange };
			func(this, apChangedSlider);
		}

		void OnHairColorSliderChange(RaceSexMenu::MenuOption* apChangedSlider)
		{
			using func_t = decltype(&RaceSexMenu::OnHairColorSliderChange);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::OnHairColorSliderChange };
			func(this, apChangedSlider);
		}

		void SetHairColorSliders(std::uint32_t aiColor)
		{
			using func_t = decltype(&RaceSexMenu::SetHairColorSliders);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SetHairColorSliders };
			func(this, aiColor);
		}

		void AddFaceSliders()
		{
			using func_t = decltype(&RaceSexMenu::AddFaceSliders);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::AddFaceSliders };
			func(this);
		}

		bool SynchronizeFaceSliders(std::int32_t aiListBegin, std::int32_t aiListEnd, FanTypeE aeFanType)
		{
			using func_t = bool (RaceSexMenu::*)(std::int32_t, std::int32_t, FanTypeE);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SynchronizeFaceSliders };
			return func(this, aiListBegin, aiListEnd, aeFanType);
		}

		void SynchronizeFaceSliders(RaceSexMenu::OptionID aeSliderType)
		{
			using func_t = void (RaceSexMenu::*)(RaceSexMenu::OptionID);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SynchronizeFaceSliders_1 };
			func(this, aeSliderType);
		}

		bool RotatePlayer(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&RaceSexMenu::RotatePlayer);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::RotatePlayer };
			return func(this, a_arg1, a_arg2);
		}

		void NiUpdatePlayer3D()
		{
			using func_t = decltype(&RaceSexMenu::NiUpdatePlayer3D);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::NiUpdatePlayer3D };
			func(this);
		}

		bool ZoomPlayer(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&RaceSexMenu::ZoomPlayer);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::ZoomPlayer };
			return func(this, a_arg1, a_arg2);
		}

		void ValidateHairAndEyes()
		{
			using func_t = decltype(&RaceSexMenu::ValidateHairAndEyes);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::ValidateHairAndEyes };
			func(this);
		}

		void UpdatePlayerHead(bool abChangeRace, bool abShape, bool abTone)
		{
			using func_t = decltype(&RaceSexMenu::UpdatePlayerHead);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::UpdatePlayerHead };
			func(this, abChangeRace, abShape, abTone);
		}

		void UpdatePlayerBody()
		{
			using func_t = decltype(&RaceSexMenu::UpdatePlayerBody);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::UpdatePlayerBody };
			func(this);
		}

		bool UpdatePlayerEyes()
		{
			using func_t = decltype(&RaceSexMenu::UpdatePlayerEyes);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::UpdatePlayerEyes };
			return func(this);
		}

		bool UpdatePlayerHair(bool abSwapHairType)
		{
			using func_t = decltype(&RaceSexMenu::UpdatePlayerHair);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::UpdatePlayerHair };
			return func(this, abSwapHairType);
		}

		void ChangeHairColor()
		{
			using func_t = decltype(&RaceSexMenu::ChangeHairColor);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::ChangeHairColor };
			func(this);
		}

		void SliderUpdate()
		{
			using func_t = decltype(&RaceSexMenu::SliderUpdate);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SliderUpdate };
			func(this);
		}

		void SliderRelease()
		{
			using func_t = decltype(&RaceSexMenu::SliderRelease);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::SliderRelease };
			func(this);
		}

		void ChooseDefaultPreset()
		{
			using func_t = decltype(&RaceSexMenu::ChooseDefaultPreset);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::ChooseDefaultPreset };
			func(this);
		}

		static void Randomize()
		{
			using func_t = decltype(&RaceSexMenu::Randomize);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::Randomize };
			func();
		}

	protected:
		RaceSexMenu* ctor()
		{
			using func_t = RaceSexMenu*(__thiscall*)(RaceSexMenu*);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::ctor };
			return func(this);
		}

		void _Create(RaceSexMenuContext aeContext)
		{
			using func_t = decltype(&RaceSexMenu::_Create);
			static REL::Relocation<func_t> func{ Offsets::RaceSexMenu::_Create };
			func(this, aeContext);
		}

	public:
		// members
		RaceSexMenu::MenuOptionList* pOptionListsA[20];    // 28
		Tile*                        pTiles[6];            // 78
		BSStringT<char>              strProjectorFile;     // 90
		BSStringT<char>              strConfirmationMsg;   // 98
		NiPoint3                     ptZoomBound[2];       // A0
		float                        fDragStartX;          // B8
		std::int32_t                 iDragStartSliderVal;  // BC
		Tile*                        pSliderElem;          // C0
		RaceSexMenu::MenuOption*     pSliderOpt;           // C4
		float                        fZoomVelocity;        // C8
		std::uint32_t                padCC;                // CC
		float                        fZoomPct;             // D0
		NiPointer<NiAVObject>        spPlayerNode;         // D4
		TESNPC*                      pPlayerBase;          // D8
		BSSimpleArray<TESNPC*, 1024> xPresetHeadsA;        // DC
		std::uint32_t                uiFlags;              // EC
		BSSoundHandle                Sounds[4];            // F0
		RaceSexMenu::ListID          eLastList;            // 120
		FR2MatrixVTC<float>          LastFaceCoord[2][2];  // 124
	};
}
