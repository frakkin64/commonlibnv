#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkUnaryAction.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class hkMouseSpringActionCinfo;
	class hkSerializableCinfo;

	class bhkMouseSpringAction :
		public bhkUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkMouseSpringAction };
		static constexpr auto VTABLE{ VTABLE::bhkMouseSpringAction };

		// override (bhkUnaryAction)
		virtual ~bhkMouseSpringAction() = default;                                    // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void KillCinfo(bool abCreated) override;                              // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;              // 2D

		bhkMouseSpringAction* ctor(hkMouseSpringActionCinfo const& arInfo)
		{
			using func_t = bhkMouseSpringAction*(__thiscall*)(bhkMouseSpringAction*, hkMouseSpringActionCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkMouseSpringAction::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkMouseSpringAction) == 0x10);
}
