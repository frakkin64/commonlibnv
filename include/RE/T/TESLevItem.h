#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundObject.h"
#include "RE/T/TESLeveledList.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;
	class TESForm;

	class TESLevItem :
		public TESBoundObject,  // 00
		public TESLeveledList  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLevItem };
		static constexpr auto VTABLE{ VTABLE::TESLevItem };

		// override (TESBoundObject)
		virtual ~TESLevItem() = default;                                      // 04
		virtual bool Load(TESFile* apFile) override;                          // 08
		virtual void Save() override;                                         // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 1C
		virtual void InitItem() override;                                     // 22
		virtual void Copy(TESForm* apCopy) override;                          // 42
		virtual bool Compare(TESForm* apCopy) override;                       // 43
	};
	static_assert(sizeof(TESLevItem) == 0x4C);
}
