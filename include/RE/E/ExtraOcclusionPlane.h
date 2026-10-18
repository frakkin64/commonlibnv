#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSOcclusionPlane;

	class ExtraOcclusionPlane :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraOcclusionPlane };
		static constexpr auto VTABLE{ VTABLE::ExtraOcclusionPlane };

		// override (BSExtraData)
		virtual ~ExtraOcclusionPlane() = default;  // 00

		ExtraOcclusionPlane* ctor()
		{
			using func_t = ExtraOcclusionPlane*(__thiscall*)(ExtraOcclusionPlane*);
			static REL::Relocation<func_t> func{ Offsets::ExtraOcclusionPlane::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<BSOcclusionPlane> spPlane;  // 0C
	};
	static_assert(sizeof(ExtraOcclusionPlane) == 0x10);
}
