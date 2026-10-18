#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiCloningProcess.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSCloningProcess :
		public NiCloningProcess  // 00
	{
	public:
		BSCloningProcess* ctor(float afScale)
		{
			using func_t = BSCloningProcess*(__thiscall*)(BSCloningProcess*, float);
			static REL::Relocation<func_t> func{ Offsets::BSCloningProcess::ctor };
			return func(this, afScale);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BSCloningProcess*);
			static REL::Relocation<func_t> func{ Offsets::BSCloningProcess::dtor };
			func(this);
		}

	public:
		// members
		NiPoint3 Scale;  // 10
	};
}
