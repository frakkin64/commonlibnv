#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPrimitive.h"

namespace RE
{
	class BSMultiBoundShape;
	class NiColorA;
	class NiPoint3;

	class BGSPrimitiveSphere :
		public BGSPrimitive  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPrimitiveSphere };
		static constexpr auto VTABLE{ VTABLE::BGSPrimitiveSphere };

		// override (BGSPrimitive)
		virtual ~BGSPrimitiveSphere() = default;                                     // 00
		virtual void Build() override;                                               // 01
		virtual void SetColor(NiColorA* a_arg1) override;                            // 02
		virtual void SetRadii(NiPoint3* a_arg1) override;                            // 03
		virtual bool IsInside(NiPoint3* a_arg1) override;                            // 04
		virtual BSMultiBoundShape* MakeMultiBoundShape(NiPoint3& akAngle) override;  // 05

		BGSPrimitiveSphere* ctor()
		{
			using func_t = BGSPrimitiveSphere*(__thiscall*)(BGSPrimitiveSphere*);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitiveSphere::ctor };
			return func(this);
		}

		void SetRadius(float fRadius)
		{
			using func_t = decltype(&BGSPrimitiveSphere::SetRadius);
			static REL::Relocation<func_t> func{ Offsets::BGSPrimitiveSphere::SetRadius };
			func(this, fRadius);
		}
	};
	static_assert(sizeof(BGSPrimitiveSphere) == 0x34);
}
