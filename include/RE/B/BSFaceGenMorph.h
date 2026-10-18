#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSFaceGenBaseMorphExtraData;
	class NiTriBasedGeom;

	class __declspec(novtable) BSFaceGenMorph
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenMorph };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenMorph };

		// add
		virtual ~BSFaceGenMorph() = default;                                                                 // 00
		virtual void ApplyMorph(NiTriBasedGeom* a_arg1, BSFaceGenBaseMorphExtraData* a_arg2, float a_arg3);  // 01

		BSFaceGenMorph* ctor()
		{
			using func_t = BSFaceGenMorph*(__thiscall*)(BSFaceGenMorph*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorph::ctor };
			return func(this);
		}
	};
}
