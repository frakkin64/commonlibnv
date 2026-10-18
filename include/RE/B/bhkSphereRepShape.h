#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class bhkSphereRepShape :
		public bhkShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkSphereRepShape };
		static constexpr auto VTABLE{ VTABLE::bhkSphereRepShape };

		// override (bhkShape)
		virtual ~bhkSphereRepShape() = default;                                       // 00
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		bhkSphereRepShape* ctor()
		{
			using func_t = bhkSphereRepShape*(__thiscall*)(bhkSphereRepShape*);
			static REL::Relocation<func_t> func{ Offsets::bhkSphereRepShape::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(bhkSphereRepShape) == 0x14);
}
