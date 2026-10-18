#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IOTask.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSMultiBound;
	class NiAVObject;
	class TESObjectREFR;

	class CheckWithinMultiBoundTask :
		public IOTask  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CheckWithinMultiBoundTask };
		static constexpr auto VTABLE{ VTABLE::CheckWithinMultiBoundTask };

		// override (IOTask)
		virtual ~CheckWithinMultiBoundTask() = default;  // 00
		virtual void Run() override;                     // 01
		virtual void Finish() override;                  // 02
		virtual void PostProcess() override;             // 05

		CheckWithinMultiBoundTask* ctor(TESObjectREFR* apBoundRef, NiAVObject* ap3D)
		{
			using func_t = CheckWithinMultiBoundTask*(__thiscall*)(CheckWithinMultiBoundTask*, TESObjectREFR*, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::CheckWithinMultiBoundTask::ctor };
			return func(this, apBoundRef, ap3D);
		}

	public:
		// members
		TESObjectREFR*          pBoundRef;   // 18
		NiPointer<NiAVObject>   sp3D;        // 1C
		NiPointer<BSMultiBound> spBound;     // 20
		bool                    bWithin;     // 24
		std::uint8_t            pad25[0x3];  // 25
	};
	static_assert(sizeof(CheckWithinMultiBoundTask) == 0x28);
}
