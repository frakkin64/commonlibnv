#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConstraint.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class hkHingeConstraintCinfo;
	class hkSerializableCinfo;

	class bhkHingeConstraint :
		public bhkConstraint  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkHingeConstraint };
		static constexpr auto VTABLE{ VTABLE::bhkHingeConstraint };

		// override (bhkConstraint)
		virtual ~bhkHingeConstraint() = default;                                // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12
		virtual void KillCinfo(bool abCreated) override;                        // 29
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;        // 2D

		bhkHingeConstraint* ctor(hkHingeConstraintCinfo const& arInfo)
		{
			using func_t = bhkHingeConstraint*(__thiscall*)(bhkHingeConstraint*, hkHingeConstraintCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkHingeConstraint::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkHingeConstraint) == 0x10);
}
