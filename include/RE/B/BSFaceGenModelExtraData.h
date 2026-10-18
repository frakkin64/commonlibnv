#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSFaceGenModel;

	class BSFaceGenModelExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenModelExtraData };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenModelExtraData };

		// override (NiExtraData)
		virtual ~BSFaceGenModelExtraData() = default;  // 00

		// add
		virtual BSFaceGenModel* GetModel();  // 25

		BSFaceGenModelExtraData* ctor(BSFaceGenModel* apModel)
		{
			using func_t = BSFaceGenModelExtraData*(__thiscall*)(BSFaceGenModelExtraData*, BSFaceGenModel*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelExtraData::ctor };
			return func(this, apModel);
		}

	public:
		// members
		NiPointer<BSFaceGenModel> spModel;  // 0C
	};
	static_assert(sizeof(BSFaceGenModelExtraData) == 0x10);
}
