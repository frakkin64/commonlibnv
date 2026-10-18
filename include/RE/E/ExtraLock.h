#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class REFR_LOCK;

	class ExtraLock :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraLock() = default;                         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraLock* ctor(REFR_LOCK* apLock)
		{
			using func_t = ExtraLock*(__thiscall*)(ExtraLock*, REFR_LOCK*);
			static REL::Relocation<func_t> func{ Offsets::ExtraLock::ctor };
			return func(this, apLock);
		}

		void UnLockDoor()
		{
			using func_t = decltype(&ExtraLock::UnLockDoor);
			static REL::Relocation<func_t> func{ Offsets::ExtraLock::UnLockDoor };
			func(this);
		}

	public:
		// members
		REFR_LOCK* pLock;  // 0C
	};
	static_assert(sizeof(ExtraLock) == 0x10);
}
