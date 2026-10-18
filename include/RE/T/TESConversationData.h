#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESForm;
	class TESTopic;
	class TESTopicInfo;

	class TESConversationData
	{
	public:
		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESConversationData::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESConversationData::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		BSSimpleList<TESTopic*>     m_listLinkFrom;       // 00?
		BSSimpleList<TESTopic*>     m_listLinkTo;         // 08?
		BSSimpleList<TESTopicInfo*> m_listFollowUpInfos;  // 10?
	};
}
