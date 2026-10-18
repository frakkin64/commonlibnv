#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;

	class TESFullName :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESFullName };
		static constexpr auto VTABLE{ VTABLE::TESFullName };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESFullName* ctor()
		{
			using func_t = TESFullName*(__thiscall*)(TESFullName*);
			static REL::Relocation<func_t> func{ Offsets::TESFullName::ctor };
			return func(this);
		}

		static char const* GetFullName(TESForm* apObj)
		{
			using func_t = decltype(&TESFullName::GetFullName);
			static REL::Relocation<func_t> func{ Offsets::TESFullName::GetFullName };
			return func(apObj);
		}

		void Save()
		{
			using func_t = decltype(&TESFullName::Save);
			static REL::Relocation<func_t> func{ Offsets::TESFullName::Save };
			func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESFullName*);
			static REL::Relocation<func_t> func{ Offsets::TESFullName::dtor };
			func(this);
		}

	public:
		// members
		BSStringT<char> cFullName;  // 04
	};
	static_assert(sizeof(TESFullName) == 0xC);
}
