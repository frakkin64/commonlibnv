#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundObject.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class BGSStaticCollection :
		public TESBoundObject,  // 00
		public TESModelTextureSwap  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSStaticCollection };
		static constexpr auto VTABLE{ VTABLE::BGSStaticCollection };

		// override (TESBoundObject)
		virtual ~BGSStaticCollection() = default;        // 04
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43
	};
	static_assert(sizeof(BGSStaticCollection) == 0x50);
}
