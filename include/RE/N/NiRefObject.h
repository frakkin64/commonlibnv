#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMemObject.h"

namespace RE
{
	class __declspec(novtable) NiRefObject :
		public NiMemObject  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRefObject };
		static constexpr auto VTABLE{ VTABLE::NiRefObject };

		// add
		virtual ~NiRefObject() = default;  // 00
		virtual void DeleteThis();         // 01

		NiRefObject* ctor()
		{
			using func_t = NiRefObject*(__thiscall*)(NiRefObject*);
			static REL::Relocation<func_t> func{ Offsets::NiRefObject::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t m_uiRefCount;  // 04
	};
	static_assert(sizeof(NiRefObject) == 0x8);
}
