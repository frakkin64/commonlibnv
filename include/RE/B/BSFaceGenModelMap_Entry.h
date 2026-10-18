#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSFaceGenModel;

	class BSFaceGenModelMap_Entry :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenModelMap_Entry };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenModelMap_Entry };

		// override (NiRefObject)
		virtual ~BSFaceGenModelMap_Entry() = default;  // 00

		BSFaceGenModelMap_Entry* ctor()
		{
			using func_t = BSFaceGenModelMap_Entry*(__thiscall*)(BSFaceGenModelMap_Entry*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap_Entry::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<BSFaceGenModel> spModel;  // 08
		std::uint32_t             uiTime;   // 0C
	};
	static_assert(sizeof(BSFaceGenModelMap_Entry) == 0x10);
}
