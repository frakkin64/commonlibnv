#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class BGSSaveLoadFile;
	class TESForm;
	class TESObjectREFR;

	class __declspec(novtable) BGSSaveGameBuffer
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSaveGameBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSSaveGameBuffer };

		// add
		virtual TESForm* GetForm();             // 00
		virtual TESObjectREFR* GetReference();  // 01
		virtual Actor* GetActor();              // 02

		void ClearPosition()
		{
			using func_t = decltype(&BGSSaveGameBuffer::ClearPosition);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::ClearPosition };
			func(this);
		}

		BGSSaveGameBuffer* ctor()
		{
			using func_t = BGSSaveGameBuffer*(__thiscall*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::dtor };
			func(this);
		}

		void Save(BGSSaveLoadFile* apFile)
		{
			using func_t = void (BGSSaveGameBuffer::*)(BGSSaveLoadFile*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::Save };
			func(this, apFile);
		}

		void Save(BGSSaveLoadFile* apFile, std::uint32_t aiSize)
		{
			using func_t = void (BGSSaveGameBuffer::*)(BGSSaveLoadFile*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::Save_1 };
			func(this, apFile, aiSize);
		}

		void SaveFormID(std::uint32_t aiFormID, std::uint32_t aiUnusuedMetaDataArg)
		{
			using func_t = void (BGSSaveGameBuffer::*)(std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveFormID };
			func(this, aiFormID, aiUnusuedMetaDataArg);
		}

		void SaveFormID(TESForm* apForm, std::uint32_t aiUnusuedMetaDataArg)
		{
			using func_t = void (BGSSaveGameBuffer::*)(TESForm*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveFormID_1 };
			func(this, apForm, aiUnusuedMetaDataArg);
		}

		void SaveData(void* apData, std::uint32_t aiSize, std::uint32_t aiUnusuedMetaDataArg)
		{
			using func_t = decltype(&BGSSaveGameBuffer::SaveData);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveData };
			func(this, apData, aiSize, aiUnusuedMetaDataArg);
		}

		void SaveString(char const* apString, std::uint32_t aiUnusuedMetaDataArg)
		{
			using func_t = decltype(&BGSSaveGameBuffer::SaveString);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveString };
			func(this, apString, aiUnusuedMetaDataArg);
		}

		std::uint32_t StartVariableSizedValue()
		{
			using func_t = decltype(&BGSSaveGameBuffer::StartVariableSizedValue);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::StartVariableSizedValue };
			return func(this);
		}

		void SaveVariableSizedValue(std::uint32_t aiVariableValue)
		{
			using func_t = void (BGSSaveGameBuffer::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveVariableSizedValue };
			func(this, aiVariableValue);
		}

		void SaveVariableSizedValue(std::uint32_t aiVariableValue, std::uint32_t aiPosition)
		{
			using func_t = void (BGSSaveGameBuffer::*)(std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveVariableSizedValue_1 };
			func(this, aiVariableValue, aiPosition);
		}

	protected:
		void SaveDataToBuffer(void* apData, std::uint32_t aiSize, bool abDirectSave)
		{
			using func_t = void (BGSSaveGameBuffer::*)(void*, std::uint32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveDataToBuffer };
			func(this, apData, aiSize, abDirectSave);
		}

		void SaveDataToBuffer(void* apData, std::uint32_t aiSize, std::uint32_t aiPosition, bool abDirectSave)
		{
			using func_t = void (BGSSaveGameBuffer::*)(void*, std::uint32_t, std::uint32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::SaveDataToBuffer_1 };
			func(this, apData, aiSize, aiPosition, abDirectSave);
		}

		void ExpandBuffer()
		{
			using func_t = decltype(&BGSSaveGameBuffer::ExpandBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::ExpandBuffer };
			func(this);
		}

		void ShiftBuffer(std::uint32_t aiPosition, std::int32_t aiAmount)
		{
			using func_t = decltype(&BGSSaveGameBuffer::ShiftBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveGameBuffer::ShiftBuffer };
			func(this, aiPosition, aiAmount);
		}

	public:
		// members
		char*         pBuffer;          // 04
		std::uint32_t iBufferSize;      // 08
		std::uint32_t iBufferPosition;  // 0C
		std::uint32_t iDebugOverhead;   // 10
	};
	static_assert(sizeof(BGSSaveGameBuffer) == 0x14);
}
