#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSLoadGameBuffer;
	class BGSSaveFormBuffer;
	class BGSSaveGameBuffer;
	class TESForm;

	class BGSLoadGameSubBuffer
	{
	public:
		void DeleteBuffer()
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::DeleteBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::DeleteBuffer };
			func(this);
		}

		void LoadAnimation(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::LoadAnimation);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::LoadAnimation };
			func(this, apForm);
		}

		void LoadCharController(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::LoadCharController);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::LoadCharController };
			func(this, apForm);
		}

		void LoadHavokData(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::LoadHavokData);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::LoadHavokData };
			func(this, apForm);
		}

		BGSLoadFormBuffer* CreateLoadFormBuffer(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::CreateLoadFormBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::CreateLoadFormBuffer };
			return func(this, apForm);
		}

		void SaveAnimation(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::SaveAnimation);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::SaveAnimation };
			func(this, apForm);
		}

		void SaveHavokData(TESForm* apForm)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::SaveHavokData);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::SaveHavokData };
			func(this, apForm);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::LoadGame };
			func(this, apLoadGameBuffer);
		}

	protected:
		void CopyBuffer(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&BGSLoadGameSubBuffer::CopyBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadGameSubBuffer::CopyBuffer };
			func(this, apSaveGameBuffer);
		}

	public:
		// members
		char* pBuffer;  // 00
	};
}
