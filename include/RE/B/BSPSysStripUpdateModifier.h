#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiPSysData;
	class NiStream;

	class BSPSysStripUpdateModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysStripUpdateModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysStripUpdateModifier };

		// override (NiPSysModifier)
		virtual ~BSPSysStripUpdateModifier() = default;                                     // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;              // 12
		virtual void LoadBinary(NiStream& arStream) override;                               // 13
		virtual void LinkObject(NiStream& arStream) override;                               // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                      // 15
		virtual void SaveBinary(NiStream& arStream) override;                               // 16
		virtual bool IsEqual(NiObject* apObject) override;                                  // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;        // 18
		virtual void Update(float a_arg1, NiPSysData* a_arg2) override;                     // 23
		virtual void Initialize(NiPSysData* apData, std::uint16_t aiNewParticle) override;  // 24
		virtual bool IsBSPSysStripUpdateModifier() override;                                // 28

	protected:
		BSPSysStripUpdateModifier* ctor()
		{
			using func_t = BSPSysStripUpdateModifier*(__thiscall*)(BSPSysStripUpdateModifier*);
			static REL::Relocation<func_t> func{ Offsets::BSPSysStripUpdateModifier::ctor };
			return func(this);
		}

	public:
		// members
		float fUpdateDeltaTime;  // 18
	};
	static_assert(sizeof(BSPSysStripUpdateModifier) == 0x1C);
}
