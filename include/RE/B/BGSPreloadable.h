#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"
#include "RE/I/IO_TASK_PRIORITY.h"

namespace RE
{
	class QueuedFile;

	class BGSPreloadable :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPreloadable };
		static constexpr auto VTABLE{ VTABLE::BGSPreloadable };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual void QueueFiles(IO_TASK_PRIORITY a_arg1, QueuedFile* a_arg2);  // 04

		BGSPreloadable* ctor()
		{
			using func_t = BGSPreloadable*(__thiscall*)(BGSPreloadable*);
			static REL::Relocation<func_t> func{ Offsets::BGSPreloadable::ctor };
			return func(this);
		}
	};
}
