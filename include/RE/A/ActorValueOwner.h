#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class TESForm;

	class __declspec(novtable) ActorValueOwner
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorValueOwner };
		static constexpr auto VTABLE{ VTABLE::ActorValueOwner };

		// add
		virtual std::int32_t GetBaseActorValue(ActorValue_Index aiWhich);       // 00
		virtual float GetBaseActorFloatValue(ActorValue_Index aiWhich);         // 01
		virtual std::int32_t GetActorValue(ActorValue_Index aiWhich);           // 02
		virtual float GetActorFloatValue(ActorValue_Index aiWhich);             // 03
		virtual float GetTemporaryModifier(ActorValue_Index aiWhich);           // 04
		virtual float GetDamageModifier(ActorValue_Index aiWhich);              // 05
		virtual float GetPermanentModifier(ActorValue_Index aiWhich);           // 06
		virtual std::int32_t GetPermanentActorValue(ActorValue_Index aiWhich);  // 07
		virtual float GetPermanentActorFloatValue(ActorValue_Index aiWhich);    // 08
		virtual TESForm* GetAsForm();                                           // 09
		virtual std::uint16_t GetActorLevel();                                  // 0A

		ActorValueOwner* ctor()
		{
			using func_t = ActorValueOwner*(__thiscall*)(ActorValueOwner*);
			static REL::Relocation<func_t> func{ Offsets::ActorValueOwner::ctor };
			return func(this);
		}

		std::int32_t GetClampedActorValue(ActorValue_Index aiWhich)
		{
			using func_t = decltype(&ActorValueOwner::GetClampedActorValue);
			static REL::Relocation<func_t> func{ Offsets::ActorValueOwner::GetClampedActorValue };
			return func(this, aiWhich);
		}

		float GetClampedActorFloatValue(ActorValue_Index aiWhich)
		{
			using func_t = decltype(&ActorValueOwner::GetClampedActorFloatValue);
			static REL::Relocation<func_t> func{ Offsets::ActorValueOwner::GetClampedActorFloatValue };
			return func(this, aiWhich);
		}
	};
}
