#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArrayRefCounted.h"
#include "RE/P/PathingAvoidNode.h"

namespace RE
{
	class NiPoint3;

	class PathingAvoidNodeArray :
		public BSSimpleArrayRefCounted<PathingAvoidNode, 1024>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingAvoidNodeArray };
		static constexpr auto VTABLE{ VTABLE::PathingAvoidNodeArray };

		// override (BSSimpleArrayRefCounted<PathingAvoidNode, 1024>)
		virtual ~PathingAvoidNodeArray() = default;  // 00

		float GetCostForPoint(NiPoint3& arPoint)
		{
			using func_t = decltype(&PathingAvoidNodeArray::GetCostForPoint);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNodeArray::GetCostForPoint };
			return func(this, arPoint);
		}

		float ComputeCenter(NiPoint3 const& arStartPoint, NiPoint3& arCenter)
		{
			using func_t = decltype(&PathingAvoidNodeArray::ComputeCenter);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNodeArray::ComputeCenter };
			return func(this, arStartPoint, arCenter);
		}

		PathingAvoidNodeArray* ctor()
		{
			using func_t = PathingAvoidNodeArray*(__thiscall*)(PathingAvoidNodeArray*);
			static REL::Relocation<func_t> func{ Offsets::PathingAvoidNodeArray::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(PathingAvoidNodeArray) == 0x18);
}
