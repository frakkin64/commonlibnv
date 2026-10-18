#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FootIK_DATA.h"
#include "RE/G/GrabIK_DATA.h"
#include "RE/L/LookIK_DATA.h"
#include "RE/P/PoseMatching_DATA.h"
#include "RE/R/RagdollFeedbackData.h"
#include "RE/R/RagdollSaveStruct.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class BGSBodyPartData;
	class TESActorBase;
	class TESFile;

	class BGSRagdoll :
		public TESForm,  // 00
		public TESModel  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSRagdoll };
		static constexpr auto VTABLE{ VTABLE::BGSRagdoll };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kRGDL_ID };

		// override (TESForm)
		virtual ~BGSRagdoll() = default;                 // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSRagdoll* ctor()
		{
			using func_t = BGSRagdoll*(__thiscall*)(BGSRagdoll*);
			static REL::Relocation<func_t> func{ Offsets::BGSRagdoll::ctor };
			return func(this);
		}

	public:
		// members
		RagdollSaveStruct   SaveStruct;        // 30
		std::uint16_t       pad3E;             // 3E
		RagdollFeedbackData FeedbackData;      // 40
		FootIK_DATA         FootIKData;        // 90
		LookIK_DATA         LookIKData;        // D0
		GrabIK_DATA         GrabIKData;        // F4
		PoseMatching_DATA   PoseMatchingData;  // 118
		std::int32_t        iSkeletonID;       // 13C
		BGSBodyPartData*    pBodyPartData;     // 140
		TESActorBase*       pPreviewActor;     // 144
	};
	static_assert(sizeof(BGSRagdoll) == 0x148);
}
