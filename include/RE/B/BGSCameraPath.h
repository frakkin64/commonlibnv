#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/P/PATH_DATA.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSCameraShot;
	class NiFormArray;
	class TESFile;
	class TESObjectREFR;

	class BGSCameraPath :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSCameraPath };
		static constexpr auto VTABLE{ VTABLE::BGSCameraPath };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCPTH_ID };

		// override (TESForm)
		virtual ~BGSCameraPath() = default;                                                                                  // 04
		virtual void ClearData() override;                                                                                   // 05
		virtual bool ProcessBeforeSave() override;                                                                           // 06
		virtual bool Load(TESFile* apFile) override;                                                                         // 08
		virtual void Save() override;                                                                                        // 0B
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;  // 10
		virtual void InitItem() override;                                                                                    // 22
		virtual void Copy(TESForm* apCopy) override;                                                                         // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                      // 43

		BGSCameraPath* ctor()
		{
			using func_t = BGSCameraPath*(__thiscall*)(BGSCameraPath*);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::ctor };
			return func(this);
		}

		bool InitParents()
		{
			using func_t = decltype(&BGSCameraPath::InitParents);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::InitParents };
			return func(this);
		}

		void FixNextPaths(NiFormArray* apArray)
		{
			using func_t = decltype(&BGSCameraPath::FixNextPaths);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::FixNextPaths };
			func(this, apArray);
		}

		BGSCameraPath* GetCameraPathToPlay(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef)
		{
			using func_t = decltype(&BGSCameraPath::GetCameraPathToPlay);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::GetCameraPathToPlay };
			return func(this, apActionRef, apTargetRef);
		}

		BGSCameraPath* GetChildByIndex(std::uint32_t aiIndex)
		{
			using func_t = decltype(&BGSCameraPath::GetChildByIndex);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::GetChildByIndex };
			return func(this, aiIndex);
		}

		void RemoveChildAtIndex(std::uint32_t aiIndex)
		{
			using func_t = decltype(&BGSCameraPath::RemoveChildAtIndex);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::RemoveChildAtIndex };
			func(this, aiIndex);
		}

		void RemoveChild(BGSCameraPath* apChild)
		{
			using func_t = decltype(&BGSCameraPath::RemoveChild);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::RemoveChild };
			func(this, apChild);
		}

		void SetParentPath(BGSCameraPath* apPath)
		{
			using func_t = decltype(&BGSCameraPath::SetParentPath);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPath::SetParentPath };
			func(this, apPath);
		}

	public:
		// members
		TESCondition                 Conditions;   // 18
		BSSimpleList<BGSCameraShot*> ShotList;     // 20
		PATH_DATA                    data;         // 28
		std::uint8_t                 pad29[0x3];   // 29
		NiFormArray*                 pChildPaths;  // 2C
		BGSCameraPath*               pParentPath;  // 30
		BGSCameraPath*               pPrevPath;    // 34
	};
	static_assert(sizeof(BGSCameraPath) == 0x38);
}
