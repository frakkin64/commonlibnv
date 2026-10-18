#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/C/CLASS_DATA.h"
#include "RE/T/TESAttributes.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;

	class TESClass :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESDescription,  // 24
		public TESTexture,  // 2C
		public TESAttributes  // 38
	{
	public:
		static constexpr auto RTTI{ RTTI::TESClass };
		static constexpr auto VTABLE{ VTABLE::TESClass };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCLAS_ID };

		// override (TESForm)
		virtual ~TESClass() = default;                                        // 04
		virtual void ClearData() override;                                    // 05
		virtual bool Load(TESFile* apFile) override;                          // 08
		virtual void Save() override;                                         // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 1C
		virtual void Copy(TESForm* apCopy) override;                          // 42
		virtual bool Compare(TESForm* apCopy) override;                       // 43

		bool IsTagSkill(ActorValue_Index aiSkill)
		{
			using func_t = decltype(&TESClass::IsTagSkill);
			static REL::Relocation<func_t> func{ Offsets::TESClass::IsTagSkill };
			return func(this, aiSkill);
		}

		TESClass* ctor()
		{
			using func_t = TESClass*(__thiscall*)(TESClass*);
			static REL::Relocation<func_t> func{ Offsets::TESClass::ctor };
			return func(this);
		}

		bool IsGuard()
		{
			using func_t = decltype(&TESClass::IsGuard);
			static REL::Relocation<func_t> func{ Offsets::TESClass::IsGuard };
			return func(this);
		}

		void SetTagSkill(std::int32_t aiIndex, ActorValue_Index aeSkill)
		{
			using func_t = decltype(&TESClass::SetTagSkill);
			static REL::Relocation<func_t> func{ Offsets::TESClass::SetTagSkill };
			func(this, aiIndex, aeSkill);
		}

		void SaveGame()
		{
			using func_t = void (TESClass::*)();
			static REL::Relocation<func_t> func{ Offsets::TESClass::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (TESClass::*)();
			static REL::Relocation<func_t> func{ Offsets::TESClass::LoadGame };
			func(this);
		}

	public:
		// members
		CLASS_DATA data;  // 44
	};
	static_assert(sizeof(TESClass) == 0x60);
}
