#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class BSFileEntry;
	class NiTexture;

	class QueuedTexture :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedTexture };
		static constexpr auto VTABLE{ VTABLE::QueuedTexture };

		// override (QueuedFileEntry)
		virtual ~QueuedTexture() = default;                                                     // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		QueuedTexture* ctor(char const* apFileName, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedTexture*(__thiscall*)(QueuedTexture*, char const*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedTexture::ctor };
			return func(this, apFileName, aePriority);
		}

		QueuedTexture* ctor(BSFileEntry* apFileEntry, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedTexture*(__thiscall*)(QueuedTexture*, BSFileEntry*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedTexture::ctor_1 };
			return func(this, apFileEntry, aePriority);
		}

		void SetLoadDegraded(bool abValue)
		{
			using func_t = decltype(&QueuedTexture::SetLoadDegraded);
			static REL::Relocation<func_t> func{ Offsets::QueuedTexture::SetLoadDegraded };
			func(this, abValue);
		}

		void SetInQueuedTextureMap(bool abValue)
		{
			using func_t = decltype(&QueuedTexture::SetInQueuedTextureMap);
			static REL::Relocation<func_t> func{ Offsets::QueuedTexture::SetInQueuedTextureMap };
			func(this, abValue);
		}

		bool GetLoadDegraded() const
		{
			using func_t = decltype(&QueuedTexture::GetLoadDegraded);
			static REL::Relocation<func_t> func{ Offsets::QueuedTexture::GetLoadDegraded };
			return func(this);
		}

	public:
		// members
		NiPointer<NiTexture> spTexture;   // 30
		std::uint8_t         cFlags;      // 34
		std::uint8_t         pad35[0x3];  // 35
	};
	static_assert(sizeof(QueuedTexture) == 0x38);
}
