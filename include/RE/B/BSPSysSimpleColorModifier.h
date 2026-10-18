#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiPSysData;
	class NiStream;

	class BSPSysSimpleColorModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysSimpleColorModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysSimpleColorModifier };

		// override (NiPSysModifier)
		virtual ~BSPSysSimpleColorModifier() = default;                               // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void Update(float a_arg1, NiPSysData* a_arg2) override;               // 23

		// members
		NiColorA kColor1;          // 18
		NiColorA kColor2;          // 28
		NiColorA kColor3;          // 38
		float    fFadeInPct;       // 48
		float    fFadeOutPct;      // 4C
		float    fColor1EndPct;    // 50
		float    fColor2StartPct;  // 54
		float    fColor2EndPct;    // 58
		float    fColor3StartPct;  // 5C
	};
	static_assert(sizeof(BSPSysSimpleColorModifier) == 0x60);
}
