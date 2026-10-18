#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSSaveGameBuffer.h"
#include "RE/B/BGSSaveLoadFormHeader.h"
#include "RE/E/ENUM_FORM_ID.h"

namespace RE
{
	class Actor;
	class BGSSaveLoadFile;
	class TESForm;
	class TESObjectREFR;

	class BGSSaveFormBuffer :
		public BGSSaveGameBuffer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSaveFormBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSSaveFormBuffer };

		// override (BGSSaveGameBuffer)
		virtual TESForm* GetForm() override;             // 00
		virtual TESObjectREFR* GetReference() override;  // 01
		virtual Actor* GetActor() override;              // 02

		void RemoveChange(std::int32_t aiFlags)
		{
			using func_t = decltype(&BGSSaveFormBuffer::RemoveChange);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveFormBuffer::RemoveChange };
			func(this, aiFlags);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveFormBuffer::dtor };
			func(this);
		}

		BGSSaveFormBuffer* ctor()
		{
			using func_t = BGSSaveFormBuffer*(__thiscall*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveFormBuffer::ctor };
			return func(this);
		}

		void Save(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveFormBuffer::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveFormBuffer::Save };
			func(this, apFile);
		}

		void SetHeader(std::uint32_t aiFormID, BGSChangeFlags aiChangeFlags, ENUM_FORM_ID aeFormType, std::uint8_t acVersion)
		{
			using func_t = decltype(&BGSSaveFormBuffer::SetHeader);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveFormBuffer::SetHeader };
			func(this, aiFormID, aiChangeFlags, aeFormType, acVersion);
		}

	public:
		// members
		BGSSaveLoadFormHeader Header;  // 14
		TESForm*              pForm;   // 20
	};
}
