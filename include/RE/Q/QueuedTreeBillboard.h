#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/Q/QueuedTexture.h"

namespace RE
{
	class TREE_BILLBOARD_DATA;

	class QueuedTreeBillboard :
		public QueuedTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedTreeBillboard };
		static constexpr auto VTABLE{ VTABLE::QueuedTreeBillboard };

		// override (QueuedTexture)
		virtual ~QueuedTreeBillboard() = default;                                               // 00
		virtual void Finish() override;                                                         // 02
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void PostProcess() override;                                                    // 05

		// add
		virtual void CreateBillboard();  // 0C

		QueuedTreeBillboard* ctor(char const* apFileName, IO_TASK_PRIORITY aePriority, TREE_BILLBOARD_DATA* apBillboardData)
		{
			using func_t = QueuedTreeBillboard*(__thiscall*)(QueuedTreeBillboard*, char const*, IO_TASK_PRIORITY, TREE_BILLBOARD_DATA*);
			static REL::Relocation<func_t> func{ Offsets::QueuedTreeBillboard::ctor };
			return func(this, apFileName, aePriority, apBillboardData);
		}

	public:
		// members
		TREE_BILLBOARD_DATA* pBillboardData;  // 38
		std::uint32_t        pad3C;           // 3C
	};
	static_assert(sizeof(QueuedTreeBillboard) == 0x40);
}
