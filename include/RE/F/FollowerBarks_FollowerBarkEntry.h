#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FollowerBarks_FollowerBarkType.h"

namespace RE
{
	class Actor;

	class FollowerBarks_FollowerBarkEntry
	{
	public:
		void BuildBarkEntry(Actor* apBarker, FollowerBarks_FollowerBarkType aeBarkType)
		{
			using func_t = decltype(&FollowerBarks_FollowerBarkEntry::BuildBarkEntry);
			static REL::Relocation<func_t> func{ Offsets::FollowerBarks_FollowerBarkEntry::BuildBarkEntry };
			func(this, apBarker, aeBarkType);
		}

		void Trigger()
		{
			using func_t = decltype(&FollowerBarks_FollowerBarkEntry::Trigger);
			static REL::Relocation<func_t> func{ Offsets::FollowerBarks_FollowerBarkEntry::Trigger };
			func(this);
		}

	public:
		// members
		Actor*                         m_pSpeaker;                 // 00
		FollowerBarks_FollowerBarkType m_eBarkType;                // 04
		std::uint32_t                  m_tNoRepeatExpiration;      // 08?
		std::uint32_t                  m_tNoOtherBarksExpiration;  // 0C?
	};
}
