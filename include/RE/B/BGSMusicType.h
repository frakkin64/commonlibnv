#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESSoundFile.h"

namespace RE
{
	class TESFile;

	class BGSMusicType :
		public TESForm,  // 00
		public TESSoundFile  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMusicType };
		static constexpr auto VTABLE{ VTABLE::BGSMusicType };

		class MusicFileEntry;

		class MusicFileEntry
		{
		public:
			// members
			char cFilename[260];  // 00?
		};

		// override (TESForm)
		virtual ~BGSMusicType() = default;               // 04
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		void BuildFileList()
		{
			using func_t = decltype(&BGSMusicType::BuildFileList);
			static REL::Relocation<func_t> func{ Offsets::BGSMusicType::BuildFileList };
			func(this);
		}

	public:
		// members
		float                                       fAttenuation;    // 24
		BSSimpleList<BGSMusicType::MusicFileEntry*> pMusicFileList;  // 28
		std::uint32_t                               iLastSelection;  // 30
	};
	static_assert(sizeof(BGSMusicType) == 0x34);
}
