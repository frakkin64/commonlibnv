#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFile.h"

namespace RE
{
	class BSFaceGenNiNode;
	class BipedAnim;
	class TESNPC;
	class TESObjectREFR;

	class QueuedHead :
		public QueuedFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedHead };
		static constexpr auto VTABLE{ VTABLE::QueuedHead };

		// override (QueuedFile)
		virtual ~QueuedHead() = default;                                                        // 00
		virtual void Run() override;                                                            // 01
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A

		void Attach(TESObjectREFR* apRef, BipedAnim* apBipedAnim)
		{
			using func_t = decltype(&QueuedHead::Attach);
			static REL::Relocation<func_t> func{ Offsets::QueuedHead::Attach };
			func(this, apRef, apBipedAnim);
		}

	public:
		// members
		TESNPC*                    pNPC;           // 28
		NiPointer<BSFaceGenNiNode> spBipedNode;    // 2C
		NiPointer<BSFaceGenNiNode> spSkinnedNode;  // 30
		std::uint32_t              pad34;          // 34
	};
	static_assert(sizeof(QueuedHead) == 0x38);
}
