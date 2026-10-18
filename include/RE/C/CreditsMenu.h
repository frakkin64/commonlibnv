#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSStringT.h"
#include "RE/F/FONTS.h"
#include "RE/M/Menu.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiNode;
	class Tile;

	class CreditsMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CreditsMenu };
		static constexpr auto VTABLE{ VTABLE::CreditsMenu };

		// override (Menu)
		virtual ~CreditsMenu() = default;                                       // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		CreditsMenu* ctor()
		{
			using func_t = CreditsMenu*(__thiscall*)(CreditsMenu*);
			static REL::Relocation<func_t> func{ Offsets::CreditsMenu::ctor };
			return func(this);
		}

		static bool Create()
		{
			using func_t = decltype(&CreditsMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::CreditsMenu::Create };
			return func();
		}

	private:
		void InitCreditsRoot()
		{
			using func_t = decltype(&CreditsMenu::InitCreditsRoot);
			static REL::Relocation<func_t> func{ Offsets::CreditsMenu::InitCreditsRoot };
			func(this);
		}

		NiNode* CreateImage(BSStringT<char>* apImageFilename, std::int32_t aiWidth, std::int32_t aiHeight, float afAlpha)
		{
			using func_t = decltype(&CreditsMenu::CreateImage);
			static REL::Relocation<func_t> func{ Offsets::CreditsMenu::CreateImage };
			return func(this, apImageFilename, aiWidth, aiHeight, afAlpha);
		}

	public:
		// members
		Tile*                              pClickRect;                  // 28
		Tile*                              pBackgroundTile;             // 2C
		NiPointer<NiNode>                  spScrollRoot;                // 30
		std::uint32_t                      iFileOffset;                 // 34
		std::uint32_t                      iFileSize;                   // 38
		char*                              pFileData;                   // 3C
		FONTS                              eFont;                       // 40
		std::int32_t                       iJustification;              // 44
		std::int32_t                       iX;                          // 48
		std::int32_t                       iY;                          // 4C
		NiColorA                           Color;                       // 50
		BSSimpleArray<NiFixedString, 1024> BackgroundTextureFilenames;  // 60
		std::uint32_t                      uiCreditsTotalHeight;        // 70
		float                              fBackgroundSwapInterval;     // 74
		float                              fBackgroundSwapTimer;        // 78
		std::uint32_t                      uiBackgroundIndexCounter;    // 7C
	};
	static_assert(sizeof(CreditsMenu) == 0x80);
}
