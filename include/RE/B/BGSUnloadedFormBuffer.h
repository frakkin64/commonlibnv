#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/S/SIZE_TYPE.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveLoadFile;

	class BGSUnloadedFormBuffer
	{
	public:
		ENUM_FORM_ID GetFormType()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::GetFormType);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::GetFormType };
			return func(this);
		}

		std::uint8_t GetVersion()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::GetVersion);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::GetVersion };
			return func(this);
		}

		void Save(BGSSaveLoadFile* apFile, std::uint32_t aiFormID, BGSChangeFlags aiChangeFlags)
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::Save };
			func(this, apFile, aiFormID, aiChangeFlags);
		}

		void Load(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::Load);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::Load };
			func(this, apFile);
		}

		char* GetAdvancedBuffer()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::GetAdvancedBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::GetAdvancedBuffer };
			return func(this);
		}

		std::uint32_t GetSize()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::GetSize);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::GetSize };
			return func(this);
		}

		SIZE_TYPE GetSizeType()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::GetSizeType);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::GetSizeType };
			return func(this);
		}

		std::uint32_t GetOverhead()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::GetOverhead);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::GetOverhead };
			return func(this);
		}

		BGSLoadFormBuffer* CreateLoadFormBuffer()
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::CreateLoadFormBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::CreateLoadFormBuffer };
			return func(this);
		}

		void Initialize(char* apBuffer, std::uint32_t aiBufferSize, ENUM_FORM_ID aeFormType, std::uint8_t acVersion)
		{
			using func_t = decltype(&BGSUnloadedFormBuffer::Initialize);
			static REL::Relocation<func_t> func{ Offsets::BGSUnloadedFormBuffer::Initialize };
			func(this, apBuffer, aiBufferSize, aeFormType, acVersion);
		}

	public:
		// members
		char* pBuffer;  // 00
	};
}
