#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSCameraShot;
	class ExtraDataList;
	class ImageSpaceModifierInstanceForm;
	class ImageSpaceModifierInstanceRB;
	class Projectile;
	class ShadowSceneLight;
	class TESBoundObject;
	class TESIdleForm;
	class TESObjectREFR;
	class VATS_COMMAND;

	class VATS
	{
	public:
		enum class VATS_MODE_ENUM : std::int32_t
		{
			kVATS_MODE_NONE = 0x0,
			kVATS_TARGET_SELECT = 0x1,
			kVATS_MENU_MODE = 0x2,
			kVATS_SCAN_MODE = 0x3,
			kVATS_PLAYBACK = 0x4,
			kVATS_MODE_COUNT = 0x5,
		};

		bool IsInVats()
		{
			using func_t = decltype(&VATS::IsInVats);
			static REL::Relocation<func_t> func{ Offsets::VATS::IsInVats };
			return func(this);
		}

		ShadowSceneLight* GetVATSLight()
		{
			using func_t = decltype(&VATS::GetVATSLight);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetVATSLight };
			return func(this);
		}

		void ClearData()
		{
			using func_t = decltype(&VATS::ClearData);
			static REL::Relocation<func_t> func{ Offsets::VATS::ClearData };
			func(this);
		}

		void SetMode(VATS::VATS_MODE_ENUM aeMode, bool bForce)
		{
			using func_t = decltype(&VATS::SetMode);
			static REL::Relocation<func_t> func{ Offsets::VATS::SetMode };
			func(this, aeMode, bForce);
		}

		void QueueAction(VATS_COMMAND* apCommand)
		{
			using func_t = decltype(&VATS::QueueAction);
			static REL::Relocation<func_t> func{ Offsets::VATS::QueueAction };
			func(this, apCommand);
		}

		VATS_COMMAND* GetCurrentAction()
		{
			using func_t = decltype(&VATS::GetCurrentAction);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetCurrentAction };
			return func(this);
		}

		void Update()
		{
			using func_t = decltype(&VATS::Update);
			static REL::Relocation<func_t> func{ Offsets::VATS::Update };
			func(this);
		}

		void FreeHeadAction()
		{
			using func_t = decltype(&VATS::FreeHeadAction);
			static REL::Relocation<func_t> func{ Offsets::VATS::FreeHeadAction };
			func(this);
		}

		void QuitVATSPlayback(bool abForceQuit, bool abFinishCommandPlayback)
		{
			using func_t = decltype(&VATS::QuitVATSPlayback);
			static REL::Relocation<func_t> func{ Offsets::VATS::QuitVATSPlayback };
			func(this, abForceQuit, abFinishCommandPlayback);
		}

		NiPoint3 GetTargetPos()
		{
			using func_t = decltype(&VATS::GetTargetPos);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetTargetPos };
			return func(this);
		}

		void SetFirstProjectile(Projectile* apProjectile)
		{
			using func_t = decltype(&VATS::SetFirstProjectile);
			static REL::Relocation<func_t> func{ Offsets::VATS::SetFirstProjectile };
			func(this, apProjectile);
		}

		void SetLastProjectile(Projectile* apProjectile)
		{
			using func_t = decltype(&VATS::SetLastProjectile);
			static REL::Relocation<func_t> func{ Offsets::VATS::SetLastProjectile };
			func(this, apProjectile);
		}

		float GetPlayerUpdateMult()
		{
			using func_t = decltype(&VATS::GetPlayerUpdateMult);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetPlayerUpdateMult };
			return func(this);
		}

		float GetTargetUpdateMult()
		{
			using func_t = decltype(&VATS::GetTargetUpdateMult);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetTargetUpdateMult };
			return func(this);
		}

		void EvaluateCommand(VATS_COMMAND* apCommand)
		{
			using func_t = decltype(&VATS::EvaluateCommand);
			static REL::Relocation<func_t> func{ Offsets::VATS::EvaluateCommand };
			func(this, apCommand);
		}

		void UpdateCurrentCameraAction(VATS_COMMAND* apCommand)
		{
			using func_t = decltype(&VATS::UpdateCurrentCameraAction);
			static REL::Relocation<func_t> func{ Offsets::VATS::UpdateCurrentCameraAction };
			func(this, apCommand);
		}

		void UpdateVATSLight(TESObjectREFR* apVictim)
		{
			using func_t = decltype(&VATS::UpdateVATSLight);
			static REL::Relocation<func_t> func{ Offsets::VATS::UpdateVATSLight };
			func(this, apVictim);
		}

		bool IsMeleeCommand(VATS_COMMAND* apCommand)
		{
			using func_t = decltype(&VATS::IsMeleeCommand);
			static REL::Relocation<func_t> func{ Offsets::VATS::IsMeleeCommand };
			return func(this, apCommand);
		}

		NiPoint3 GetTargetPercentagePos(float result)
		{
			using func_t = decltype(&VATS::GetTargetPercentagePos);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetTargetPercentagePos };
			return func(this, result);
		}

		void InitPlayerDeath()
		{
			using func_t = decltype(&VATS::InitPlayerDeath);
			static REL::Relocation<func_t> func{ Offsets::VATS::InitPlayerDeath };
			func(this);
		}

		void ForceTargetKillShot(TESObjectREFR* pTarget, BGSBodyPart_LIMB_ENUM eDamageLimb)
		{
			using func_t = decltype(&VATS::ForceTargetKillShot);
			static REL::Relocation<func_t> func{ Offsets::VATS::ForceTargetKillShot };
			func(this, pTarget, eDamageLimb);
		}

		void ClearCommandList()
		{
			using func_t = decltype(&VATS::ClearCommandList);
			static REL::Relocation<func_t> func{ Offsets::VATS::ClearCommandList };
			func(this);
		}

	private:
		bool GetLineOfSight(VATS_COMMAND* apCommand)
		{
			using func_t = decltype(&VATS::GetLineOfSight);
			static REL::Relocation<func_t> func{ Offsets::VATS::GetLineOfSight };
			return func(this, apCommand);
		}

		void UpdateMeleeAttack(VATS_COMMAND* apCommand)
		{
			using func_t = decltype(&VATS::UpdateMeleeAttack);
			static REL::Relocation<func_t> func{ Offsets::VATS::UpdateMeleeAttack };
			func(this, apCommand);
		}

		bool UseNextCamera()
		{
			using func_t = decltype(&VATS::UseNextCamera);
			static REL::Relocation<func_t> func{ Offsets::VATS::UseNextCamera };
			return func(this);
		}

	public:
		// members
		BSSimpleList<VATS_COMMAND*>     commandList;               // 00
		VATS::VATS_MODE_ENUM            eMode;                     // 08
		BSSimpleList<BGSCameraShot*>*   pCameraList;               // 0C
		BGSCameraShot*                  pCamera;                   // 10
		float                           fCameraTimer;              // 14
		float                           fCameraMinTimer;           // 18
		Projectile*                     pFirstProjectile;          // 1C
		Projectile*                     pLastProjectile;           // 20
		TESIdleForm*                    pMeleeAttack;              // 24
		ImageSpaceModifierInstanceForm* pImagespaceMod;            // 28
		ImageSpaceModifierInstanceRB*   pTransitionImagespaceMod;  // 2C
		bool                            bAiming;                   // 30
		std::uint8_t                    pad31[0x3];                // 31
		NiPointer<ShadowSceneLight>     spVATSLight;               // 34
		bool                            bFirstVatsAttack;          // 38
		std::uint8_t                    pad39[0x3];                // 39
		std::int32_t                    iKillCount;                // 3C
		TESBoundObject*                 pUnEquipWeapon;            // 40
		ExtraDataList*                  pUnEquipExtra;             // 44
	};
}
