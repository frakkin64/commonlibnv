#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/Q/QueuedFile.h"

namespace RE
{
	class EffectSetting;
	class MagicItem;

	class QueuedMagicItem :
		public QueuedFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedMagicItem };
		static constexpr auto VTABLE{ VTABLE::QueuedMagicItem };

		// override (QueuedFile)
		virtual ~QueuedMagicItem() = default;   // 00
		virtual void QueueMe() override;        // 08
		virtual void CheckFinished() override;  // 0A

		QueuedMagicItem* ctor(MagicItem* apMagicItem, EffectSetting* apAVEffectSetting, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedMagicItem*(__thiscall*)(QueuedMagicItem*, MagicItem*, EffectSetting*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedMagicItem::ctor };
			return func(this, apMagicItem, apAVEffectSetting, aePriority);
		}

	public:
		// members
		MagicItem*     pMagicItem;      // 28
		EffectSetting* pEffectSetting;  // 2C
	};
	static_assert(sizeof(QueuedMagicItem) == 0x30);
}
