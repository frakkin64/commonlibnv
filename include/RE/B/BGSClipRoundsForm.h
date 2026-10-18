#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSClipRoundsForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSClipRoundsForm };
		static constexpr auto VTABLE{ VTABLE::BGSClipRoundsForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSClipRoundsForm* ctor()
		{
			using func_t = BGSClipRoundsForm*(__thiscall*)(BGSClipRoundsForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSClipRoundsForm::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSClipRoundsForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSClipRoundsForm::dtor };
			func(this);
		}

	public:
		// members
		std::uint8_t cClipRounds;  // 04
		std::uint8_t pad05[0x3];   // 05
	};
}
