#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundObject.h"

namespace RE
{
	class TESBoundAnimObject :
		public TESBoundObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESBoundAnimObject };
		static constexpr auto VTABLE{ VTABLE::TESBoundAnimObject };

		// override (TESBoundObject)
		virtual ~TESBoundAnimObject() = default;                       // 04
		virtual bool IsBoundAnimObject() override;                     // 4F
		virtual std::uint32_t IncRef() override;                       // 5A
		virtual bool ReplaceModel_5F(char const* pfilename) override;  // 5F

		TESBoundAnimObject* ctor()
		{
			using func_t = TESBoundAnimObject*(__thiscall*)(TESBoundAnimObject*);
			static REL::Relocation<func_t> func{ Offsets::TESBoundAnimObject::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESBoundAnimObject) == 0x30);
}
