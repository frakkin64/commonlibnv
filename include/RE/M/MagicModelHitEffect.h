#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSLoadGameSubBuffer.h"
#include "RE/M/MagicHitEffect.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;

	class MagicModelHitEffect :
		public MagicHitEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicModelHitEffect };
		static constexpr auto VTABLE{ VTABLE::MagicModelHitEffect };

		MagicModelHitEffect* ctor()
		{
			using func_t = MagicModelHitEffect*(__thiscall*)(MagicModelHitEffect*);
			static REL::Relocation<func_t> func{ Offsets::MagicModelHitEffect::ctor };
			return func(this);
		}

	public:
		// members
		bool                  bOwnPath;             // 28
		bool                  b3rdPerson;           // 29
		std::uint16_t         pad2A;                // 2A
		const char*           pFilename;            // 2C
		NiPointer<NiAVObject> spObject;             // 30
		NiPointer<NiAVObject> spTarget;             // 34
		BGSLoadGameSubBuffer  LoadedDataSubBuffer;  // 38
	};
	static_assert(sizeof(MagicModelHitEffect) == 0x3C);
}
