#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;
	class TESSound;

	class BGSPickupPutdownSounds :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPickupPutdownSounds };
		static constexpr auto VTABLE{ VTABLE::BGSPickupPutdownSounds };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSPickupPutdownSounds* ctor()
		{
			using func_t = BGSPickupPutdownSounds*(__thiscall*)(BGSPickupPutdownSounds*);
			static REL::Relocation<func_t> func{ Offsets::BGSPickupPutdownSounds::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSPickupPutdownSounds*);
			static REL::Relocation<func_t> func{ Offsets::BGSPickupPutdownSounds::dtor };
			func(this);
		}

		void Save()
		{
			using func_t = decltype(&BGSPickupPutdownSounds::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSPickupPutdownSounds::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSPickupPutdownSounds::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSPickupPutdownSounds::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		TESSound* pPickupSound;   // 04
		TESSound* pPutdownSound;  // 08
	};
}
