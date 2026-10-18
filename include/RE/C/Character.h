#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTOR_TYPE.h"
#include "RE/A/Actor.h"
#include "RE/C/COMBAT_WEAPON_TYPE.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BipedAnim;
	class FurnitureMark;
	class ItemChange;
	class TESObjectREFR;
	class TESRace;
	class TrespassPackage;

	class Character :
		public Actor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Character };
		static constexpr auto VTABLE{ VTABLE::Character };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kACHR_ID };

		// override (Actor)
		virtual ~Character() = default;                                                                                                           // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                        // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                      // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                    // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                      // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                      // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                  // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                                      // 1A
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                        // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                                                      // 1D
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                // 21
		virtual bool IsChild(bool abIgnoreHeight) override;                                                                                       // 68
		virtual BipedAnim* GetBiped() override;                                                                                                   // 7A
		virtual void SetBiped(BipedAnim* apBiped) override;                                                                                       // 7C
		virtual bool IsNpc() override;                                                                                                            // 86
		virtual void Update(float afDelta) override;                                                                                              // BE
		virtual bool IsActoraGuard() override;                                                                                                    // C1
		virtual void SetActorGuard(bool abGuard) override;                                                                                        // C2
		virtual void SetEquippedWeight(float afvalue) override;                                                                                   // C3
		virtual float GetTurningSpeed() override;                                                                                                 // D5
		virtual void InitiateSandmanPackage(Actor* apTarget, TESObjectREFR* pfurniture, FurnitureMark* aMarker, std::uint8_t auiIndex) override;  // DD
		virtual TESRace* GetRace() override;                                                                                                      // DF
		virtual ACTOR_TYPE GetActorType() override;                                                                                               // E4
		virtual ItemChange* GetBestWeapon(COMBAT_WEAPON_TYPE aeType) override;                                                                    // EF
		virtual ItemChange* GetBestAmmo() override;                                                                                               // F0
		virtual void ResetArmorRating() override;                                                                                                 // F1
		virtual bool InitiateTresPassPackage(TrespassPackage* apPack) override;                                                                   // 100
		virtual void InitiateSpectator() override;                                                                                                // 103
		virtual float GetArmorRating() override;                                                                                                  // 10F
		virtual float GetArmorThreshold() override;                                                                                               // 111
		virtual std::int32_t GetAttackDamage() override;                                                                                          // 112
		virtual bool IsTresPassing() override;                                                                                                    // 113
		virtual void PrecacheData() override;                                                                                                     // 131

		// add
		virtual void InitiateCannibal(Actor* apTarget);  // 137
		virtual void InitiateDisMountHorsePackage();     // 138

		Character* ctor()
		{
			using func_t = Character*(__thiscall*)(Character*);
			static REL::Relocation<func_t> func{ Offsets::Character::ctor };
			return func(this);
		}

		float GetClothingValue()
		{
			using func_t = decltype(&Character::GetClothingValue);
			static REL::Relocation<func_t> func{ Offsets::Character::GetClothingValue };
			return func(this);
		}

		void Reset3D()
		{
			using func_t = decltype(&Character::Reset3D);
			static REL::Relocation<func_t> func{ Offsets::Character::Reset3D };
			func(this);
		}

	public:
		// members
		BipedAnim*    pBiped;           // 1B4
		float         fArmorRating;     // 1B8
		float         fArmorThreshold;  // 1BC
		bool          bTrespassing;     // 1C0
		bool          bGuard;           // 1C1
		std::uint16_t pad1C2;           // 1C2
		float         fequippedweight;  // 1C4
	};
	static_assert(sizeof(Character) == 0x1C8);
}
