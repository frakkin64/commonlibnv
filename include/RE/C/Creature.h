#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTOR_TYPE.h"
#include "RE/A/Actor.h"
#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class NiAVObject;
	class TESRace;

	class Creature :
		public Actor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Creature };
		static constexpr auto VTABLE{ VTABLE::Creature };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kACRE_ID };

		// override (Actor)
		virtual ~Creature() = default;                                                                                    // 04
		virtual void Set3D(NiAVObject* apObject, bool abTestProcessLevel) override;                                       // 73
		virtual bool IsCreature() override;                                                                               // 87
		virtual float GetTurningSpeed() override;                                                                         // D5
		virtual TESRace* GetRace() override;                                                                              // DF
		virtual float GetReach() override;                                                                                // E0
		virtual void SetRagDoll(bool abFound) override;                                                                   // E2
		virtual bool HasRagDoll() override;                                                                               // E3
		virtual ACTOR_TYPE GetActorType() override;                                                                       // E4
		virtual void SetActorValue(ActorValue_Index aiWhich, float afValue) override;                                     // E5
		virtual void SetActorValue(ActorValue_Index aiWhich, std::int32_t aiValue) override;                              // E6
		virtual void TempModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker) override;       // E7
		virtual void PermanentModActorValue(ActorValue_Index aiWhich, float a_arg2, Actor* a_arg3) override;              // E8
		virtual void PermanentModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker) override;  // E9
		virtual void DamageModActorValue(ActorValue_Index aiWhich, float a_arg2, Actor* a_arg3) override;                 // EA
		virtual void DamageModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue, Actor* apAttacker) override;     // EB
		virtual void ModActorBaseValue(ActorValue_Index aiWhich, float afValue) override;                                 // EC
		virtual void ModActorBaseValue(ActorValue_Index aiWhich, std::int32_t aiValue) override;                          // ED
		virtual void ResetArmorRating() override;                                                                         // F1
		virtual float GetArmorRating() override;                                                                          // 10F
		virtual float GetArmorThreshold() override;                                                                       // 111
		virtual float CalculateWalkSpeed() override;                                                                      // 116
		virtual float CalculateRunSpeed() override;                                                                       // 117

		Creature* ctor()
		{
			using func_t = Creature*(__thiscall*)(Creature*);
			static REL::Relocation<func_t> func{ Offsets::Creature::ctor };
			return func(this);
		}

		Creature* ctor(bool abadd)
		{
			using func_t = Creature*(__thiscall*)(Creature*, bool);
			static REL::Relocation<func_t> func{ Offsets::Creature::ctor_1 };
			return func(this, abadd);
		}

		float GetWeaponSkill()
		{
			using func_t = decltype(&Creature::GetWeaponSkill);
			static REL::Relocation<func_t> func{ Offsets::Creature::GetWeaponSkill };
			return func(this);
		}

		bool FindRagDoll(NiAVObject* apObject)
		{
			using func_t = decltype(&Creature::FindRagDoll);
			static REL::Relocation<func_t> func{ Offsets::Creature::FindRagDoll };
			return func(this, apObject);
		}

		void CheckMissingLimbs()
		{
			using func_t = decltype(&Creature::CheckMissingLimbs);
			static REL::Relocation<func_t> func{ Offsets::Creature::CheckMissingLimbs };
			func(this);
		}

	private:
		ActorValue_Index MapActorValue(ActorValue_Index aiWhich)
		{
			using func_t = decltype(&Creature::MapActorValue);
			static REL::Relocation<func_t> func{ Offsets::Creature::MapActorValue };
			return func(this, aiWhich);
		}

	public:
		// members
		bool         bRagDoll;         // 1B4
		std::uint8_t pad1B5[0x3];      // 1B5
		float        fArmorRating;     // 1B8
		float        fArmorThreshold;  // 1BC
	};
	static_assert(sizeof(Creature) == 0x1C0);
}
