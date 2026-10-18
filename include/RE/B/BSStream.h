#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiStream.h"
#include "RE/N/NiTStringMap.h"

namespace RE
{
	class BSNodeReferences;
	class NiFile;
	class NiObject;
	class NiObjectNET;

	class BSStream :
		public NiStream  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSStream };
		static constexpr auto VTABLE{ VTABLE::BSStream };

		// override (NiStream)
		virtual ~BSStream() = default;                                 // 00
		virtual bool Save(char const* apFileName) override;            // 06
		virtual bool RegisterSaveObject(NiObject* apObject) override;  // 09
		virtual bool LoadStream() override;                            // 0F
		virtual bool SaveStream() override;                            // 10

		// add
		virtual bool Load(char const* apFileName, NiFile* apFile);  // 18

		BSStream* ctor()
		{
			using func_t = BSStream*(__thiscall*)(BSStream*);
			static REL::Relocation<func_t> func{ Offsets::BSStream::ctor };
			return func(this);
		}

		static void InitLoaders()
		{
			using func_t = decltype(&BSStream::InitLoaders);
			static REL::Relocation<func_t> func{ Offsets::BSStream::InitLoaders };
			func();
		}

	public:
		// members
		NiTStringMap<NiObjectNET*>* pObjectRefMap;     // 5C4
		NiPointer<BSNodeReferences> spNodeReferences;  // 5C8
	};
}
