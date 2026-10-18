#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSShaderPPLightingProperty;
	class NiAVObject;
	class NiCamera;
	class NiSourceTexture;
	class Tile;

	class SPECIALBookMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SPECIALBookMenu };
		static constexpr auto VTABLE{ VTABLE::SPECIALBookMenu };

		class ActorValueButton;
		class SpecialBookButton;
		class SpecialBookPage;
		class SpecialBookTextItem;

		enum class SPECIAL_BOOK_MENU_STATE : std::int32_t
		{
			kSBMS_START = 0x0,
			kSBMS_STRENGTH = 0x1,
			kSBMS_PERCEPTION = 0x2,
			kSBMS_ENDURANCE = 0x3,
			kSBMS_CHARISMA = 0x4,
			kSBMS_INTELLIGENCE = 0x5,
			kSBMS_AGILITY = 0x6,
			kSBMS_LUCK = 0x7,
			kSBMS_SPECIAL = 0x8,
			kSBMS_CLOSED = 0x9,
		};

		class SpecialBookButton
		{
		public:
			SpecialBookButton* ctor(void* apButtonClick, void* apRefresh, char const* apButtonName)
			{
				using func_t = SpecialBookButton*(__thiscall*)(SpecialBookButton*, void*, void*, char const*);
				static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu_SpecialBookButton::ctor };
				return func(this, apButtonClick, apRefresh, apButtonName);
			}

		public:
			// members
			void*                       pfButtonClick;  // 00
			void*                       pfRefresh;      // 04
			NiPointer<NiAVObject>       spButton;       // 08
			BSShaderPPLightingProperty* pImage;         // 0C
			union
			{
				bool bPageForward;
				std::int16_t sModifyAmount;
			} ___u4;  // 10
			std::uint16_t               pad12;          // 12
		};

		class SpecialBookPage
		{
		public:
			// members
			BSSimpleArray<SPECIALBookMenu::SpecialBookButton*, 1024>   Buttons;    // 00
			BSSimpleArray<SPECIALBookMenu::SpecialBookTextItem*, 1024> TextItems;  // 10
		};
		static_assert(sizeof(SpecialBookPage) == 0x20);

		class SpecialBookTextItem
		{
		public:
			SpecialBookTextItem* ctor(void* apRefreshFieldCallback, char const* apTextObjectName1, char const* apTextObjectName2, ActorValue_Index aeActorValue)
			{
				using func_t = SpecialBookTextItem*(__thiscall*)(SpecialBookTextItem*, void*, char const*, char const*, ActorValue_Index);
				static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu_SpecialBookTextItem::ctor };
				return func(this, apRefreshFieldCallback, apTextObjectName1, apTextObjectName2, aeActorValue);
			}

		public:
			// members
			void*                       pfRefreshField;  // 00
			BSShaderPPLightingProperty* pText[2];        // 04?
			NiAVObject*                 pTextObj[2];     // 0C?
			ActorValue_Index            eActorValue;     // 14?
		};

		class ActorValueButton :
			public SPECIALBookMenu::SpecialBookButton  // 00
		{
		public:
			ActorValueButton* ctor(void* apButtonClick, void* apRefresh, char const* apButtonName, ActorValue_Index aeActorValue, std::int32_t aiNumAffectedFields, ...)
			{
				using func_t = ActorValueButton*(__cdecl*)(ActorValueButton*, void*, void*, char const*, ActorValue_Index, std::int32_t, ...);
				static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu_ActorValueButton::ctor };
				return func(this, apButtonClick, apRefresh, apButtonName, aeActorValue, aiNumAffectedFields);
			}

		public:
			// members
			BSSimpleArray<SPECIALBookMenu::SpecialBookTextItem*, 1024> AffectedFields;  // 14?
			ActorValue_Index                                           eActorValue;     // 24?
		};

		// override (Menu)
		virtual ~SPECIALBookMenu() = default;                                   // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoIdle() override;                                         // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                        // 0C
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		SPECIALBookMenu* ctor()
		{
			using func_t = SPECIALBookMenu*(__thiscall*)(SPECIALBookMenu*);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::ctor };
			return func(this);
		}

		static void Create(std::int32_t aiTotalPoints)
		{
			using func_t = decltype(&SPECIALBookMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::Create };
			func(aiTotalPoints);
		}

		static void Close()
		{
			using func_t = decltype(&SPECIALBookMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::Close };
			func();
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&SPECIALBookMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::Draw3DElements };
			func();
		}

		static void RefreshTotalPointsValue(SPECIALBookMenu::SpecialBookTextItem* apTextItem)
		{
			using func_t = decltype(&SPECIALBookMenu::RefreshTotalPointsValue);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::RefreshTotalPointsValue };
			func(apTextItem);
		}

		static void RefreshLeftAVButton(SPECIALBookMenu::SpecialBookButton* apButton)
		{
			using func_t = decltype(&SPECIALBookMenu::RefreshLeftAVButton);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::RefreshLeftAVButton };
			func(apButton);
		}

		static void RefreshRightAVButton(SPECIALBookMenu::SpecialBookButton* apButton)
		{
			using func_t = decltype(&SPECIALBookMenu::RefreshRightAVButton);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::RefreshRightAVButton };
			func(apButton);
		}

		static void DecreaseActorValue(SPECIALBookMenu::SpecialBookButton* apAVButton, ...)
		{
			using func_t = void(__cdecl*)(SPECIALBookMenu::SpecialBookButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::DecreaseActorValue };
			func(apAVButton);
		}

		static void IncreaseActorValue(SPECIALBookMenu::SpecialBookButton* apAVButton, ...)
		{
			using func_t = void(__cdecl*)(SPECIALBookMenu::SpecialBookButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::IncreaseActorValue };
			func(apAVButton);
		}

		static void CloseCallback(SPECIALBookMenu::SpecialBookButton* apButton, ...)
		{
			using func_t = void(__cdecl*)(SPECIALBookMenu::SpecialBookButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::CloseCallback };
			func(apButton);
		}

		void LoadButtonAndTextImages()
		{
			using func_t = decltype(&SPECIALBookMenu::LoadButtonAndTextImages);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::LoadButtonAndTextImages };
			func(this);
		}

	protected:
		void InitBook()
		{
			using func_t = decltype(&SPECIALBookMenu::InitBook);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::InitBook };
			func(this);
		}

		NiCamera* InitCamera()
		{
			using func_t = decltype(&SPECIALBookMenu::InitCamera);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::InitCamera };
			return func(this);
		}

		bool TurnPage(bool bForward)
		{
			using func_t = decltype(&SPECIALBookMenu::TurnPage);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::TurnPage };
			return func(this, bForward);
		}

		ActorValue_Index GetCurrentStatesActorValue()
		{
			using func_t = decltype(&SPECIALBookMenu::GetCurrentStatesActorValue);
			static REL::Relocation<func_t> func{ Offsets::SPECIALBookMenu::GetCurrentStatesActorValue };
			return func(this);
		}

	public:
		// members
		Tile*                                    pTiles[8];                      // 28
		SPECIALBookMenu::SPECIAL_BOOK_MENU_STATE eState;                         // 48
		SPECIALBookMenu::SPECIAL_BOOK_MENU_STATE eXBoxIndexState;                // 4C
		float                                    fFrameAnimTimer;                // 50
		bool                                     bAnimFinished;                  // 54
		std::uint8_t                             pad55[0x3];                     // 55
		std::int32_t                             iAvailablePoints;               // 58
		NiAVObject*                              pBookGeometry;                  // 5C
		SPECIALBookMenu::SpecialBookPage         Pages[9];                       // 60
		NiPointer<NiSourceTexture>               spAVValues[11];                 // 180
		NiPointer<NiSourceTexture>               spPointsText[4];                // 1AC
		NiPointer<NiSourceTexture>               spNextPageButtonImage[2];       // 1BC
		NiPointer<NiSourceTexture>               spPreviousPageButtonImage[2];   // 1C4
		NiPointer<NiSourceTexture>               spOpenCloseBookButtonImage[2];  // 1CC
		NiPointer<NiSourceTexture>               spAVLeftArrowButtonImage[2];    // 1D4
		NiPointer<NiSourceTexture>               spAVRightArrowButtonImage[2];   // 1DC
	};
	static_assert(sizeof(SPECIALBookMenu) == 0x1E4);
}
