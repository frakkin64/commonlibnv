#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPathingMessage.h"
#include "RE/B/BSTCommonLLMessageQueue.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class ActorPathingMessageQueue :
		public BSTCommonLLMessageQueue<ActorPathingMessage>,  // 00
		public NiRefObject  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorPathingMessageQueue };
		static constexpr auto VTABLE{ VTABLE::ActorPathingMessageQueue };

		// override (BSTCommonLLMessageQueue<ActorPathingMessage>)
		virtual ~ActorPathingMessageQueue() = default;  // 00

		ActorPathingMessageQueue* ctor()
		{
			using func_t = ActorPathingMessageQueue*(__thiscall*)(ActorPathingMessageQueue*);
			static REL::Relocation<func_t> func{ Offsets::ActorPathingMessageQueue::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(ActorPathingMessageQueue) == 0x1C);
}
