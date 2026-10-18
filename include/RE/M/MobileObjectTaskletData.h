#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTStaticFreeList.h"
#include "RE/B/BSWin32TaskletData.h"
#include "RE/M/MobileObjectMessage.h"

namespace RE
{
	class MobileObject;

	class MobileObjectTaskletData :
		public BSWin32TaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MobileObjectTaskletData };
		static constexpr auto VTABLE{ VTABLE::MobileObjectTaskletData };

		// override (BSWin32TaskletData)
		virtual ~MobileObjectTaskletData() = default;  // 00
		virtual void Process() override;               // 02

		// add
		virtual void HandleCountMessage(std::uint32_t a_arg1);  // 04
		virtual void HandleMobMessage(MobileObject* a_arg1);    // 05
		virtual void HandleEndMessage(std::uint32_t a_arg1);    // 06

		void RunToCompletion(std::uint32_t aiThread)
		{
			using func_t = decltype(&MobileObjectTaskletData::RunToCompletion);
			static REL::Relocation<func_t> func{ Offsets::MobileObjectTaskletData::RunToCompletion };
			func(this, aiThread);
		}

		MobileObjectTaskletData* ctor(BSTStaticFreeList<MobileObjectMessage, 4096>* apPool)
		{
			using func_t = MobileObjectTaskletData*(__thiscall*)(MobileObjectTaskletData*, BSTStaticFreeList<MobileObjectMessage, 4096>*);
			static REL::Relocation<func_t> func{ Offsets::MobileObjectTaskletData::ctor };
			return func(this, apPool);
		}

		bool SendEndMessage()
		{
			using func_t = decltype(&MobileObjectTaskletData::SendEndMessage);
			static REL::Relocation<func_t> func{ Offsets::MobileObjectTaskletData::SendEndMessage };
			return func(this);
		}

	public:
		// members
		// not placed: pmoblist, msgqueue, uiHighActorCount, eType, StartTime, EndTime, ExecutionStartTime
		std::uint8_t  pad20[0x14];  // 20
		std::uint32_t iThread;      // 34
	};
	static_assert(sizeof(MobileObjectTaskletData) == 0x38);
}
