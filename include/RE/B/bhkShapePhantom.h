#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkPhantom.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiTransform;

	class bhkShapePhantom :
		public bhkPhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkShapePhantom };
		static constexpr auto VTABLE{ VTABLE::bhkShapePhantom };

		// override (bhkPhantom)
		virtual ~bhkShapePhantom() = default;                                         // 00
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		void SetTransform(NiTransform const& arTrans)
		{
			using func_t = decltype(&bhkShapePhantom::SetTransform);
			static REL::Relocation<func_t> func{ Offsets::bhkShapePhantom::SetTransform };
			func(this, arTrans);
		}

		bhkShapePhantom* ctor()
		{
			using func_t = bhkShapePhantom*(__thiscall*)(bhkShapePhantom*);
			static REL::Relocation<func_t> func{ Offsets::bhkShapePhantom::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(bhkShapePhantom) == 0x18);
}
