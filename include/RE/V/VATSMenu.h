#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActionPoints_Action.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"
#include "RE/V/VATS_COMMAND.h"

namespace RE
{
	class NiMatrix3;
	class TESObjectREFR;
	class TESObjectWEAP;
	class Tile;

	class VATSMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::VATSMenu };
		static constexpr auto VTABLE{ VTABLE::VATSMenu };

		class ChanceToHit;
		class VatsTarget;

		enum class VATS_TARGET_TYPE : std::int32_t
		{
			kVTT_NONE = 0x0,
			kVTT_NPC = 0x1,
			kVTT_DESTRUCTABLE_OBJECT = 0x2,
		};

		class ChanceToHit
		{
		public:
			// members
			NiPoint2              Location;           // 00?
			NiPoint3              PlaneLocation;      // 08?
			NiPoint3              WorldCoord;         // 14?
			BGSBodyPart_LIMB_ENUM eLimb;              // 20?
			float                 fScreenPercent;     // 24?
			float                 fChance;            // 28?
			bool                  bOnScreen;          // 2C?
			bool                  bChanceCalculated;  // 2D?
			bool                  bFirstTimeShown;    // 2E?
			bool                  bNeedsRecalc;       // 2F?
			Tile*                 pMeter;             // 30?
			float                 fAngleToStick;      // 34?
			bool                  bLeftOfCenter;      // 38?
			std::uint8_t          pad39[0x3];         // 39
		};

		class VatsTarget
		{
		public:
			// members
			TESObjectREFR*                       pTarget;             // 00?
			VATSMenu::VATS_TARGET_TYPE           eTargetType;         // 04?
			BSSimpleList<VATSMenu::ChanceToHit*> xTargetParts;        // 08?
			bool                                 bChancesCalculated;  // 10?
			std::uint8_t                         pad11[0x3];          // 11
			float                                fDesiredTarget;      // 14?
			float                                fAngleToPlayer;      // 18?
			float                                fDistanceToPlayer;   // 1C?
			bool                                 bHostile;            // 20?
			std::uint8_t                         pad21[0x3];          // 21
		};

		// override (Menu)
		virtual ~VATSMenu() = default;                                          // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoStillDown(std::int32_t aiID, Tile* apTarget) override;   // 08
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;   // 0A
		virtual void DoIdle() override;                                         // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                        // 0C
		virtual std::int32_t GetClass() override;                               // 0D

		VATSMenu* ctor()
		{
			using func_t = VATSMenu*(__thiscall*)(VATSMenu*);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::ctor };
			return func(this);
		}

		static bool Create()
		{
			using func_t = decltype(&VATSMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::Create };
			return func();
		}

		static void Close()
		{
			using func_t = decltype(&VATSMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::Close };
			func();
		}

		static void SetHeadingReached(bool abHeadingReached)
		{
			using func_t = decltype(&VATSMenu::SetHeadingReached);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::SetHeadingReached };
			func(abHeadingReached);
		}

		static bool FilterDestructibleObjects(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&VATSMenu::FilterDestructibleObjects);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::FilterDestructibleObjects };
			return func(apRef, aiFilterData);
		}

		static bool BuildTargetList()
		{
			using func_t = decltype(&VATSMenu::BuildTargetList);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::BuildTargetList };
			return func();
		}

	protected:
		static void SetupSpecialAttackButtons(TESObjectWEAP* pweapon)
		{
			using func_t = decltype(&VATSMenu::SetupSpecialAttackButtons);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::SetupSpecialAttackButtons };
			func(pweapon);
		}

		static void ShowTargetLimb(bool abForceShow)
		{
			using func_t = decltype(&VATSMenu::ShowTargetLimb);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::ShowTargetLimb };
			func(abForceShow);
		}

		void UpdateQueuedActionList(VATS_COMMAND* apCommand, bool abForcedReload, bool bSpecialAttack)
		{
			using func_t = decltype(&VATSMenu::UpdateQueuedActionList);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::UpdateQueuedActionList };
			func(this, apCommand, abForcedReload, bSpecialAttack);
		}

		void UpdateChanceToHit()
		{
			using func_t = decltype(&VATSMenu::UpdateChanceToHit);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::UpdateChanceToHit };
			func(this);
		}

		void SetMeterChance()
		{
			using func_t = decltype(&VATSMenu::SetMeterChance);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::SetMeterChance };
			func(this);
		}

		void PrepareMeters()
		{
			using func_t = decltype(&VATSMenu::PrepareMeters);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::PrepareMeters };
			func(this);
		}

		bool UpdateAmmo()
		{
			using func_t = decltype(&VATSMenu::UpdateAmmo);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::UpdateAmmo };
			return func(this);
		}

		void SetTargetLimb()
		{
			using func_t = decltype(&VATSMenu::SetTargetLimb);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::SetTargetLimb };
			func(this);
		}

		ActorValue_Index GetActorValueFromBodyPart(BGSBodyPart_LIMB_ENUM aeBodyPart)
		{
			using func_t = decltype(&VATSMenu::GetActorValueFromBodyPart);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::GetActorValueFromBodyPart };
			return func(this, aeBodyPart);
		}

		BSSimpleList<VATSMenu::VatsTarget*>* GetVatsTarget(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&VATSMenu::GetVatsTarget);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::GetVatsTarget };
			return func(this, apTarget);
		}

		bool PrecalcTargetHitChances()
		{
			using func_t = decltype(&VATSMenu::PrecalcTargetHitChances);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::PrecalcTargetHitChances };
			return func(this);
		}

		static Tile* VatsMenuRenderTemplate(Tile* apParent, char const* axName)
		{
			using func_t = decltype(&VATSMenu::VatsMenuRenderTemplate);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::VatsMenuRenderTemplate };
			return func(apParent, axName);
		}

		static Tile* VatsMenuGetTileByName(Tile* apTarget, char const* apName)
		{
			using func_t = decltype(&VATSMenu::VatsMenuGetTileByName);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::VatsMenuGetTileByName };
			return func(apTarget, apName);
		}

		float CalculateProbableEnemyHealth()
		{
			using func_t = decltype(&VATSMenu::CalculateProbableEnemyHealth);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::CalculateProbableEnemyHealth };
			return func(this);
		}

		void SelectNearestTarget(bool abLeft)
		{
			using func_t = decltype(&VATSMenu::SelectNearestTarget);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::SelectNearestTarget };
			func(this, abLeft);
		}

		static std::uint8_t GetShotBurstCount(ActionPoints_Action aeAction, bool abAllowLongBurst)
		{
			using func_t = decltype(&VATSMenu::GetShotBurstCount);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::GetShotBurstCount };
			return func(aeAction, abAllowLongBurst);
		}

		void GetScreenPlaneProjectionMatrix(NiMatrix3* apmatrix)
		{
			using func_t = decltype(&VATSMenu::GetScreenPlaneProjectionMatrix);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::GetScreenPlaneProjectionMatrix };
			func(this, apmatrix);
		}

		bool PickNewTarget()
		{
			using func_t = decltype(&VATSMenu::PickNewTarget);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::PickNewTarget };
			return func(this);
		}

		void BuildMetersForTarget(BSSimpleList<VATSMenu::VatsTarget*>* apTarget)
		{
			using func_t = decltype(&VATSMenu::BuildMetersForTarget);
			static REL::Relocation<func_t> func{ Offsets::VATSMenu::BuildMetersForTarget };
			func(this, apTarget);
		}

	public:
		// members
		Tile*                  pTiles[32];                   // 28
		Tile*                  pActive;                      // A8
		bool                   bDebounceMenuButton;          // AC
		std::uint8_t           padAD[0x3];                   // AD
		ListBox<std::uint32_t> lbActions;                    // B0
		float                  fActionPoints;                // E0
		float                  fActionPointsBase;            // E4
		float                  fClipAmmo;                    // E8
		float                  fTotalAmmo;                   // EC
		float                  fQueuedClipAmmo;              // F0
		float                  fQueuedTotalAmmo;             // F4
		bool                   bHeadingReached;              // F8
		bool                   bMetersShown;                 // F9
		bool                   bTargetsLit;                  // FA
		bool                   bClosing;                     // FB
		float                  fProbableEnemyDamage;         // FC
		VATSMenu::ChanceToHit* pCurrentLimb;                 // 100
		bool                   bConcentratedFirePerk;        // 104
		std::uint8_t           pad105[0x3];                  // 105
		VATSMenu::ChanceToHit* pLastLimb;                    // 108
		bool                   bStickReset;                  // 10C
		bool                   bTargetStickReset;            // 10D
		bool                   bMouseOverButton;             // 10E
		bool                   bSelectLeftHeld;              // 10F
		bool                   bSelectRightHeld;             // 110
		std::uint8_t           pad111[0x3];                  // 111
		std::uint32_t          uiSelectTimer;                // 114
		bool                   bDataInTemporaryVATSCommand;  // 118
		std::uint8_t           pad119[0x3];                  // 119
		VATS_COMMAND           pTemporaryVATSCommand;        // 11C
	};
	static_assert(sizeof(VATSMenu) == 0x144);
}
