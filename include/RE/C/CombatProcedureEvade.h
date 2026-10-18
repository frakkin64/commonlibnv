#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatProcedure.h"
#include "RE/C/CombatProcedure_COMBAT_PROCEDURES.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class CombatProcedureEvade :
		public CombatProcedure  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatProcedureEvade };
		static constexpr auto VTABLE{ VTABLE::CombatProcedureEvade };

		enum class EVADE_STATE : std::int32_t
		{
			kEVADE_STATE_INITIALIZING = 0x0,
			kEVADE_STATE_EVADING = 0x1,
		};

		// override (CombatProcedure)
		virtual ~CombatProcedureEvade() = default;                                // 00
		virtual void Update() override;                                           // 01
		virtual void Shutdown() override;                                         // 03
		virtual CombatProcedure_COMBAT_PROCEDURES GetType() override;             // 0D
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 0E
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 0F
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 10

		CombatProcedureEvade* ctor(std::int32_t aiLocation)
		{
			using func_t = CombatProcedureEvade*(__thiscall*)(CombatProcedureEvade*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::CombatProcedureEvade::ctor };
			return func(this, aiLocation);
		}

	public:
		// members
		CombatProcedureEvade::EVADE_STATE eState;     // 10
		std::int32_t                      iLocation;  // 14
	};
	static_assert(sizeof(CombatProcedureEvade) == 0x18);
}
