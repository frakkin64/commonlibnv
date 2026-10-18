#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class Crime;
	class TESForm;

	class AlarmPackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AlarmPackage };
		static constexpr auto VTABLE{ VTABLE::AlarmPackage };

		// override (TESPackage)
		virtual ~AlarmPackage() = default;                                        // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 19
		virtual void Copy(TESForm* apCopy) override;                              // 42
		virtual std::uint16_t GetSaveSize() override;                             // 53
		virtual void SaveGame_54() override;                                      // 54
		virtual void LoadGame_55() override;                                      // 55

		// members
		BSSimpleList<Crime*> Crimes;  // 80
	};
	static_assert(sizeof(AlarmPackage) == 0x88);
}
