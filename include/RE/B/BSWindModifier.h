#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiPSysData;
	class NiStream;

	class BSWindModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWindModifier };
		static constexpr auto VTABLE{ VTABLE::BSWindModifier };

		// override (NiPSysModifier)
		virtual ~BSWindModifier() = default;                                    // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12
		virtual void LoadBinary(NiStream& arStream) override;                   // 13
		virtual void LinkObject(NiStream& arStream) override;                   // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;          // 15
		virtual void SaveBinary(NiStream& arStream) override;                   // 16
		virtual bool IsEqual(NiObject* apObject) override;                      // 17
		virtual void Update(float a_arg1, NiPSysData* a_arg2) override;         // 23

		BSWindModifier* ctor()
		{
			using func_t = BSWindModifier*(__thiscall*)(BSWindModifier*);
			static REL::Relocation<func_t> func{ Offsets::BSWindModifier::ctor };
			return func(this);
		}

		static void SetWind(float afSpeed, float afAngle)
		{
			using func_t = decltype(&BSWindModifier::SetWind);
			static REL::Relocation<func_t> func{ Offsets::BSWindModifier::SetWind };
			func(afSpeed, afAngle);
		}

	public:
		// members
		float fStrength;  // 18
	};
	static_assert(sizeof(BSWindModifier) == 0x1C);
}
