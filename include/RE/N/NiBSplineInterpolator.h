#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiInterpolator.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiBSplineBasisData;
	class NiBSplineData;

	class NiBSplineInterpolator :
		public NiInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBSplineInterpolator };

		// add
		virtual void Unk_37();  // 37
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
		virtual void Unk_3A();  // 3A
		virtual void Unk_3B();  // 3B
		virtual void Unk_3C();  // 3C
		virtual void Unk_3D();  // 3D
		virtual void Unk_3E();  // 3E
		virtual void Unk_3F();  // 3F

		// members
		float                         m_fStartTime;   // 0C
		float                         m_fEndTime;     // 10
		NiPointer<NiBSplineData>      m_spData;       // 14
		NiPointer<NiBSplineBasisData> m_spBasisData;  // 18
	};
	static_assert(sizeof(NiBSplineInterpolator) == 0x1C);
}
