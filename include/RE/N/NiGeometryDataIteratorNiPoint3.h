#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiTConvertingStrideIterator.h"

namespace RE
{
	class NiGeometryDataIteratorNiPoint3 :
		public NiTConvertingStrideIterator<NiPoint3>  // 00
	{
	public:
		NiGeometryDataIteratorNiPoint3* ctor()
		{
			using func_t = NiGeometryDataIteratorNiPoint3*(__thiscall*)(NiGeometryDataIteratorNiPoint3*);
			static REL::Relocation<func_t> func{ Offsets::NiGeometryDataIteratorNiPoint3::ctor };
			return func(this);
		}
	};
}
