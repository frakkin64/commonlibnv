#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESPackage.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class MobileObject;
	class TESForm;

	class TrespassPackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TrespassPackage };
		static constexpr auto VTABLE{ VTABLE::TrespassPackage };

		// override (TESPackage)
		virtual ~TrespassPackage() = default;                                     // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 19
		virtual std::uint16_t GetSaveSize() override;                             // 53
		virtual void SaveGame_54() override;                                      // 54
		virtual void LoadGame_55() override;                                      // 55
		virtual void InitLoadGame_56() override;                                  // 56
		virtual bool IsPackageOwner(MobileObject* apOwner) override;              // 57

		TrespassPackage* ctor(Actor* apCriminal, TESForm* apOwner, TESForm* apObjectTrespassed, std::int32_t aiwarninglevel)
		{
			using func_t = TrespassPackage*(__thiscall*)(TrespassPackage*, Actor*, TESForm*, TESForm*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::TrespassPackage::ctor };
			return func(this, apCriminal, apOwner, apObjectTrespassed, aiwarninglevel);
		}

	public:
		// members
		float        fwarningtimer;  // 80
		std::int32_t iwarning;       // 84
		TESForm*     pOwner;         // 88
		TESForm*     pObjectOwned;   // 8C
		std::int32_t iCrimeNumber;   // 90
		std::int32_t iwarninglevel;  // 94
		std::int32_t iNumberActors;  // 98
	};
	static_assert(sizeof(TrespassPackage) == 0x9C);
}
