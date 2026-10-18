#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/A/ActorValue_Section.h"
#include "RE/B/BSStringT.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"

namespace RE
{
	class TESFile;

	class ActorValueInfo :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESDescription,  // 24
		public TESIcon  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorValueInfo };
		static constexpr auto VTABLE{ VTABLE::ActorValueInfo };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kAVIF_ID };

		// override (TESForm)
		virtual ~ActorValueInfo() = default;             // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		static std::uint32_t GetActorValueFormID(ActorValue_Index aiWhich)
		{
			using func_t = decltype(&ActorValueInfo::GetActorValueFormID);
			static REL::Relocation<func_t> func{ Offsets::ActorValueInfo::GetActorValueFormID };
			return func(aiWhich);
		}

		ActorValueInfo* ctor(ActorValue_Index aiWhich, char* apScriptName)
		{
			using func_t = ActorValueInfo*(__thiscall*)(ActorValueInfo*, ActorValue_Index, char*);
			static REL::Relocation<func_t> func{ Offsets::ActorValueInfo::ctor };
			return func(this, aiWhich, apScriptName);
		}

	public:
		// members
		char*              sScriptName;               // 38
		BSStringT<char>    sAbbreviation;             // 3C
		std::uint32_t      uFlags;                    // 44
		ActorValue_Section eAVType;                   // 48
		void*              pDerivationFunction;       // 4C
		void*              pMappingFunction;          // 50
		void*              pModifiedCallback;         // 54
		std::int32_t       iNumDependentActorValues;  // 58
		ActorValue_Index   DependentActorValues[15];  // 5C
		std::int32_t       iEnumCount;                // 98
		char*              sEnumNames[10];            // 9C
	};
	static_assert(sizeof(ActorValueInfo) == 0xC4);
}
