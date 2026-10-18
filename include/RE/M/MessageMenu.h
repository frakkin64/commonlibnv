#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/B/BSTimer.h"
#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"
#include "RE/W/WARNING_TYPES.h"

namespace RE
{
	class BGSEntryPointFunctionDataActivateChoice;
	class Script;
	class TESObjectREFR;
	class Tile;

	class MessageMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MessageMenu };
		static constexpr auto VTABLE{ VTABLE::MessageMenu };

		class MessageMenuEntry;
		class PerkActivation;

		class MessageMenuEntry
		{
		public:
			MessageMenuEntry* ctor()
			{
				using func_t = MessageMenuEntry*(__thiscall*)(MessageMenuEntry*);
				static REL::Relocation<func_t> func{ Offsets::MessageMenu_MessageMenuEntry::ctor };
				return func(this);
			}

			void dtor()
			{
				using func_t = void(__thiscall*)(MessageMenuEntry*);
				static REL::Relocation<func_t> func{ Offsets::MessageMenu_MessageMenuEntry::dtor };
				func(this);
			}

		public:
			// members
			BSStringT<char> strIconFilename;            // 00
			char*           strTitle;                   // 08
			BSStringT<char> strMessageText;             // 0C?
			BSStringT<char> strButtonsText;             // 14?
			char            cFirstButtonResult;         // 1C?
			std::uint8_t    pad1D[0x3];                 // 1D
			BSStringT<char> strHotkeys;                 // 20?
			void*           fpResultCallback;           // 28?
			WARNING_TYPES   iWarningContext;            // 2C?
			BSStringT<char> strAudioOverride;           // 30?
			bool            bIsModal;                   // 38?
			std::uint8_t    pad39[0x3];                 // 39
			std::int32_t    iXPosOverride;              // 3C?
			std::int32_t    iYPosOverride;              // 40?
			float           fMillisecondsVisible;       // 44?
			float           fBackgroundTextureOpacity;  // 48?
			std::uint32_t   uiWidthOverride;            // 4C?
		};

		class PerkActivation
		{
		public:
			// members
			const char*    DisplayText;       // 00?
			Script*        pScript;           // 04?
			TESObjectREFR* pActivatedObject;  // 08?
		};

		// override (Menu)
		virtual ~MessageMenu() = default;                                       // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoIdle() override;                                         // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                        // 0C
		virtual std::int32_t GetClass() override;                               // 0D

		MessageMenu* ctor()
		{
			using func_t = MessageMenu*(__thiscall*)(MessageMenu*);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::ctor };
			return func(this);
		}

		static bool Create()
		{
			using func_t = decltype(&MessageMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::Create };
			return func();
		}

		static void Close()
		{
			using func_t = decltype(&MessageMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::Close };
			func();
		}

		static bool AddMessageToQueue(char const* axText, char const* apcIconFilename, char const* apcTitle, char const* apcSound, void* afpResult, std::int32_t aiFirstButtonResult, std::int32_t aiWarningContext, char const* axFirst, char** afSecondsVisible, bool afBackgroundTextureOpacityOverride, std::int32_t afMenuWidthOverride, std::int32_t axList, float abModal, float aiXPosOverride, float aiYPosOverride)
		{
			using func_t = bool(__cdecl*)(char const*, char const*, char const*, char const*, void*, std::int32_t, std::int32_t, char const*, char**, bool, std::int32_t, std::int32_t, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::AddMessageToQueue };
			return func(axText, apcIconFilename, apcTitle, apcSound, afpResult, aiFirstButtonResult, aiWarningContext, axFirst, afSecondsVisible, afBackgroundTextureOpacityOverride, afMenuWidthOverride, axList, abModal, aiXPosOverride, aiYPosOverride);
		}

		static MessageMenu::MessageMenuEntry* GetQueueHead()
		{
			using func_t = decltype(&MessageMenu::GetQueueHead);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::GetQueueHead };
			return func();
		}

		static void ClearMessageQueue()
		{
			using func_t = decltype(&MessageMenu::ClearMessageQueue);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::ClearMessageQueue };
			func();
		}

		static void ClearMessageQueueHead()
		{
			using func_t = decltype(&MessageMenu::ClearMessageQueueHead);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::ClearMessageQueueHead };
			func();
		}

		static void DisableMessageMenu(bool abDisable)
		{
			using func_t = decltype(&MessageMenu::DisableMessageMenu);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::DisableMessageMenu };
			func(abDisable);
		}

		static bool AddMessageToQueue(BSSimpleList<BGSEntryPointFunctionDataActivateChoice*>* apChoiceList, TESObjectREFR* apActivationTarget)
		{
			using func_t = bool(__cdecl*)(BSSimpleList<BGSEntryPointFunctionDataActivateChoice*>*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::AddMessageToQueue_1 };
			return func(apChoiceList, apActivationTarget);
		}

		static void SetPauseMenuMode(bool abFlag)
		{
			using func_t = decltype(&MessageMenu::SetPauseMenuMode);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::SetPauseMenuMode };
			func(abFlag);
		}

	protected:
		void LoadNextMessage()
		{
			using func_t = decltype(&MessageMenu::LoadNextMessage);
			static REL::Relocation<func_t> func{ Offsets::MessageMenu::LoadNextMessage };
			func(this);
		}

	public:
		// members
		Tile*                 pTiles[6];           // 28
		ListBox<std::int32_t> lbButtons;           // 40
		BSTimer               MMTimer;             // 70
		std::uint32_t         uiMessageStartTime;  // 90
	};
	static_assert(sizeof(MessageMenu) == 0x94);
}
