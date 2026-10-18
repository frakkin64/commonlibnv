#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiPSysData;
	class NiStream;

	class BSParentVelocityModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParentVelocityModifier };
		static constexpr auto VTABLE{ VTABLE::BSParentVelocityModifier };

		// override (NiPSysModifier)
		virtual ~BSParentVelocityModifier() = default;                                      // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;              // 12
		virtual void LoadBinary(NiStream& arStream) override;                               // 13
		virtual void LinkObject(NiStream& arStream) override;                               // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                      // 15
		virtual void SaveBinary(NiStream& arStream) override;                               // 16
		virtual bool IsEqual(NiObject* apObject) override;                                  // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;        // 18
		virtual void Update(float a_arg1, NiPSysData* a_arg2) override;                     // 23
		virtual void Initialize(NiPSysData* apData, std::uint16_t aiNewParticle) override;  // 24
		virtual void HandleReset() override;                                                // 25

		BSParentVelocityModifier* ctor()
		{
			using func_t = BSParentVelocityModifier*(__thiscall*)(BSParentVelocityModifier*);
			static REL::Relocation<func_t> func{ Offsets::BSParentVelocityModifier::ctor };
			return func(this);
		}

	public:
		// members
		float    fLastTimeDelta;  // 18
		float    fTimeLast;       // 1C
		float    fDamping;        // 20
		NiPoint3 pntLast;         // 24
		NiPoint3 velLast;         // 30
	};
	static_assert(sizeof(BSParentVelocityModifier) == 0x3C);
}
