#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObjectNET.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiObject;
	class NiStream;
	class NiUpdateData;

	class NiProperty :
		public NiObjectNET  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiProperty };
		static constexpr auto VTABLE{ VTABLE::NiProperty };

		// override (NiObjectNET)
		virtual ~NiProperty() = default;                                              // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// add
		virtual std::int32_t Type();                    // 23
		virtual void Update(NiUpdateData& UpdateData);  // 24

		NiProperty* ctor()
		{
			using func_t = NiProperty*(__thiscall*)(NiProperty*);
			static REL::Relocation<func_t> func{ Offsets::NiProperty::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(NiProperty) == 0x18);
}
