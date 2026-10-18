#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPrimitive.h"

namespace RE
{
	class BSOcclusionPlane;
	class BSPortal;
	class NiColorA;
	class NiPoint3;

	class BGSPrimitivePlane :
		public BGSPrimitive  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPrimitivePlane };
		static constexpr auto VTABLE{ VTABLE::BGSPrimitivePlane };

		// override (BGSPrimitive)
		virtual ~BGSPrimitivePlane() = default;            // 00
		virtual void Build() override;                     // 01
		virtual void SetColor(NiColorA* a_arg1) override;  // 02
		virtual void SetRadii(NiPoint3* a_arg1) override;  // 03
		virtual bool IsInside(NiPoint3* a_arg1) override;  // 04

		// add
		virtual BSOcclusionPlane* MakeOcclusionPlane();  // 06
		virtual BSPortal* MakePortal();                  // 07

		BGSPrimitivePlane* ctor()
		{
			using func_t = BGSPrimitivePlane*(__thiscall*)(BGSPrimitivePlane*);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitivePlane::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSPrimitivePlane) == 0x34);
}
