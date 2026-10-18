#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/TESRegionData.h"

namespace RE
{
	class TESFile;

	class TESRegionDataMap :
		public TESRegionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataMap };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataMap };

		// override (TESRegionData)
		virtual ~TESRegionDataMap() = default;                                               // 00
		virtual void Save() override;                                                        // 01
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2) override;  // 07

		// add
		virtual bool LoadRegionDataMap(TESFile* apFile);         // 09
		virtual const char* GetMapName();                        // 0B (reversed overload group)
		virtual void GetMapName(BSStringT<char>* a_arg1) const;  // 0A (reversed overload group)
		virtual bool SetMapName(char const* apMapName);          // 0C

		TESRegionDataMap* ctor()
		{
			using func_t = TESRegionDataMap*(__thiscall*)(TESRegionDataMap*);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataMap::ctor };
			return func(this);
		}

		TESRegionDataMap* ctor(TESRegionDataMap const& aData)
		{
			using func_t = TESRegionDataMap*(__thiscall*)(TESRegionDataMap*, TESRegionDataMap const&);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataMap::ctor_1 };
			return func(this, aData);
		}

	public:
		// members
		BSStringT<char> MapName;  // 08
	};
	static_assert(sizeof(TESRegionDataMap) == 0x10);
}
