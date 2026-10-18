#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class MobileObject;

	class MobileObjectMessage
	{
	public:
		enum class MsgType : std::int32_t
		{
			kMT_COUNT = 0x0,
			kMT_MOB = 0x1,
			kMT_END = 0x2,
		};

		MobileObjectMessage* ctor()
		{
			using func_t = MobileObjectMessage*(__thiscall*)(MobileObjectMessage*);
			static REL::Relocation<func_t> func{ Offsets::MobileObjectMessage::ctor };
			return func(this);
		}

	public:
		// members
		MobileObjectMessage::MsgType eMsgType;  // 00
		std::uint32_t                uiCount;   // 04
		MobileObject*                pMob;      // 08
	};
}
