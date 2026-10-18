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

	class LoveTesterMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LoveTesterMenu };
		static constexpr auto VTABLE{ VTABLE::LoveTesterMenu };

		class ActorValueButton;
		class LoveTesterButton;
		class LoveTesterLightBulbGlows;
		class LoveTesterPage;
		class LoveTesterTextItem;

		enum class LOVE_TESTER_MENU_STATE : std::int32_t
		{
			kLTMS_START = 0x0,
			kLTMS_STRENGTH = 0x1,
			kLTMS_PERCEPTION = 0x2,
			kLTMS_ENDURANCE = 0x3,
			kLTMS_CHARISMA = 0x4,
			kLTMS_INTELLIGENCE = 0x5,
			kLTMS_AGILITY = 0x6,
			kLTMS_LUCK = 0x7,
			kLTMS_SUMMARY = 0x8,
			kLTMS_NUM_STATES = 0x9,
		};

		class LoveTesterButton
		{
		public:
			LoveTesterButton* ctor(void* apButtonClick, void* apRefresh, char const* apButtonName)
			{
				using func_t = LoveTesterButton*(__thiscall*)(LoveTesterButton*, void*, void*, char const*);
				static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu_LoveTesterButton::ctor };
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

		class LoveTesterLightBulbGlows
		{
		public:
			// members
			NiAVObject*  m_GlowCard;        // 00?
			std::int32_t m_nValueToGlowAt;  // 04?
		};

		class LoveTesterPage
		{
		public:
			LoveTesterPage* ctor()
			{
				using func_t = LoveTesterPage*(__thiscall*)(LoveTesterPage*);
				static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu_LoveTesterPage::ctor };
				return func(this);
			}

		public:
			// members
			BSSimpleArray<LoveTesterMenu::LoveTesterButton*, 1024>   Buttons;    // 00
			BSSimpleArray<LoveTesterMenu::LoveTesterTextItem*, 1024> TextItems;  // 10
		};
		static_assert(sizeof(LoveTesterPage) == 0x20);

		class LoveTesterTextItem
		{
		public:
			LoveTesterTextItem* ctor(void* apRefreshFieldCallback, char const* apTextObjectName1, char const* apTextObjectName2, ActorValue_Index aeActorValue, bool bElementOnDynamicGeometry, std::int32_t anThresholdToLightAt)
			{
				using func_t = LoveTesterTextItem*(__thiscall*)(LoveTesterTextItem*, void*, char const*, char const*, ActorValue_Index, bool, std::int32_t);
				static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu_LoveTesterTextItem::ctor };
				return func(this, apRefreshFieldCallback, apTextObjectName1, apTextObjectName2, aeActorValue, bElementOnDynamicGeometry, anThresholdToLightAt);
			}

		public:
			// members
			void*                       pfRefreshField;  // 00
			BSShaderPPLightingProperty* pText[2];        // 04?
			NiAVObject*                 pTextObj[2];     // 0C?
			ActorValue_Index            eActorValue;     // 14?
			std::int32_t                nThreshold;      // 18?
		};

		class ActorValueButton :
			public LoveTesterMenu::LoveTesterButton  // 00
		{
		public:
			ActorValueButton* ctor(void* apButtonClick, void* apRefresh, char const* apButtonName, ActorValue_Index aeActorValue, std::int32_t aiNumAffectedFields, ...)
			{
				using func_t = ActorValueButton*(__cdecl*)(ActorValueButton*, void*, void*, char const*, ActorValue_Index, std::int32_t, ...);
				static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu_ActorValueButton::ctor };
				return func(this, apButtonClick, apRefresh, apButtonName, aeActorValue, aiNumAffectedFields);
			}

		public:
			// members
			BSSimpleArray<LoveTesterMenu::LoveTesterTextItem*, 1024> AffectedFields;  // 14?
			ActorValue_Index                                         eActorValue;     // 24?
		};

		// override (Menu)
		virtual ~LoveTesterMenu() = default;                                    // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoIdle() override;                                         // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                        // 0C
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		[[nodiscard]] static LoveTesterMenu* GetSingleton() noexcept
		{
			static REL::Relocation<LoveTesterMenu**> singleton{ Offsets::LoveTesterMenu::pInstance };
			return *singleton;
		}

		LoveTesterMenu* ctor()
		{
			using func_t = LoveTesterMenu*(__thiscall*)(LoveTesterMenu*);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::ctor };
			return func(this);
		}

		static void Create(std::int32_t aiTotalPoints)
		{
			using func_t = decltype(&LoveTesterMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::Create };
			func(aiTotalPoints);
		}

		static void Close()
		{
			using func_t = decltype(&LoveTesterMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::Close };
			func();
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&LoveTesterMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::Draw3DElements };
			func();
		}

		static void RefreshTotalPointsValue(LoveTesterMenu::LoveTesterTextItem* apTextItem)
		{
			using func_t = decltype(&LoveTesterMenu::RefreshTotalPointsValue);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::RefreshTotalPointsValue };
			func(apTextItem);
		}

		static void RefreshLeftAVButton(LoveTesterMenu::LoveTesterButton* apButton)
		{
			using func_t = decltype(&LoveTesterMenu::RefreshLeftAVButton);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::RefreshLeftAVButton };
			func(apButton);
		}

		static void RefreshRightAVButton(LoveTesterMenu::LoveTesterButton* apButton)
		{
			using func_t = decltype(&LoveTesterMenu::RefreshRightAVButton);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::RefreshRightAVButton };
			func(apButton);
		}

		static void DecreaseActorValue(LoveTesterMenu::LoveTesterButton* apAVButton, ...)
		{
			using func_t = void(__cdecl*)(LoveTesterMenu::LoveTesterButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::DecreaseActorValue };
			func(apAVButton);
		}

		static void DecreaseCurrentActorValue(LoveTesterMenu::LoveTesterButton* apAVButton, ...)
		{
			using func_t = void(__cdecl*)(LoveTesterMenu::LoveTesterButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::DecreaseCurrentActorValue };
			func(apAVButton);
		}

		static void IncreaseActorValue(LoveTesterMenu::LoveTesterButton* apAVButton, ...)
		{
			using func_t = void(__cdecl*)(LoveTesterMenu::LoveTesterButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::IncreaseActorValue };
			func(apAVButton);
		}

		static void IncreaseCurrentActorValue(LoveTesterMenu::LoveTesterButton* apAVButton, ...)
		{
			using func_t = void(__cdecl*)(LoveTesterMenu::LoveTesterButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::IncreaseCurrentActorValue };
			func(apAVButton);
		}

		static void NextPage(LoveTesterMenu::LoveTesterButton* apButton, ...)
		{
			using func_t = void(__cdecl*)(LoveTesterMenu::LoveTesterButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::NextPage };
			func(apButton);
		}

		static void CloseCallback(LoveTesterMenu::LoveTesterButton* apButton, ...)
		{
			using func_t = void(__cdecl*)(LoveTesterMenu::LoveTesterButton*, ...);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::CloseCallback };
			func(apButton);
		}

		void LoadButtonAndTextImages()
		{
			using func_t = decltype(&LoveTesterMenu::LoadButtonAndTextImages);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::LoadButtonAndTextImages };
			func(this);
		}

	protected:
		void InitMachine()
		{
			using func_t = decltype(&LoveTesterMenu::InitMachine);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::InitMachine };
			func(this);
		}

		NiCamera* InitCamera()
		{
			using func_t = decltype(&LoveTesterMenu::InitCamera);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::InitCamera };
			return func(this);
		}

		bool TurnPage(bool bForward)
		{
			using func_t = decltype(&LoveTesterMenu::TurnPage);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::TurnPage };
			return func(this, bForward);
		}

		ActorValue_Index GetCurrentStatesActorValue()
		{
			using func_t = decltype(&LoveTesterMenu::GetCurrentStatesActorValue);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::GetCurrentStatesActorValue };
			return func(this);
		}

		std::int32_t GetTotalPointsUsed()
		{
			using func_t = decltype(&LoveTesterMenu::GetTotalPointsUsed);
			static REL::Relocation<func_t> func{ Offsets::LoveTesterMenu::GetTotalPointsUsed };
			return func(this);
		}

	public:
		// members
		Tile*                                                          pTiles[8];                      // 28
		LoveTesterMenu::LOVE_TESTER_MENU_STATE                         eState;                         // 48
		LoveTesterMenu::LOVE_TESTER_MENU_STATE                         eXBoxIndexState;                // 4C
		float                                                          fFrameAnimTimer;                // 50
		bool                                                           bAnimFinished;                  // 54
		std::uint8_t                                                   pad55[0x3];                     // 55
		std::int32_t                                                   iAvailablePoints;               // 58
		NiAVObject*                                                    pDynamicGeometry;               // 5C
		NiAVObject*                                                    pCabinetGeometry;               // 60
		BSSimpleArray<LoveTesterMenu::LoveTesterTextItem*, 1024>       LightBulbs;                     // 64
		BSSimpleArray<LoveTesterMenu::LoveTesterLightBulbGlows*, 1024> LightBulbGlows;                 // 74
		LoveTesterMenu::LoveTesterPage                                 Pages[9];                       // 84
		LoveTesterMenu::LoveTesterPage                                 GlobalPage;                     // 1A4
		NiPointer<NiSourceTexture>                                     spAVValues[11];                 // 1C4
		NiPointer<NiSourceTexture>                                     spPointsText[4];                // 1F0
		NiPointer<NiSourceTexture>                                     spNextPageButtonImage[2];       // 200
		NiPointer<NiSourceTexture>                                     spPreviousPageButtonImage[2];   // 208
		NiPointer<NiSourceTexture>                                     spOpenCloseBookButtonImage[2];  // 210
		NiPointer<NiSourceTexture>                                     spAVLeftArrowButtonImage[2];    // 218
		NiPointer<NiSourceTexture>                                     spAVRightArrowButtonImage[2];   // 220
		NiPointer<NiSourceTexture>                                     spOnOffImage[2];                // 228
	};
	static_assert(sizeof(LoveTesterMenu) == 0x230);
}
