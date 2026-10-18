#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class NiTexture;

	class SkyTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SkyTask };
		static constexpr auto VTABLE{ VTABLE::SkyTask };

		// override (QueuedFileEntry)
		virtual ~SkyTask() = default;                                                           // 00
		virtual void Run() override;                                                            // 01
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		SkyTask* ctor(NiPointer<NiTexture>* apspTexture, char const* apFilename)
		{
			using func_t = SkyTask*(__thiscall*)(SkyTask*, NiPointer<NiTexture>*, char const*);
			static REL::Relocation<func_t> func{ Offsets::SkyTask::ctor };
			return func(this, apspTexture, apFilename);
		}

	public:
		// members
		NiPointer<NiTexture>* pspTexture;  // 30
		std::uint32_t         pad34;       // 34
	};
	static_assert(sizeof(SkyTask) == 0x38);
}
