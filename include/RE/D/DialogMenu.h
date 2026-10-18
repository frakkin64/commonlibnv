#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPoint2.h"

namespace RE
{
	class ImageSpaceModifierInstanceDOF;
	class MenuTopicManager;
	class MobileObject;
	class TESTopic;
	class Tile;

	class DialogMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DialogMenu };
		static constexpr auto VTABLE{ VTABLE::DialogMenu };

		enum class DialogState : std::int32_t
		{
			kECameraZoomIn = 0x0,
			kELoadSpeech = 0x1,
			kESpeechIdle = 0x2,
			kEPlaySpeech = 0x3,
			kECameraZoomOut = 0x4,
			kEServiceFadeOut = 0x5,
		};

		enum class GoodbyeState : std::int32_t
		{
			kEInDialogue = 0x0,
			kENaturalGoodbye = 0x1,
			kEForceGoodbye = 0x2,
			kEInvalidChoiceList = 0x3,
		};

		// override (Menu)
		virtual ~DialogMenu() = default;                                        // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		static bool IsDialogActive()
		{
			using func_t = decltype(&DialogMenu::IsDialogActive);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::IsDialogActive };
			return func();
		}

		static Tile* Create(MobileObject* apSpeaker, TESTopic* apGreetTopic, MobileObject* apSpeakas)
		{
			using func_t = decltype(&DialogMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::Create };
			return func(apSpeaker, apGreetTopic, apSpeakas);
		}

		static void Close()
		{
			using func_t = decltype(&DialogMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::Close };
			func();
		}

		static void ServiceStart()
		{
			using func_t = decltype(&DialogMenu::ServiceStart);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::ServiceStart };
			func();
		}

		static void ServiceEnd(TESTopic* apTopic)
		{
			using func_t = decltype(&DialogMenu::ServiceEnd);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::ServiceEnd };
			func(apTopic);
		}

		void SetPause(bool abPause)
		{
			using func_t = decltype(&DialogMenu::SetPause);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::SetPause };
			func(this, abPause);
		}

		static void DebugResetSaidOnceFlags()
		{
			using func_t = decltype(&DialogMenu::DebugResetSaidOnceFlags);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::DebugResetSaidOnceFlags };
			func();
		}

	private:
		DialogMenu::DialogState LoadNextScreen(bool abShowChallengePrefix)
		{
			using func_t = decltype(&DialogMenu::LoadNextScreen);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::LoadNextScreen };
			return func(this, abShowChallengePrefix);
		}

		void LoadTopicsList()
		{
			using func_t = decltype(&DialogMenu::LoadTopicsList);
			static REL::Relocation<func_t> func{ Offsets::DialogMenu::LoadTopicsList };
			func(this);
		}

	public:
		// members
		DialogMenu::DialogState        eDialogState;            // 28
		DialogMenu::GoodbyeState       eGoodbyeState;           // 2C
		Tile*                          pTiles[4];               // 30
		ListBox<std::int32_t>          lbResponseList;          // 40
		MenuTopicManager*              pTopicManager;           // 70
		BSSoundHandle                  hSpeechFile;             // 74
		MobileObject*                  pSpeaker;                // 80
		char                           strCurrTopicID[128];     // 84
		bool                           bResponseShown;          // 104
		std::uint8_t                   pad105[0x3];             // 105
		float                          fElapsedSecs;            // 108
		std::uint32_t                  uiIgnoreInputStartTime;  // 10C
		NiPoint2                       DOFDepth;                // 110
		NiPoint2                       DOFRange;                // 118
		NiPoint2                       DOFStrength;             // 120
		float                          fPercentZoomed;          // 128
		ImageSpaceModifierInstanceDOF* pDepthOfFieldInstance;   // 12C
		bool                           bIsIn3rdPerson;          // 130
		bool                           bPaused;                 // 131
		std::uint16_t                  pad132;                  // 132
		DialogMenu::DialogState        ePausedState;            // 134
		bool                           bInServiceMenu;          // 138
		bool                           bShowingTutorial;        // 139
		bool                           bDoServiceLoad;          // 13A
		std::uint8_t                   pad13B;                  // 13B
	};
	static_assert(sizeof(DialogMenu) == 0x13C);
}
