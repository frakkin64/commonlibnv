#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleList.h"
#include "RE/E/EffectArchetypes_ArchetypeID.h"
#include "RE/M/MagicSystem_ProjectileType.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class TESEffectShader;
	class TESFile;
	class TESObjectLIGH;
	class TESSound;

	class EffectSetting :
		public TESForm,  // 00
		public TESModel,  // 18
		public TESDescription,  // 30
		public TESFullName,  // 38
		public TESIcon  // 44
	{
	public:
		static constexpr auto RTTI{ RTTI::EffectSetting };
		static constexpr auto VTABLE{ VTABLE::EffectSetting };

		class EffectSettingData;

		enum class EffectFlag : std::int32_t
		{
			kDISABLED = 0x1,
			kASSOCIATED_ACTORVALUE = 0x2,
			kASSOCIATED_CREATURE = 0x4,
			kASSOCIATED_NPC = 0x8,
			kASSOCIATED_WEAPON = 0x10,
			kASSOCIATED_ARMOR = 0x20,
			kASSOCIATED_SCRIPT = 0x40,
		};

		class EffectSettingData
		{
		public:
			void Endian()
			{
				using func_t = decltype(&EffectSettingData::Endian);
				static REL::Relocation<func_t> func{ Offsets::EffectSetting_EffectSettingData::Endian };
				func(this);
			}

		public:
			// members
			std::uint32_t                iFlags;                 // 00
			float                        fBaseCost;              // 04
			TESForm*                     pAssociatedItem;        // 08
			ActorValue_Index             iAssociatedSkill;       // 0C
			ActorValue_Index             iResistVariable;        // 10
			std::int16_t                 iNumCounterEffects;     // 14
			std::uint16_t                pad16;                  // 16
			TESObjectLIGH*               pLight;                 // 18
			float                        fSpeed;                 // 1C
			TESEffectShader*             pEffectShader;          // 20
			TESEffectShader*             pEnchantEffect;         // 24
			TESSound*                    pCastSound;             // 28
			TESSound*                    pBoltSound;             // 2C
			TESSound*                    pHitSound;              // 30
			TESSound*                    pAreaSound;             // 34
			float                        fCEEnchantFactor;       // 38
			float                        fCEBarterFactor;        // 3C
			EffectArchetypes_ArchetypeID eArchetype;             // 40
			ActorValue_Index             eAssociatedActorValue;  // 44
		};
		static_assert(sizeof(EffectSettingData) == 0x48);

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kMGEF_ID };

		// override (TESForm)
		virtual ~EffectSetting() = default;              // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43
		virtual char* GetObjectTypeName() override;      // 4B

		bool IsAssociatedActorValueUsed()
		{
			using func_t = decltype(&EffectSetting::IsAssociatedActorValueUsed);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsAssociatedActorValueUsed };
			return func(this);
		}

		bool IsFlagSet(EffectSetting::EffectFlag aiFlag)
		{
			using func_t = decltype(&EffectSetting::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsFlagSet };
			return func(this, aiFlag);
		}

		bool IsAssociatedFormUsed()
		{
			using func_t = decltype(&EffectSetting::IsAssociatedFormUsed);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsAssociatedFormUsed };
			return func(this);
		}

		EffectSetting* ctor()
		{
			using func_t = EffectSetting*(__thiscall*)(EffectSetting*);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::ctor };
			return func(this);
		}

		TESEffectShader* GetEffectShader()
		{
			using func_t = decltype(&EffectSetting::GetEffectShader);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::GetEffectShader };
			return func(this);
		}

		MagicSystem_ProjectileType GetProjectileType()
		{
			using func_t = decltype(&EffectSetting::GetProjectileType);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::GetProjectileType };
			return func(this);
		}

		std::int32_t QueueAssociatedItem()
		{
			using func_t = decltype(&EffectSetting::QueueAssociatedItem);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::QueueAssociatedItem };
			return func(this);
		}

		bool IsAssociatedItemLoaded()
		{
			using func_t = decltype(&EffectSetting::IsAssociatedItemLoaded);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsAssociatedItemLoaded };
			return func(this);
		}

		bool IsAssociatedItemQueued()
		{
			using func_t = decltype(&EffectSetting::IsAssociatedItemQueued);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsAssociatedItemQueued };
			return func(this);
		}

		std::int32_t QueueEffect()
		{
			using func_t = decltype(&EffectSetting::QueueEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::QueueEffect };
			return func(this);
		}

		bool IsEffectLoaded()
		{
			using func_t = decltype(&EffectSetting::IsEffectLoaded);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsEffectLoaded };
			return func(this);
		}

		bool IsEffectQueued()
		{
			using func_t = decltype(&EffectSetting::IsEffectQueued);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsEffectQueued };
			return func(this);
		}

		bool ShouldNegateMagnitude(ActorValue_Index aeActorValue)
		{
			using func_t = decltype(&EffectSetting::ShouldNegateMagnitude);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::ShouldNegateMagnitude };
			return func(this, aeActorValue);
		}

		bool IsScriptEffect()
		{
			using func_t = decltype(&EffectSetting::IsScriptEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::IsScriptEffect };
			return func(this);
		}

		EffectArchetypes_ArchetypeID GetEffectArchetype()
		{
			using func_t = decltype(&EffectSetting::GetEffectArchetype);
			static REL::Relocation<func_t> func{ Offsets::EffectSetting::GetEffectArchetype };
			return func(this);
		}

	public:
		// members
		void*                            pFilterValidationFunction;   // 50
		void*                            pFilterValidationItem;       // 54
		EffectSetting::EffectSettingData data;                        // 58
		BSSimpleList<EffectSetting*>     counterEffects;              // A0
		std::int32_t                     iEffectLoadedCount;          // A8
		std::int32_t                     iAssociatedItemLoadedCount;  // AC
	};
	static_assert(sizeof(EffectSetting) == 0xB0);
}
