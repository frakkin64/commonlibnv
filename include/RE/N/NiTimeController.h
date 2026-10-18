#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTimeController_CycleType.h"

namespace RE
{
	class NiObjectNET;
	class NiUpdateData;

	class NiTimeController :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTimeController };
		static constexpr auto VTABLE{ VTABLE::NiTimeController };

		using CycleType = NiTimeController_CycleType;

		enum class AnimType : std::int32_t
		{
			kAPP_TIME = 0x0,
			kAPP_INIT = 0x1,
		};

		// add
		virtual void Unk_23();                          // 23
		virtual void Unk_24();                          // 24
		virtual void Update(NiUpdateData& UpdateData);  // 25
		virtual void Unk_26();                          // 26
		virtual void Unk_27();                          // 27
		virtual void Unk_28();                          // 28
		virtual void Unk_29();                          // 29
		virtual void Unk_2A();                          // 2A
		virtual void Unk_2B();                          // 2B
		virtual void Unk_2C();                          // 2C

		void SetActive(bool bActive)
		{
			using func_t = decltype(&NiTimeController::SetActive);
			static REL::Relocation<func_t> func{ Offsets::NiTimeController::SetActive };
			func(this, bActive);
		}

		bool GetActive() const
		{
			using func_t = decltype(&NiTimeController::GetActive);
			static REL::Relocation<func_t> func{ Offsets::NiTimeController::GetActive };
			return func(this);
		}

		static char* GetViewerString(char const* pcPrefix, NiTimeController::AnimType eType)
		{
			using func_t = char*(__cdecl*)(char const*, NiTimeController::AnimType);
			static REL::Relocation<func_t> func{ Offsets::NiTimeController::GetViewerString };
			return func(pcPrefix, eType);
		}

		static char* GetViewerString(char const* pcPrefix, NiTimeController_CycleType eType)
		{
			using func_t = char*(__cdecl*)(char const*, NiTimeController_CycleType);
			static REL::Relocation<func_t> func{ Offsets::NiTimeController::GetViewerString_1 };
			return func(pcPrefix, eType);
		}

	public:
		// members
		std::uint16_t               m_uFlags;             // 08
		std::uint16_t               pad0A;                // 0A
		float                       m_fFrequency;         // 0C
		float                       m_fPhase;             // 10
		float                       m_fLoKeyTime;         // 14
		float                       m_fHiKeyTime;         // 18
		float                       m_fStartTime;         // 1C
		float                       m_fLastTime;          // 20
		float                       m_fWeightedLastTime;  // 24
		float                       m_fScaledTime;        // 28
		NiObjectNET*                m_pkTarget;           // 2C
		NiPointer<NiTimeController> m_spNext;             // 30
	};
	static_assert(sizeof(NiTimeController) == 0x34);
}
