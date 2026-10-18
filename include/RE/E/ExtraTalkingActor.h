#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class BGSTalkingActivator;
	class MobileObject;
	class TESObjectREFR;

	class ExtraTalkingActor :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraTalkingActor };
		static constexpr auto VTABLE{ VTABLE::ExtraTalkingActor };

		// override (BSExtraData)
		virtual ~ExtraTalkingActor() = default;  // 00

		MobileObject* CreateLocalMobileObjectCopy(BGSTalkingActivator* apTalkact, TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraTalkingActor::CreateLocalMobileObjectCopy);
			static REL::Relocation<func_t> func{ Offsets::ExtraTalkingActor::CreateLocalMobileObjectCopy };
			return func(this, apTalkact, apRef);
		}

		ExtraTalkingActor* ctor(BGSTalkingActivator* apTalkAct, TESObjectREFR* apRef)
		{
			using func_t = ExtraTalkingActor*(__thiscall*)(ExtraTalkingActor*, BGSTalkingActivator*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraTalkingActor::ctor };
			return func(this, apTalkAct, apRef);
		}

	public:
		// members
		MobileObject* pTalkObject;  // 0C
	};
	static_assert(sizeof(ExtraTalkingActor) == 0x10);
}
