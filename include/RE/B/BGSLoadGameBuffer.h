#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class BGSSaveLoadFile;
	class TESForm;
	class TESObjectREFR;

	class __declspec(novtable) BGSLoadGameBuffer
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSLoadGameBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSLoadGameBuffer };

		// add
		virtual std::uint8_t GetVersion();      // 00
		virtual TESForm* GetForm();             // 01
		virtual TESObjectREFR* GetReference();  // 02
		virtual Actor* GetActor();              // 03

		BGSLoadGameBuffer* ctor()
		{
			using func_t = BGSLoadGameBuffer*(__thiscall*)(BGSLoadGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSLoadGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::dtor };
			func(this);
		}

		std::int32_t Load(BGSSaveLoadFile* apFile)
		{
			using func_t = std::int32_t (BGSLoadGameBuffer::*)(BGSSaveLoadFile*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::Load };
			return func(this, apFile);
		}

		std::int32_t Load(BGSSaveLoadFile* apFile, std::uint32_t aiSize)
		{
			using func_t = std::int32_t (BGSLoadGameBuffer::*)(BGSSaveLoadFile*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::Load_1 };
			return func(this, apFile, aiSize);
		}

		std::uint32_t LoadFormID()
		{
			using func_t = std::uint32_t (BGSLoadGameBuffer::*)();
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::LoadFormID };
			return func(this);
		}

		bool LoadFormID(std::uint32_t& aiFormID)
		{
			using func_t = bool (BGSLoadGameBuffer::*)(std::uint32_t&);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::LoadFormID_1 };
			return func(this, aiFormID);
		}

		void LoadData(void* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&BGSLoadGameBuffer::LoadData);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::LoadData };
			func(this, apData, aiSize);
		}

		char* LoadString(char* apString)
		{
			using func_t = decltype(&BGSLoadGameBuffer::LoadString);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::LoadString };
			return func(this, apString);
		}

		std::int32_t LoadVariableSizedValue()
		{
			using func_t = decltype(&BGSLoadGameBuffer::LoadVariableSizedValue);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::LoadVariableSizedValue };
			return func(this);
		}

	protected:
		void LoadDataFromBuffer(void* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&BGSLoadGameBuffer::LoadDataFromBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameBuffer::LoadDataFromBuffer };
			func(this, apData, aiSize);
		}

	public:
		// members
		// not placed: pBuffer(absent), iBufferSize(absent), iBufferPosition(absent)
	};
	static_assert(sizeof(BGSLoadGameBuffer) == 0x4);
}
