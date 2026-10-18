#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatController;
	class IDebugText;
	class NiPoint3;
	class Projectile;
	class TESBoundObject;
	class TESObjectREFR;

	class __declspec(novtable) CombatProcedure
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedure };
		static constexpr auto VTABLE{ VTABLE::CombatProcedure };

		using COMBAT_PROCEDURES = CombatProcedure_COMBAT_PROCEDURES;

		enum class COMBAT_PROCEDURE_STATUS : std::int32_t
		{
			kFAILED = -1,
			kNO_CHANGE = 0x0,
			kCLEARED_DETAILED_PATH = 0x1,
			kCREATED_DETAILED_PATH = 0x2,
			kUPDATED_DETAILED_PATH = 0x3,
		};

		// add
		virtual ~CombatProcedure() = default;                                                                                               // 00
		virtual void Update();                                                                                                              // 01
		virtual void Initialize(CombatController* apCombatController);                                                                      // 02
		virtual void Shutdown();                                                                                                            // 03
		virtual void ClearReferencePointers(TESObjectREFR* apRef);                                                                          // 04
		virtual void DisplayDebugText(IDebugText* apDebugText, DEBUGTEXT_LOCATION aeLocation, DEBUGTEXT_JUSTIFY aeJustify);                 // 05
		virtual bool GetTargetedPoint(NiPoint3& arTargetedPoint, NiPoint3& arReleasePoint);                                                 // 06
		virtual void Disarmed(Actor* apOpponent);                                                                                           // 07
		virtual void FiredProjectile(Projectile* apProjectile);                                                                             // 08
		virtual void TargetChanged();                                                                                                       // 09
		virtual void ActivatedReference(TESObjectREFR* apRef, TESBoundObject* apObject, std::int32_t aiCount, bool abActivatedScriptOnly);  // 0A
		virtual void StartedPlanning();                                                                                                     // 0B
		virtual void FinishedPlanning();                                                                                                    // 0C
		virtual CombatProcedure_COMBAT_PROCEDURES GetType();                                                                                // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer);                                                                         // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                                                                         // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                                                                     // 10

		bool GetFailed()
		{
			using func_t = decltype(&CombatProcedure::GetFailed);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::GetFailed };
			return func(this);
		}

		Actor* GetAttacker()
		{
			using func_t = decltype(&CombatProcedure::GetAttacker);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::GetAttacker };
			return func(this);
		}

		Actor* GetTarget()
		{
			using func_t = decltype(&CombatProcedure::GetTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::GetTarget };
			return func(this);
		}

		void SetMoveMode(std::int32_t aiCombatMoveMode)
		{
			using func_t = decltype(&CombatProcedure::SetMoveMode);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::SetMoveMode };
			func(this, aiCombatMoveMode);
		}

		void ClearMoveMode()
		{
			using func_t = decltype(&CombatProcedure::ClearMoveMode);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::ClearMoveMode };
			func(this);
		}

		void SetLookAtTarget(NiPoint3 const& arLookAtPoint, std::uint8_t acPriority)
		{
			using func_t = decltype(&CombatProcedure::SetLookAtTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::SetLookAtTarget };
			func(this, arLookAtPoint, acPriority);
		}

		void ClearLookAtTarget()
		{
			using func_t = decltype(&CombatProcedure::ClearLookAtTarget);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::ClearLookAtTarget };
			func(this);
		}

		static CombatProcedure* CreateProcedure(std::uint32_t aiType)
		{
			using func_t = decltype(&CombatProcedure::CreateProcedure);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::CreateProcedure };
			return func(aiType);
		}

		CombatProcedure* ctor()
		{
			using func_t = CombatProcedure*(__thiscall*)(CombatProcedure*);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::ctor };
			return func(this);
		}

		void SetFailed(char const* apReason)
		{
			using func_t = decltype(&CombatProcedure::SetFailed);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::SetFailed };
			func(this, apReason);
		}

		void SetFinished()
		{
			using func_t = decltype(&CombatProcedure::SetFinished);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedure::SetFinished };
			func(this);
		}

	public:
		// members
		CombatController*                        pCombatController;  // 04
		CombatProcedure::COMBAT_PROCEDURE_STATUS eStatus;            // 08
		const char*                              pFailureReason;     // 0C
	};
	static_assert(sizeof(CombatProcedure) == 0x10);
}
