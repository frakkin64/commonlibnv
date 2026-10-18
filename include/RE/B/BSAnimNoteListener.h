#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSAnimNote_AnimNoteType.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class IBSAnimNoteReceiver;

	// not confirmed: no named code in the executable refers to this type
	class BSAnimNoteListener
	{
	public:
		class BSAnimReceiverType;

		class BSAnimReceiverType
		{
		public:
			// members
			BSAnimNote_AnimNoteType eNoteType;  // 00?
			IBSAnimNoteReceiver*    pReceiver;  // 04?
		};

		// members
		NiTPrimitiveArray<BSAnimNoteListener::BSAnimReceiverType*> ReceiverA;  // 00?
	};
}
