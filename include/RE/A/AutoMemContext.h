#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MEM_CONTEXT.h"

namespace RE
{
	class AutoMemContext
	{
	public:
		AutoMemContext* ctor(MEM_CONTEXT aeContext, bool abMutex, char const* apFile, std::int32_t aiLine)
		{
			using func_t = AutoMemContext*(__thiscall*)(AutoMemContext*, MEM_CONTEXT, bool, char const*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::AutoMemContext::ctor };
			return func(this, aeContext, abMutex, apFile, aiLine);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(AutoMemContext*);
			static REL::Relocation<func_t> func{ Offsets::AutoMemContext::dtor };
			func(this);
		}

		void Enter(MEM_CONTEXT aeContext, bool abMutex, char const* apFile, std::int32_t aiLine)
		{
			using func_t = decltype(&AutoMemContext::Enter);
			static REL::Relocation<func_t> func{ Offsets::AutoMemContext::Enter };
			func(this, aeContext, abMutex, apFile, aiLine);
		}

		void Leave()
		{
			using func_t = decltype(&AutoMemContext::Leave);
			static REL::Relocation<func_t> func{ Offsets::AutoMemContext::Leave };
			func(this);
		}

	public:
		// members
		MEM_CONTEXT iOldMemContext;  // 00
	};
}
