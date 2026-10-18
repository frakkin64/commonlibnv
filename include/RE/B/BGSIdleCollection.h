#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class Actor;
	class TESFile;
	class TESForm;
	class TESIdleForm;
	class TESObjectREFR;

	class BGSIdleCollection :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSIdleCollection };
		static constexpr auto VTABLE{ VTABLE::BGSIdleCollection };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSIdleCollection* ctor()
		{
			using func_t = BGSIdleCollection*(__thiscall*)(BGSIdleCollection*);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSIdleCollection*);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::dtor };
			func(this);
		}

		void Save()
		{
			using func_t = decltype(&BGSIdleCollection::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSIdleCollection::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::InitItem };
			func(this, apOwner);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&BGSIdleCollection::Load);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::Load };
			func(this, apFile);
		}

		void RemoveIdleAtIndex(std::uint32_t aiIndex)
		{
			using func_t = decltype(&BGSIdleCollection::RemoveIdleAtIndex);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::RemoveIdleAtIndex };
			func(this, aiIndex);
		}

		bool HasIdleForActor(Actor* apActor, TESObjectREFR* apTargetRef)
		{
			using func_t = decltype(&BGSIdleCollection::HasIdleForActor);
			static REL::Relocation<func_t> func{ Offsets::BGSIdleCollection::HasIdleForActor };
			return func(this, apActor, apTargetRef);
		}

	public:
		// members
		std::uint8_t  cIdleFlags;          // 04
		std::uint8_t  cIdleCount;          // 05
		std::uint16_t pad06;               // 06
		TESIdleForm** pIdleArray;          // 08
		float         fTimerCheckForIdle;  // 0C
	};
	static_assert(sizeof(BGSIdleCollection) == 0x10);
}
