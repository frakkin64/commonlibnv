#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSAnimNote_AnimNoteType.h"
#include "RE/I/IBSAnimNoteReceiver.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSAnimNote;
	class TESObjectREFR;

	class BSAnimNoteReceiver :
		public IBSAnimNoteReceiver  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAnimNoteReceiver };
		static constexpr auto VTABLE{ VTABLE::BSAnimNoteReceiver };

		class BSAnimNoteReceiverType;

		class BSAnimNoteReceiverType
		{
		public:
			// members
			BSAnimNote_AnimNoteType eType;      // 00?
			void*                   pCallback;  // 04?
		};

		// override (IBSAnimNoteReceiver)
		virtual ~BSAnimNoteReceiver() = default;           // 00
		virtual void Update(BSAnimNote* a_arg1) override;  // 01

		BSAnimNoteReceiver* ctor()
		{
			using func_t = BSAnimNoteReceiver*(__thiscall*)(BSAnimNoteReceiver*);
			static REL::Relocation<func_t> func{ Offsets::BSAnimNoteReceiver::ctor };
			return func(this);
		}

	public:
		// members
		TESObjectREFR*                                                 pObjRefr;   // 04
		NiTPrimitiveArray<BSAnimNoteReceiver::BSAnimNoteReceiverType*> CallTypeA;  // 08
	};
	static_assert(sizeof(BSAnimNoteReceiver) == 0x18);
}
