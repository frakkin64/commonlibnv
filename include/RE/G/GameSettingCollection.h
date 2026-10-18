#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"
#include "RE/S/Setting.h"
#include "RE/S/SettingCollectionMap.h"

namespace RE
{
	class TESFile;

	class GameSettingCollection :
		public SettingCollectionMap<Setting>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::GameSettingCollection };
		static constexpr auto VTABLE{ VTABLE::GameSettingCollection };

		// override (SettingCollectionMap<Setting>)
		virtual ~GameSettingCollection() = default;                                    // 00
		virtual std::uint32_t GetViewerStrings(NiTPrimitiveArray<char*>* apStringsA);  // 03
		virtual bool Open(bool abWrite);                                               // 06
		virtual bool Close();                                                          // 07

		// add
		virtual bool ReadSetting_0A(TESFile* apFile, char const* apKey);  // 0A

		[[nodiscard]] static GameSettingCollection* GetSingleton() noexcept
		{
			static REL::Relocation<GameSettingCollection**> singleton{ Offsets::GameSettingCollection::pSingleton };
			return *singleton;
		}

		GameSettingCollection* ctor()
		{
			using func_t = GameSettingCollection*(__thiscall*)(GameSettingCollection*);
			static REL::Relocation<func_t> func{ Offsets::GameSettingCollection::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(GameSettingCollection) == 0x120);
}
