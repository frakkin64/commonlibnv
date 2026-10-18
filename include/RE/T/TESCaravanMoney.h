#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESValueForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESCaravanMoney :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public BGSMessageIcon,  // 68
		public TESValueForm,  // 78
		public BGSPickupPutdownSounds  // 80
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCaravanMoney };
		static constexpr auto VTABLE{ VTABLE::TESCaravanMoney };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCMNY_ID };

		// override (TESBoundObject)
		virtual ~TESCaravanMoney() = default;                                                 // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool ProcessBeforeSave() override;                                            // 06
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitItem() override;                                                     // 22
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy) override;       // 53

		TESCaravanMoney* ctor()
		{
			using func_t = TESCaravanMoney*(__thiscall*)(TESCaravanMoney*);
			static REL::Relocation<func_t> func{ Offsets::TESCaravanMoney::ctor };
			return func(this);
		}

		TESModelTextureSwap* GetAnteModel(std::int32_t index)
		{
			using func_t = decltype(&TESCaravanMoney::GetAnteModel);
			static REL::Relocation<func_t> func{ Offsets::TESCaravanMoney::GetAnteModel };
			return func(this, index);
		}

	public:
		// members
		TESModelTextureSwap anteModels[2];  // 8C
	};
	static_assert(sizeof(TESCaravanMoney) == 0xCC);
}
