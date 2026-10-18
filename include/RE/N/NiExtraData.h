#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiExtraData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiExtraData };
		static constexpr auto VTABLE{ VTABLE::NiExtraData };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24

		NiExtraData* ctor()
		{
			using func_t = NiExtraData*(__thiscall*)(NiExtraData*);
			static REL::Relocation<func_t> func{ Offsets::NiExtraData::ctor };
			return func(this);
		}

		NiExtraData* ctor(NiFixedString const& kName)
		{
			using func_t = NiExtraData*(__thiscall*)(NiExtraData*, NiFixedString const&);
			static REL::Relocation<func_t> func{ Offsets::NiExtraData::ctor_1 };
			return func(this, kName);
		}

	public:
		// members
		NiFixedString m_kName;  // 08
	};
	static_assert(sizeof(NiExtraData) == 0xC);
}
