#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESLeveledList.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class TESActorBase;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESLevCharacter :
		public TESBoundAnimObject,  // 00
		public TESLeveledList,  // 30
		public TESModelTextureSwap  // 4C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLevCharacter };
		static constexpr auto VTABLE{ VTABLE::TESLevCharacter };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLVLN_ID };

		// override (TESBoundAnimObject)
		virtual ~TESLevCharacter() = default;                                 // 04
		virtual bool Load(TESFile* apFile) override;                          // 08
		virtual void Save() override;                                         // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 1C
		virtual void InitItem() override;                                     // 22
		virtual void Copy(TESForm* apCopy) override;                          // 42
		virtual bool Compare(TESForm* apCopy) override;                       // 43
		virtual void UnClone3D(TESObjectREFR* apRequester) override;          // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;   // 5E

		TESLevCharacter* ctor()
		{
			using func_t = TESLevCharacter*(__thiscall*)(TESLevCharacter*);
			static REL::Relocation<func_t> func{ Offsets::TESLevCharacter::ctor };
			return func(this);
		}

	public:
		// members
		TESActorBase* pTemplate;  // 6C
	};
	static_assert(sizeof(TESLevCharacter) == 0x70);
}
