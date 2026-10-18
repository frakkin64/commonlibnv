#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSphereRepShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiStream;

	class bhkConvexShape :
		public bhkSphereRepShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkConvexShape };
		static constexpr auto VTABLE{ VTABLE::bhkConvexShape };

		// override (bhkSphereRepShape)
		virtual ~bhkConvexShape() = default;                                          // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		bhkConvexShape* ctor()
		{
			using func_t = bhkConvexShape*(__thiscall*)(bhkConvexShape*);
			static REL::Relocation<func_t> func{ Offsets::bhkConvexShape::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(bhkConvexShape) == 0x14);
}
