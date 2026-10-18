#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/ParentSpaceNode.h"
#include "RE/T/TeleportLink.h"

namespace RE
{
	class TeleportPath
	{
	public:
		TeleportPath* ctor()
		{
			using func_t = TeleportPath*(__thiscall*)(TeleportPath*);
			static REL::Relocation<func_t> func{ Offsets::TeleportPath::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TeleportPath*);
			static REL::Relocation<func_t> func{ Offsets::TeleportPath::dtor };
			func(this);
		}

		float ComputeLength()
		{
			using func_t = decltype(&TeleportPath::ComputeLength);
			static REL::Relocation<func_t> func{ Offsets::TeleportPath::ComputeLength };
			return func(this);
		}

	public:
		// members
		BSSimpleArray<ParentSpaceNode, 1024> Spaces;  // 00
		BSSimpleArray<TeleportLink, 1024>    Doors;   // 10
		NiPoint3                             Start;   // 20
		NiPoint3                             End;     // 2C
	};
}
