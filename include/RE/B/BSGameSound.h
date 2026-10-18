#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BSSoundMessage;

	class __declspec(novtable) BSGameSound
	{
	public:
		static constexpr auto RTTI{ RTTI::BSGameSound };
		static constexpr auto VTABLE{ VTABLE::BSGameSound };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A
		virtual void Unk_0B();  // 0B
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F
		virtual void Unk_10();  // 10
		virtual void Unk_11();  // 11
		virtual void Unk_12();  // 12
		virtual void Unk_13();  // 13
		virtual void Unk_14();  // 14
		virtual void Unk_15();  // 15
		virtual void Unk_16();  // 16
		virtual void Unk_17();  // 17
		virtual void Unk_18();  // 18
		virtual void Unk_19();  // 19
		virtual void Unk_1A();  // 1A
		virtual void Unk_1B();  // 1B

		// members
		std::uint32_t                   iSoundID;                 // 04
		std::uint32_t                   iSoundTypeFlags;          // 08
		std::uint32_t                   iModifierFlags;           // 0C
		std::uint32_t                   iStateFlags;              // 10
		std::int32_t                    iDurationInMS;            // 14
		std::uint16_t                   iStaticAttenuation;       // 18
		std::uint16_t                   iReverbAttenuation;       // 1A
		std::uint16_t                   iSystemAttenuation;       // 1C
		std::uint16_t                   iDistanceAttenuation;     // 1E
		std::uint16_t                   iFaderAttenuation;        // 20
		std::uint16_t                   pad22;                    // 22
		float                           fCurrentVolume;           // 24
		float                           fBeginTime;               // 28
		float                           fEndTime;                 // 2C
		std::uint32_t                   iWeatherFlags;            // 30
		std::uint16_t                   iSamplesPerSecond;        // 34
		char                            pFilename[260];           // 36
		std::uint16_t                   pad13A;                   // 13A
		float                           fMaxDist;                 // 13C
		float                           fMinDist;                 // 140
		std::uint32_t                   iSoundHash;               // 144
		std::uint32_t                   iDirectoryHash;           // 148
		std::uint32_t                   iSoundSize;               // 14C
		float                           fDistanceToListener;      // 150
		std::uint32_t                   iEnvironmentType;         // 154
		std::uint8_t                    iFreqVariance;            // 158
		std::uint8_t                    pad159;                   // 159
		std::uint16_t                   iModSamplesPerSecond;     // 15A
		std::uint32_t                   iSynchStartTime;          // 15C
		std::uint32_t                   iCleanupDelayInMS;        // 160
		void*                           fnCompletionCallback;     // 164
		void*                           fnPlayedCallback;         // 168
		void*                           pSoundCompletionContext;  // 16C
		void*                           pSoundPlayContext;        // 170
		std::uint32_t                   iLoopStart;               // 174
		std::uint32_t                   iLoopEnd;                 // 178
		NiPoint3                        vBeamEnd;                 // 17C
		std::uint32_t                   iPriority;                // 188
		NiTPointerList<BSSoundMessage*> QueuedMessages;           // 18C?
	};
}
