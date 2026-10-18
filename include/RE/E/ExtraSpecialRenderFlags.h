#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESForm;

	class ExtraSpecialRenderFlags :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSpecialRenderFlags };
		static constexpr auto VTABLE{ VTABLE::ExtraSpecialRenderFlags };

		// override (BSExtraData)
		virtual ~ExtraSpecialRenderFlags() = default;           // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// add
		virtual void InitItem(TESForm* apOwner);  // 02
		virtual void Copy(BSExtraData* apCopy);   // 03

		ExtraSpecialRenderFlags* ctor()
		{
			using func_t = ExtraSpecialRenderFlags*(__thiscall*)(ExtraSpecialRenderFlags*);
			static REL::Relocation<func_t> func{ Offsets::ExtraSpecialRenderFlags::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t m_flags;                 // 0C
		float        m_fNodeMaxFadeDistance;  // 10
	};
	static_assert(sizeof(ExtraSpecialRenderFlags) == 0x14);
}
