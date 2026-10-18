#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESObjectACTI.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BGSVoiceType;
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class BGSTalkingActivator :
		public TESObjectACTI  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSTalkingActivator };
		static constexpr auto VTABLE{ VTABLE::BGSTalkingActivator };

		// override (TESObjectACTI)
		virtual ~BGSTalkingActivator() = default;                                                                                                                        // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                         // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                               // 1C
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		// add
		virtual bool GetDangerous();             // 60
		virtual bool GetReflectedByAutoWater();  // 61

		bool IsRadioStation()
		{
			using func_t = bool (BGSTalkingActivator::*)();
			static REL::Relocation<func_t> func{ Offsets::BGSTalkingActivator::IsRadioStation };
			return func(this);
		}

		static bool IsRadioStation(TESForm* apForm, std::int32_t aiData)
		{
			using func_t = bool(__cdecl*)(TESForm*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSTalkingActivator::IsRadioStation_1 };
			return func(apForm, aiData);
		}

		static bool IsNonPipboyRadioStation(TESForm* apForm, std::int32_t aiData)
		{
			using func_t = decltype(&BGSTalkingActivator::IsNonPipboyRadioStation);
			static REL::Relocation<func_t> func{ Offsets::BGSTalkingActivator::IsNonPipboyRadioStation };
			return func(apForm, aiData);
		}

		static void AddRadioStation(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSTalkingActivator::AddRadioStation);
			static REL::Relocation<func_t> func{ Offsets::BGSTalkingActivator::AddRadioStation };
			func(apRef);
		}

		static void GetRadioStationsInRangeOfRef(TESObjectREFR* apListenRef, BSSimpleList<TESObjectREFR*>* apOutList, BSSimpleList<float>* apDistancesList)
		{
			using func_t = decltype(&BGSTalkingActivator::GetRadioStationsInRangeOfRef);
			static REL::Relocation<func_t> func{ Offsets::BGSTalkingActivator::GetRadioStationsInRangeOfRef };
			func(apListenRef, apOutList, apDistancesList);
		}

	public:
		// members
		TESObjectREFR* pTempRef;    // 90
		BGSVoiceType*  pVoiceType;  // 94
	};
	static_assert(sizeof(BGSTalkingActivator) == 0x98);
}
