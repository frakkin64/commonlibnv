#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiNode;

	class ExtraCell3D :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCell3D };
		static constexpr auto VTABLE{ VTABLE::ExtraCell3D };

		// override (BSExtraData)
		virtual ~ExtraCell3D() = default;  // 00

		ExtraCell3D* ctor()
		{
			using func_t = ExtraCell3D*(__thiscall*)(ExtraCell3D*);
			static REL::Relocation<func_t> func{ Offsets::ExtraCell3D::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<NiNode> spCellNode;  // 0C
	};
	static_assert(sizeof(ExtraCell3D) == 0x10);
}
