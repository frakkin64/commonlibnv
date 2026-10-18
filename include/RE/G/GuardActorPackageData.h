#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPackageData.h"
#include "RE/P/PTYPE.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectREFR;

	class GuardActorPackageData :
		public ActorPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::GuardActorPackageData };
		static constexpr auto VTABLE{ VTABLE::GuardActorPackageData };

		enum class GUARD_STATE : std::int32_t
		{
			kGUARD_STATE_INIT = 0x0,
			kGUARD_STATE_IDLE = 0x1,
			kGUARD_STATE_WAIT_TO_ATTACK = 0x2,
		};

		// override (ActorPackageData)
		virtual ~GuardActorPackageData() = default;                           // 00
		virtual void HandleDeletedReference(TESObjectREFR* a_arg1) override;  // 01
		virtual PTYPE GetPackageType() override;                              // 02
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;            // 03
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;            // 04
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;        // 05

		void ResetWarningTimer()
		{
			using func_t = decltype(&GuardActorPackageData::ResetWarningTimer);
			static REL::Relocation<func_t> func{ Offsets::GuardActorPackageData::ResetWarningTimer };
			func(this);
		}

		GuardActorPackageData* ctor()
		{
			using func_t = GuardActorPackageData*(__thiscall*)(GuardActorPackageData*);
			static REL::Relocation<func_t> func{ Offsets::GuardActorPackageData::ctor };
			return func(this);
		}

	public:
		// members
		GuardActorPackageData::GUARD_STATE eState;             // 04
		Actor*                             pGuardWarnedActor;  // 08
		std::int32_t                       iWarningCount;      // 0C
		float                              fGuardTimer;        // 10
	};
	static_assert(sizeof(GuardActorPackageData) == 0x14);
}
