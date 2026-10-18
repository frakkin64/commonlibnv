#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESSoundFile :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESSoundFile };
		static constexpr auto VTABLE{ VTABLE::TESSoundFile };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual void SetSoundFile(char const* apSound);  // 04

		void Save()
		{
			using func_t = decltype(&TESSoundFile::Save);
			static REL::Relocation<func_t> func{ Offsets::TESSoundFile::Save };
			func(this);
		}

		std::uint32_t GetSoundFileLength()
		{
			using func_t = decltype(&TESSoundFile::GetSoundFileLength);
			static REL::Relocation<func_t> func{ Offsets::TESSoundFile::GetSoundFileLength };
			return func(this);
		}

		TESSoundFile* ctor()
		{
			using func_t = TESSoundFile*(__thiscall*)(TESSoundFile*);
			static REL::Relocation<func_t> func{ Offsets::TESSoundFile::ctor };
			return func(this);
		}

	public:
		// members
		BSStringT<char> cSoundFile;  // 04
	};
}
