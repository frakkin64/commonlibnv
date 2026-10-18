#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESBoundObject.h"

namespace RE
{
	class BSTreeNode;
	class NiAVObject;
	class TESObjectREFR;

	class TESBoundTreeObject :
		public TESBoundObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESBoundTreeObject };
		static constexpr auto VTABLE{ VTABLE::TESBoundTreeObject };

		// override (TESBoundObject)
		virtual ~TESBoundTreeObject() = default;                                         // 04
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy) override;  // 53
		virtual void UnClone3D(TESObjectREFR* apRequester) override;                     // 54
		virtual void InitDefaultWorn() override;                                         // 57
		virtual NiAVObject* LoadGraphics(TESObjectREFR* apRef) override;                 // 5D

		// add
		virtual void RefreshBound(BSTreeNode* apTree);  // 60
	};
	static_assert(sizeof(TESBoundTreeObject) == 0x30);
}
