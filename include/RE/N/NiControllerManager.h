#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiTObjectArray.h"
#include "RE/N/NiTObjectSet.h"
#include "RE/N/NiTPrimitiveSet.h"
#include "RE/N/NiTStringPointerMap.h"
#include "RE/N/NiTimeController.h"

namespace RE
{
	class BSAnimNoteListener;
	class NiAVObjectPalette;
	class NiControllerSequence;
	class NiFixedString;

	class NiControllerManager :
		public NiTimeController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiControllerManager };
		static constexpr auto VTABLE{ VTABLE::NiControllerManager };

		// add
		virtual void Unk_2D();  // 2D

		NiControllerSequence* GetSequenceByName(NiFixedString const& kName)
		{
			using func_t = decltype(&NiControllerManager::GetSequenceByName);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::GetSequenceByName };
			return func(this, kName);
		}

		bool ActivateSequence(NiControllerSequence* pkSequence, std::int32_t iPriority, bool bStartOver, float fWeight, float fEaseInTime, NiControllerSequence* pkTimeSyncSeq)
		{
			using func_t = decltype(&NiControllerManager::ActivateSequence);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::ActivateSequence };
			return func(this, pkSequence, iPriority, bStartOver, fWeight, fEaseInTime, pkTimeSyncSeq);
		}

		bool DeactivateSequence(NiControllerSequence* pkSequence, float fEaseOutTime)
		{
			using func_t = decltype(&NiControllerManager::DeactivateSequence);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::DeactivateSequence };
			return func(this, pkSequence, fEaseOutTime);
		}

		void DeactivateAll(float fEaseOutTime)
		{
			using func_t = decltype(&NiControllerManager::DeactivateAll);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::DeactivateAll };
			func(this, fEaseOutTime);
		}

		std::uint32_t GetSequenceCount() const
		{
			using func_t = decltype(&NiControllerManager::GetSequenceCount);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::GetSequenceCount };
			return func(this);
		}

		NiControllerSequence* GetSequenceAt(std::uint32_t uiIndex)
		{
			using func_t = decltype(&NiControllerManager::GetSequenceAt);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::GetSequenceAt };
			return func(this, uiIndex);
		}

		NiAVObjectPalette* GetObjectPalette() const
		{
			using func_t = decltype(&NiControllerManager::GetObjectPalette);
			static REL::Relocation<func_t> func{ Offsets::NiControllerManager::GetObjectPalette };
			return func(this);
		}

	public:
		// members
		NiTObjectArray<NiPointer<NiControllerSequence>> m_kSequenceArray;    // 34
		NiTPrimitiveSet<NiControllerSequence*>          m_kActiveSequences;  // 44
		NiTStringPointerMap<NiControllerSequence*>      m_kStringMap;        // 50
		BSAnimNoteListener*                             pListener;           // 64
		bool                                            m_bCumulative;       // 68
		std::uint8_t                                    pad69[0x3];          // 69
		NiTObjectSet<NiPointer<NiControllerSequence>>   m_kTempBlendSeqs;    // 6C
		NiPointer<NiAVObjectPalette>                    m_spObjectPalette;   // 78
	};
}
