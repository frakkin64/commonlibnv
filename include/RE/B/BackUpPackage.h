#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectCELL;
	class TESObjectREFR;

	class BackUpPackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BackUpPackage };
		static constexpr auto VTABLE{ VTABLE::BackUpPackage };

		// override (TESPackage)
		virtual ~BackUpPackage() = default;                                       // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 19
		virtual std::uint16_t GetSaveSize() override;                             // 53
		virtual void SaveGame_54() override;                                      // 54
		virtual void LoadGame_55() override;                                      // 55
		virtual void InitLoadGame_56() override;                                  // 56

		void InitializeBackUpPackage(Actor* apActor, TESObjectCELL* apcell, TESObjectREFR* apRef)
		{
			using func_t = decltype(&BackUpPackage::InitializeBackUpPackage);
			static REL::Relocation<func_t> func{ Offsets::BackUpPackage::InitializeBackUpPackage };
			func(this, apActor, apcell, apRef);
		}

		static NiPoint3 CalculateBackUpPointInterior(Actor* result, TESObjectREFR* apActor)
		{
			using func_t = decltype(&BackUpPackage::CalculateBackUpPointInterior);
			static REL::Relocation<func_t> func{ Offsets::BackUpPackage::CalculateBackUpPointInterior };
			return func(result, apActor);
		}

		static NiPoint3 CalculateBackUpPointExterior(Actor* result, TESObjectREFR* apActor)
		{
			using func_t = decltype(&BackUpPackage::CalculateBackUpPointExterior);
			static REL::Relocation<func_t> func{ Offsets::BackUpPackage::CalculateBackUpPointExterior };
			return func(result, apActor);
		}

	public:
		// members
		NiPoint3 pBackUpPoint;  // 80
	};
}
