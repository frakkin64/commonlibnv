#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESPackageData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESForm;

	class TESPatrolPackageData :
		public TESPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESPatrolPackageData };
		static constexpr auto VTABLE{ VTABLE::TESPatrolPackageData };

		// override (TESPackageData)
		virtual ~TESPatrolPackageData() = default;                        // 00
		virtual void Copy(TESPackageData* __formal) override;             // 01
		virtual bool Compare(TESPackageData* __formal) override;          // 02
		virtual void Save() override;                                     // 03
		virtual void InitItem(TESForm* __formal) override;                // 04
		virtual void SaveGame(BGSSaveFormBuffer* __formal) override;      // 05
		virtual void LoadGame(BGSLoadFormBuffer* __formal) override;      // 06
		virtual void InitLoadGame(BGSLoadFormBuffer* __formal) override;  // 07

		// members
		bool          bRepeatable;                   // 04
		bool          bStartingLocationAtLinkedRef;  // 05
		std::uint16_t pad06;                         // 06
	};
	static_assert(sizeof(TESPatrolPackageData) == 0x8);
}
