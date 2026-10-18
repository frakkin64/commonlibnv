#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LOCK_LEVEL.h"
#include "RE/M/Menu.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiCamera;
	class NiControllerManager;
	class NiControllerSequence;
	class TESObjectREFR;
	class Tile;

	class LockPickMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LockPickMenu };
		static constexpr auto VTABLE{ VTABLE::LockPickMenu };

		enum class LockState : std::int32_t
		{
			kBL_INTRO_ANIM = 0x0,
			kBL_DEALING_ANIM = 0x1,
			kBL_HIT_ANIM = 0x2,
			kBL_SPLIT_ANIM = 0x3,
			kBL_PLAYER_TURN = 0x4,
			kBL_PLAYER_SPLIT = 0x5,
			kBL_PLAYER_DOUBLE = 0x6,
			kBL_CLEAN_TABLE_ANIM = 0x7,
			kBL_DEALER_FLIP_ANIM = 0x8,
			kBL_DEALER_HIT_ANIM = 0x9,
			kBL_IDLE = 0xA,
			kBL_DEALER_TURN = 0xB,
			kBL_DETERMINE_WINNER = 0xC,
			kBL_CLOSING_MENU = 0xD,
			kNUM_STATES = 0xE,
		};

		// override (Menu)
		virtual ~LockPickMenu() = default;                                      // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D

		LockPickMenu* ctor()
		{
			using func_t = LockPickMenu*(__thiscall*)(LockPickMenu*);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::ctor };
			return func(this);
		}

		static Tile* Create(TESObjectREFR* apTarget, std::int32_t aiLockLevel, bool abDebugMode)
		{
			using func_t = decltype(&LockPickMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::Create };
			return func(apTarget, aiLockLevel, abDebugMode);
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&LockPickMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::Draw3DElements };
			func();
		}

	private:
		void Prepare3DElements()
		{
			using func_t = decltype(&LockPickMenu::Prepare3DElements);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::Prepare3DElements };
			func(this);
		}

		NiCamera* Create3DCamera()
		{
			using func_t = decltype(&LockPickMenu::Create3DCamera);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::Create3DCamera };
			return func(this);
		}

		void RotateLockpick()
		{
			using func_t = decltype(&LockPickMenu::RotateLockpick);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::RotateLockpick };
			func(this);
		}

		void RotateLockpickModel(float afNewArrowX)
		{
			using func_t = decltype(&LockPickMenu::RotateLockpickModel);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::RotateLockpickModel };
			func(this, afNewArrowX);
		}

		void RotateLock(float a_arg1)
		{
			using func_t = decltype(&LockPickMenu::RotateLock);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::RotateLock };
			func(this, a_arg1);
		}

		void CreateSweetSpot()
		{
			using func_t = decltype(&LockPickMenu::CreateSweetSpot);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::CreateSweetSpot };
			func(this);
		}

		bool IsTurningLock(std::int32_t aiStateFlag)
		{
			using func_t = decltype(&LockPickMenu::IsTurningLock);
			static REL::Relocation<func_t> func{ Offsets::LockPickMenu::IsTurningLock };
			return func(this, aiStateFlag);
		}

	public:
		// members
		LockPickMenu::LockState eLockState;             // 28
		Tile*                   pTiles[16];             // 2C
		TESObjectREFR*          pLockTarget;            // 6C
		LOCK_LEVEL              eLockLevel;             // 70
		std::int32_t            iLockpickSkill;         // 74
		float                   fLockpickSkill;         // 78
		std::int32_t            iPicksRemaining;        // 7C
		std::uint32_t           uiPrevIdleTick;         // 80
		float                   fSweetSpot;             // 84
		std::int32_t            iTotalSweetSpotRadius;  // 88
		float                   fLockAngle;             // 8C
		float                   fMaxLockAngle;          // 90
		float                   fPickHealth;            // 94
		bool                    bForceLockSuccess;      // 98
		bool                    bShowingTutorial;       // 99
		std::uint16_t           pad9A;                  // 9A
		NiControllerSequence*   pIntroAnim;             // 9C
		NiControllerSequence*   pLockRotateAnim;        // A0
		NiControllerManager*    ppickAnimManager;       // A4
		NiControllerSequence*   pPickIntroAnim;         // A8
		NiControllerSequence*   pPickBendAnim;          // AC
		NiControllerSequence*   pPickBreakAnim;         // B0
		NiMatrix3               origPickRotate;         // B4
		NiPoint3                origPickTranslate;      // D8
	};
	static_assert(sizeof(LockPickMenu) == 0xE4);
}
