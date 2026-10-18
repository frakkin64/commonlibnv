#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSStringT.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/P/PART_DATA.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESModelPSA.h"

namespace RE
{
	class NiAVObject;
	class QueuedFile;
	class TESFile;
	class TESForm;

	class __declspec(novtable) BGSBodyPart
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSBodyPart };
		static constexpr auto VTABLE{ VTABLE::BGSBodyPart };

		using LIMB_ENUM = BGSBodyPart_LIMB_ENUM;

		// add
		virtual void QueueFiles(IO_TASK_PRIORITY aePriority, QueuedFile* apParent);  // 00

		BGSBodyPart* ctor()
		{
			using func_t = BGSBodyPart*(__thiscall*)(BGSBodyPart*);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSBodyPart*);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::dtor };
			func(this);
		}

		void InitItem(TESForm* apParentForm)
		{
			using func_t = decltype(&BGSBodyPart::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::InitItem };
			func(this, apParentForm);
		}

		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&BGSBodyPart::Load);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::Load };
			return func(this, apFile);
		}

		static void HideLimb(BGSBodyPart_LIMB_ENUM aeLimb, NiAVObject* apObj)
		{
			using func_t = decltype(&BGSBodyPart::HideLimb);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::HideLimb };
			func(aeLimb, apObj);
		}

		static void UnhideLimb(BGSBodyPart_LIMB_ENUM aeLimb, NiAVObject* apObj)
		{
			using func_t = decltype(&BGSBodyPart::UnhideLimb);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::UnhideLimb };
			func(aeLimb, apObj);
		}

		static void ShowLimb(BGSBodyPart_LIMB_ENUM aeLimb, NiAVObject* apObj)
		{
			using func_t = decltype(&BGSBodyPart::ShowLimb);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::ShowLimb };
			func(aeLimb, apObj);
		}

		char GetActorValue()
		{
			using func_t = decltype(&BGSBodyPart::GetActorValue);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::GetActorValue };
			return func(this);
		}

		BGSBodyPart_LIMB_ENUM GetPartType()
		{
			using func_t = decltype(&BGSBodyPart::GetPartType);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::GetPartType };
			return func(this);
		}

		bool IsExplodablePart()
		{
			using func_t = decltype(&BGSBodyPart::IsExplodablePart);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::IsExplodablePart };
			return func(this);
		}

		bool IsExplodeChanceAbsolute()
		{
			using func_t = decltype(&BGSBodyPart::IsExplodeChanceAbsolute);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::IsExplodeChanceAbsolute };
			return func(this);
		}

		std::uint8_t GetExplosionChance()
		{
			using func_t = decltype(&BGSBodyPart::GetExplosionChance);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPart::GetExplosionChance };
			return func(this);
		}

	public:
		// members
		BSStringT<char> NodeName;                // 04
		BSStringT<char> TargetName;              // 0C
		BSStringT<char> IKStartNodeName;         // 14
		BSStringT<char> PartName;                // 1C
		BSStringT<char> GoreObjectName;          // 24
		TESModel        ExplosionSpecialDebris;  // 2C
		TESModelPSA     PSAModel;                // 44
		PART_DATA       Data;                    // 5C
	};
	static_assert(sizeof(BGSBodyPart) == 0xB0);
}
