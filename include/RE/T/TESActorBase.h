#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValueOwner.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSTouchSpellForm.h"
#include "RE/S/SEX.h"
#include "RE/T/TESAIForm.h"
#include "RE/T/TESActorBaseData.h"
#include "RE/T/TESAnimation.h"
#include "RE/T/TESAttributes.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESContainer.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESHealthForm.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESSpellList.h"

namespace RE
{
	class BGSBodyPartData;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESCombatStyle;
	class TESForm;
	class TESObjectREFR;

	class TESActorBase :
		public TESBoundAnimObject,  // 00
		public TESActorBaseData,  // 30
		public TESContainer,  // 64
		public BGSTouchSpellForm,  // 70
		public TESSpellList,  // 7C
		public TESAIForm,  // 90
		public TESHealthForm,  // B0
		public TESAttributes,  // B8
		public TESAnimation,  // C4
		public TESFullName,  // D0
		public TESModel,  // DC
		public TESScriptableForm,  // F4
		public ActorValueOwner,  // 100
		public BGSDestructibleObjectForm  // 104
	{
	public:
		static constexpr auto RTTI{ RTTI::TESActorBase };
		static constexpr auto VTABLE{ VTABLE::TESActorBase };

		// override (TESBoundAnimObject)
		virtual ~TESActorBase() = default;                                                    // 04
		virtual void AddChange(std::int32_t aiChangeFlags) override;                          // 12
		virtual void RemoveChange(std::int32_t aiChangeFlags) override;                       // 13
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                    // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                  // 1D
		virtual bool IsActorBase() override;                                                  // 3E
		virtual bool IsAutoCalc() override;                                                   // 51
		virtual void SetAutoCalc(bool bAC) override;                                          // 52

		// add
		virtual BGSBodyPartData* GetBodyPartData();                                  // 60
		virtual void SetBodyPartData(BGSBodyPartData* apData);                       // 61
		virtual TESCombatStyle* GetCombatStyle();                                    // 62
		virtual void SetCombatStyle(TESCombatStyle* apCombatStyle);                  // 63
		virtual void SetActorValue(ActorValue_Index aiWhich, std::int32_t aiValue);  // 65 (reversed overload group)
		virtual void SetActorValue(ActorValue_Index aiWhich, float afValue);         // 64 (reversed overload group)
		virtual void ModActorValue(ActorValue_Index aiWhich, std::int32_t aiValue);  // 66
		virtual void Unk_67();                                                       // 67

		std::int32_t GetHealth()
		{
			using func_t = decltype(&TESActorBase::GetHealth);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::GetHealth };
			return func(this);
		}

		bool DoesSwim()
		{
			using func_t = decltype(&TESActorBase::DoesSwim);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::DoesSwim };
			return func(this);
		}

		bool FightsInWater()
		{
			using func_t = decltype(&TESActorBase::FightsInWater);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::FightsInWater };
			return func(this);
		}

		bool DoesWalk()
		{
			using func_t = decltype(&TESActorBase::DoesWalk);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::DoesWalk };
			return func(this);
		}

		SEX GetSex() const
		{
			using func_t = decltype(&TESActorBase::GetSex);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::GetSex };
			return func(this);
		}

		float GetDesirability(TESForm* apForm)
		{
			using func_t = decltype(&TESActorBase::GetDesirability);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::GetDesirability };
			return func(this, apForm);
		}

		bool ShouldRunInitDefaultWorn(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESActorBase::ShouldRunInitDefaultWorn);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::ShouldRunInitDefaultWorn };
			return func(this, apRef);
		}

		void Reset3DForLoadedActors(std::uint8_t acResetFlags)
		{
			using func_t = decltype(&TESActorBase::Reset3DForLoadedActors);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::Reset3DForLoadedActors };
			func(this, acResetFlags);
		}

		TESActorBase* ctor()
		{
			using func_t = TESActorBase*(__thiscall*)(TESActorBase*);
			static REL::Relocation<func_t> func{ Offsets::TESActorBase::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESActorBase) == 0x10C);
}
