#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class __declspec(novtable) BSAudioListener
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAudioListener };
		static constexpr auto VTABLE{ VTABLE::BSAudioListener };

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

		// members
		NiPoint3      ListenerPosition;   // 04?
		NiPoint3      FrontOrientation;   // 10?
		NiPoint3      TopOrientation;     // 1C?
		NiPoint3      vVelocity;          // 28?
		std::uint32_t dwTimeLastUpdated;  // 34?
		float         fVelocity;          // 38?
		float         fRolloffFactor;     // 3C
		float         fGain;              // 40
		std::uint32_t iEvironmentType;    // 44
	};
}
