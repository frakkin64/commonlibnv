#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiControllerSequence;
	class TESForm;
	class TESObjectREFR;

	class __declspec(novtable) BGSOpenCloseForm
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSOpenCloseForm };
		static constexpr auto VTABLE{ VTABLE::BGSOpenCloseForm };

		enum class OPEN_STATE : std::int32_t
		{
			kOBJECT_NONE = 0x0,
			kOBJECT_OPEN = 0x1,
			kOBJECT_OPENING = 0x2,
			kOBJECT_CLOSED = 0x3,
			kOBJECT_CLOSING = 0x4,
		};

		// add
		virtual void HandleOpenFinish(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef);   // 00
		virtual void HandleCloseFinish(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef);  // 01
		virtual bool GetBlockActivatesWhileOpening();                                                // 02

		static BGSOpenCloseForm* GetAsOpenCloseForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSOpenCloseForm::GetAsOpenCloseForm);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::GetAsOpenCloseForm };
			return func(apForm);
		}

		static bool IsOpenCloseForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSOpenCloseForm::IsOpenCloseForm);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::IsOpenCloseForm };
			return func(apForm);
		}

		static void HandleActivate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, BGSOpenCloseForm* apOpenCloseForm)
		{
			using func_t = decltype(&BGSOpenCloseForm::HandleActivate);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::HandleActivate };
			func(apItemActivated, apActionRef, apOpenCloseForm);
		}

		static bool HandleAnimEndHavok(TESObjectREFR* apAnimRef, NiControllerSequence* apEndSeq)
		{
			using func_t = decltype(&BGSOpenCloseForm::HandleAnimEndHavok);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::HandleAnimEndHavok };
			return func(apAnimRef, apEndSeq);
		}

		static void HandleAnimEnd(TESObjectREFR* apAnimRef, NiControllerSequence* apEndSeq)
		{
			using func_t = decltype(&BGSOpenCloseForm::HandleAnimEnd);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::HandleAnimEnd };
			func(apAnimRef, apEndSeq);
		}

		static bool SetOpenState(TESObjectREFR* apRef, bool abOpen, bool abSnap)
		{
			using func_t = decltype(&BGSOpenCloseForm::SetOpenState);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::SetOpenState };
			return func(apRef, abOpen, abSnap);
		}

		static BGSOpenCloseForm::OPEN_STATE GetOpenState(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSOpenCloseForm::GetOpenState);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::GetOpenState };
			return func(apRef);
		}

		static void SnapHavokTo3D(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSOpenCloseForm::SnapHavokTo3D);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::SnapHavokTo3D };
			func(apRef);
		}

		BGSOpenCloseForm* ctor()
		{
			using func_t = BGSOpenCloseForm*(__thiscall*)(BGSOpenCloseForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSOpenCloseForm::ctor };
			return func(this);
		}
	};
}
