#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPrimitive.h"

namespace RE
{
	class BGSPrimitivePlane;
	class BSMultiBoundShape;
	class NiColorA;
	class NiPoint3;

	class BGSPrimitiveBox :
		public BGSPrimitive  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPrimitiveBox };
		static constexpr auto VTABLE{ VTABLE::BGSPrimitiveBox };

		// override (BGSPrimitive)
		virtual ~BGSPrimitiveBox() = default;                                        // 00
		virtual void Build() override;                                               // 01
		virtual void SetColor(NiColorA* a_arg1) override;                            // 02
		virtual void SetRadii(NiPoint3* a_arg1) override;                            // 03
		virtual bool IsInside(NiPoint3* a_arg1) override;                            // 04
		virtual BSMultiBoundShape* MakeMultiBoundShape(NiPoint3& akAngle) override;  // 05

		BGSPrimitiveBox* ctor()
		{
			using func_t = BGSPrimitiveBox*(__thiscall*)(BGSPrimitiveBox*);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitiveBox::ctor };
			return func(this);
		}

	public:
		// members
		BGSPrimitivePlane* pFacePlanes[6];  // 34
	};
	static_assert(sizeof(BGSPrimitiveBox) == 0x4C);
}
