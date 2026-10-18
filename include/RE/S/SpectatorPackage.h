#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SpectatorThreatInfo.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class TESForm;

	class SpectatorPackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SpectatorPackage };
		static constexpr auto VTABLE{ VTABLE::SpectatorPackage };

		// override (TESPackage)
		virtual ~SpectatorPackage() = default;                                    // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 19
		virtual void Copy(TESForm* apCopy) override;                              // 42
		virtual std::uint16_t GetSaveSize() override;                             // 53
		virtual void SaveGame_54() override;                                      // 54
		virtual void LoadGame_55() override;                                      // 55

		SpectatorPackage* ctor()
		{
			using func_t = SpectatorPackage*(__thiscall*)(SpectatorPackage*);
			static REL::Relocation<func_t> func{ Offsets::SpectatorPackage::ctor };
			return func(this);
		}

		void MakeCombatComment(Actor* apActor, bool bflag)
		{
			using func_t = decltype(&SpectatorPackage::MakeCombatComment);
			static REL::Relocation<func_t> func{ Offsets::SpectatorPackage::MakeCombatComment };
			func(this, apActor, bflag);
		}

		void Update(Actor* pOwner)
		{
			using func_t = decltype(&SpectatorPackage::Update);
			static REL::Relocation<func_t> func{ Offsets::SpectatorPackage::Update };
			func(this, pOwner);
		}

		void AddThreatFromActorToCombatTarget(Actor& aSourceActor)
		{
			using func_t = decltype(&SpectatorPackage::AddThreatFromActorToCombatTarget);
			static REL::Relocation<func_t> func{ Offsets::SpectatorPackage::AddThreatFromActorToCombatTarget };
			func(this, aSourceActor);
		}

	private:
		void ComputeCenterPoint()
		{
			using func_t = decltype(&SpectatorPackage::ComputeCenterPoint);
			static REL::Relocation<func_t> func{ Offsets::SpectatorPackage::ComputeCenterPoint };
			func(this);
		}

	public:
		// members
		std::uint32_t                            iLastPathRequestTime;  // 80
		float                                    fTimer;                // 84
		float                                    fConversationTimer;    // 88
		float                                    fEventRadius;          // 8C
		bool                                     bFlagCompleted;        // 90
		std::uint8_t                             pad91[0x3];            // 91
		NiPoint3                                 EventCenter;           // 94
		BSSimpleArray<SpectatorThreatInfo, 1024> ThreatInfoList;        // A0
		NiPointer<NiAVObject>                    spDebugGeometry;       // B0
	};
	static_assert(sizeof(SpectatorPackage) == 0xB4);
}
