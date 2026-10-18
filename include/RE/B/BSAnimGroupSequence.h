#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiControllerSequence.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class NiCloningProcess;
	class NiObject;
	class TESAnimGroup;
	class TESObjectREFR;

	class BSAnimGroupSequence :
		public NiControllerSequence  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAnimGroupSequence };
		static constexpr auto VTABLE{ VTABLE::BSAnimGroupSequence };

		// override (NiControllerSequence)
		virtual ~BSAnimGroupSequence() = default;                                     // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual bool Deactivate(float afEaseOutTime, bool abTransition) override;     // 23

		TESAnimGroup* GetAnimGroup()
		{
			using func_t = decltype(&BSAnimGroupSequence::GetAnimGroup);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::GetAnimGroup };
			return func(this);
		}

		BSAnimGroupSequence* ctor()
		{
			using func_t = BSAnimGroupSequence*(__thiscall*)(BSAnimGroupSequence*);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::ctor };
			return func(this);
		}

		float GetScaledTime(float afTime)
		{
			using func_t = decltype(&BSAnimGroupSequence::GetScaledTime);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::GetScaledTime };
			return func(this, afTime);
		}

		static bool PlaySounds(NiControllerSequence* apSeq, TESObjectREFR* apRef)
		{
			using func_t = decltype(&BSAnimGroupSequence::PlaySounds);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::PlaySounds };
			return func(apSeq, apRef);
		}

		std::uint8_t GetPriority(char const* apBoneName, std::uint32_t* apReturnIndex)
		{
			using func_t = decltype(&BSAnimGroupSequence::GetPriority);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::GetPriority };
			return func(this, apBoneName, apReturnIndex);
		}

		static std::uint16_t GetSequenceSaveSize()
		{
			using func_t = decltype(&BSAnimGroupSequence::GetSequenceSaveSize);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::GetSequenceSaveSize };
			return func();
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&BSAnimGroupSequence::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::GetSaveSize };
			return func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer, float afTime)
		{
			using func_t = decltype(&BSAnimGroupSequence::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::SaveGame };
			func(this, apSaveGameBuffer, afTime);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer, float afTime)
		{
			using func_t = decltype(&BSAnimGroupSequence::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::BSAnimGroupSequence::LoadGame };
			func(this, apLoadGameBuffer, afTime);
		}

	public:
		// members
		NiPointer<TESAnimGroup> spAnimGroup;  // 74
	};
	static_assert(sizeof(BSAnimGroupSequence) == 0x78);
}
