#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSLoadGameBuffer.h"
#include "RE/B/BGSSaveLoadFormHeader.h"
#include "RE/E/ENUM_FORM_ID.h"

namespace RE
{
	class Actor;
	class BGSSaveLoadFile;
	class TESForm;
	class TESObjectREFR;

	class BGSLoadFormBuffer :
		public BGSLoadGameBuffer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSLoadFormBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSLoadFormBuffer };

		// override (BGSLoadGameBuffer)
		virtual std::uint8_t GetVersion() override;      // 00
		virtual TESForm* GetForm() override;             // 01
		virtual TESObjectREFR* GetReference() override;  // 02
		virtual Actor* GetActor() override;              // 03

		void SetChangeFlags(BGSChangeFlags aiChangeFlags)
		{
			using func_t = decltype(&BGSLoadFormBuffer::SetChangeFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::SetChangeFlags };
			func(this, aiChangeFlags);
		}

		BGSChangeFlags GetOldChangeFlags()
		{
			using func_t = decltype(&BGSLoadFormBuffer::GetOldChangeFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::GetOldChangeFlags };
			return func(this);
		}

		void SetReconstructedForm(bool abValue)
		{
			using func_t = decltype(&BGSLoadFormBuffer::SetReconstructedForm);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::SetReconstructedForm };
			func(this, abValue);
		}

		bool GetReconstructedForm()
		{
			using func_t = decltype(&BGSLoadFormBuffer::GetReconstructedForm);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::GetReconstructedForm };
			return func(this);
		}

		bool GetRevertOnly()
		{
			using func_t = decltype(&BGSLoadFormBuffer::GetRevertOnly);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::GetRevertOnly };
			return func(this);
		}

		void SetForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadFormBuffer::SetForm);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::SetForm };
			func(this, apForm);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::dtor };
			func(this);
		}

		BGSLoadFormBuffer* ctor()
		{
			using func_t = BGSLoadFormBuffer*(__thiscall*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::ctor };
			return func(this);
		}

		std::int32_t LoadHeader(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSLoadFormBuffer::LoadHeader);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::LoadHeader };
			return func(this, apFile);
		}

		ENUM_FORM_ID GetFormType()
		{
			using func_t = decltype(&BGSLoadFormBuffer::GetFormType);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadFormBuffer::GetFormType };
			return func(this);
		}

	public:
		// members
		std::uint32_t         iFormID;          // 04
		std::uint8_t          pad08[0xC];       // 08
		BGSSaveLoadFormHeader Header;           // 14
		std::uint32_t         iSize;            // 20
		TESForm*              pForm;            // 24
		std::uint32_t         iFlags;           // 28
		BGSChangeFlags        iOldChangeFlags;  // 2C
	};
	static_assert(sizeof(BGSLoadFormBuffer) == 0x30);
}
