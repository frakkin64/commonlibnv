#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSIdleCollection.h"
#include "RE/T/TESBoundObject.h"

namespace RE
{
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class BGSIdleMarker :
		public TESBoundObject,  // 00
		public BGSIdleCollection  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSIdleMarker };
		static constexpr auto VTABLE{ VTABLE::BGSIdleMarker };

		// override (TESBoundObject)
		virtual ~BGSIdleMarker() = default;                                  // 04
		virtual bool Load(TESFile* apFile) override;                         // 08
		virtual void Save() override;                                        // 0B
		virtual void InitItem() override;                                    // 22
		virtual void Copy(TESForm* apCopy) override;                         // 42
		virtual bool Compare(TESForm* apCopy) override;                      // 43
		virtual void UnClone3D(TESObjectREFR* apRequester) override;         // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;  // 5E
	};
	static_assert(sizeof(BGSIdleMarker) == 0x40);
}
