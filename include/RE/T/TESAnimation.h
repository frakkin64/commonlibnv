#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESFile;

	class TESAnimation :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAnimation };
		static constexpr auto VTABLE{ VTABLE::TESAnimation };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		void LoadAnimationChunk(TESAnimation* apAnimation, TESFile* apFile)
		{
			using func_t = decltype(&TESAnimation::LoadAnimationChunk);
			static REL::Relocation<func_t> func{ Offsets::TESAnimation::LoadAnimationChunk };
			func(this, apAnimation, apFile);
		}

		void AddKFFile(char const* apFilename)
		{
			using func_t = decltype(&TESAnimation::AddKFFile);
			static REL::Relocation<func_t> func{ Offsets::TESAnimation::AddKFFile };
			func(this, apFilename);
		}

		bool HasKFFiles()
		{
			using func_t = decltype(&TESAnimation::HasKFFiles);
			static REL::Relocation<func_t> func{ Offsets::TESAnimation::HasKFFiles };
			return func(this);
		}

	public:
		// members
		BSSimpleList<char const*> kfFilenames;  // 04
	};
}
