#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/L/LowProcess.h"
#include "RE/M/ModifierList.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class MobileObject;
	class TESActorBase;

	class MiddleLowProcess :
		public LowProcess  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MiddleLowProcess };
		static constexpr auto VTABLE{ VTABLE::MiddleLowProcess };

		// override (LowProcess)
		virtual ~MiddleLowProcess() = default;                                                                             // 00
		virtual void Update(MobileObject* apRef, float fTimeDelta) override;                                               // 03
		virtual void Update(MobileObject* apRef) override;                                                                 // 04
		virtual bool CheckforNewPackage(Actor* apActor, bool abFlag) override;                                             // 09
		virtual void SetPackageEvaluateHour(std::int32_t iHour) override;                                                  // 0F
		virtual std::int32_t GetPackageEvaluateHour() override;                                                            // 10
		virtual std::int32_t GetActorValue(TESActorBase* apActorBase, ActorValue_Index aiWhich, Actor* apActor) override;  // E6
		virtual float GetActorFloatValue(TESActorBase* apActorBase, ActorValue_Index aiWhich, Actor* apActor) override;    // E7
		virtual void TempModActorValue(Actor* apActor, ActorValue_Index aiWhich, float afValue) override;                  // E8
		virtual void TempModActorValue(Actor* apActor, ActorValue_Index aiWhich, std::int32_t aiValue) override;           // E9
		virtual void DamageModActorValue(Actor* apActor, ActorValue_Index aiWhich, float afValue) override;                // EA
		virtual void DamageModActorValue(Actor* apActor, ActorValue_Index aiWhich, std::int32_t aiValue) override;         // EB
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags, MobileObject* pmob) override;                             // 152
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                               // 153
		virtual void SaveGame(std::uint32_t aiFlags, MobileObject* pmob) override;                                         // 154
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                               // 155
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags, MobileObject* pmob) override;           // 156
		virtual void Revert(std::uint32_t aiFlags, MobileObject* pmob) override;                                           // 15A
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                         // 15B
		virtual void ProcessCombat(Actor* apActor) override;                                                               // 1F0

		// add
		virtual bool ProcessCombatOneHour(Actor* apActor, float afTimeDelta);  // 207

		MiddleLowProcess* ctor()
		{
			using func_t = MiddleLowProcess*(__thiscall*)(MiddleLowProcess*);
			static REL::Relocation<func_t> func{ Offsets::MiddleLowProcess::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t iHourPackageEvaluated;  // B4
		ModifierList pTemporaryModifiers;    // B8
	};
	static_assert(sizeof(MiddleLowProcess) == 0xC8);
}
