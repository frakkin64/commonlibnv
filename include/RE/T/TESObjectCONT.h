#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSOpenCloseForm.h"
#include "RE/C/CONT_DATA.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESContainer.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESMagicCasterForm.h"
#include "RE/T/TESMagicTargetForm.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESWeightForm.h"

namespace RE
{
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESSound;

	class TESObjectCONT :
		public TESBoundAnimObject,  // 00
		public TESContainer,  // 30
		public TESFullName,  // 3C
		public TESModelTextureSwap,  // 48
		public TESScriptableForm,  // 68
		public TESWeightForm,  // 74
		public BGSDestructibleObjectForm,  // 7C
		public BGSOpenCloseForm  // 84
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectCONT };
		static constexpr auto VTABLE{ VTABLE::TESObjectCONT };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCONT_ID };

		// override (TESBoundAnimObject)
		virtual ~TESObjectCONT() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		TESObjectCONT* ctor()
		{
			using func_t = TESObjectCONT*(__thiscall*)(TESObjectCONT*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCONT::ctor };
			return func(this);
		}

		bool CanActivate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abAllowLockpicking)
		{
			using func_t = decltype(&TESObjectCONT::CanActivate);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCONT::CanActivate };
			return func(this, apItemActivated, apActionRef, abAllowLockpicking);
		}

	public:
		// members
		std::uint8_t gap88;          // 88
		std::uint8_t pad89[0x3];     // 89
		TESSound*    pOpenSound;     // 8C
		TESSound*    pCloseSound;    // 90
		TESSound*    pLoopingSound;  // 94
		CONT_DATA    Data;           // 98
		std::uint8_t pad99[0x3];     // 99
	};
	static_assert(sizeof(TESObjectCONT) == 0x9C);
}
