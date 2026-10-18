#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ADDON_DATA.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESSound;

	class BGSAddonNode :
		public TESBoundObject,  // 00
		public TESModelTextureSwap  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAddonNode };
		static constexpr auto VTABLE{ VTABLE::BGSAddonNode };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kADDN_ID };

		// override (TESBoundObject)
		virtual ~BGSAddonNode() = default;               // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		bool IsMasterParticleSystem()
		{
			using func_t = decltype(&BGSAddonNode::IsMasterParticleSystem);
			static REL::Relocation<func_t> func{ Offsets::BGSAddonNode::IsMasterParticleSystem };
			return func(this);
		}

		BGSAddonNode* ctor()
		{
			using func_t = BGSAddonNode*(__thiscall*)(BGSAddonNode*);
			static REL::Relocation<func_t> func{ Offsets::BGSAddonNode::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t iIndex;                      // 50
		TESSound*     pSound;                      // 54
		ADDON_DATA    Data;                        // 58
		std::uint32_t iMasterParticleSystemIndex;  // 5C
	};
	static_assert(sizeof(BGSAddonNode) == 0x60);
}
