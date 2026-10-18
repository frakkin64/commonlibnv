#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DIALOGUE_EMOTION.h"

namespace RE
{
	class TESSound;
	class TESTopic;

	class RESPONSE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&RESPONSE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::RESPONSE_DATA::Endian };
			func(this);
		}

	public:
		// members
		DIALOGUE_EMOTION eEmotion;            // 00
		std::uint32_t    iEmotionValue;       // 04
		TESTopic*        pConversationTopic;  // 08
		std::uint8_t     ucResponseID;        // 0C
		std::uint8_t     pad0D[0x3];          // 0D
		TESSound*        pVoiceSound;         // 10
		bool             bUseEmotion;         // 14?
		std::uint8_t     pad15[0x3];          // 15
	};
}
