#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTimeController_CycleType.h"

namespace RE
{
	class BSAnimNote;
	class NiAVObject;
	class NiBlendInterpolator;
	class NiControllerManager;
	class NiInterpController;
	class NiInterpolator;
	class NiStringPalette;
	class NiTextKeyExtraData;

	class NiControllerSequence :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiControllerSequence };
		static constexpr auto VTABLE{ VTABLE::NiControllerSequence };

		class IDTag;
		class InterpArrayItem;

		enum class AnimState : std::int32_t
		{
			kINACTIVE = 0x0,
			kANIMATING = 0x1,
			kEASEIN = 0x2,
			kEASEOUT = 0x3,
			kTRANSSOURCE = 0x4,
			kTRANSDEST = 0x5,
			kMORPHSOURCE = 0x6,
		};

		class IDTag
		{
		public:
			// members
			NiFixedString m_kAVObjectName;    // 00?
			NiFixedString m_kPropertyType;    // 04?
			NiFixedString m_kCtlrType;        // 08?
			NiFixedString m_kCtlrID;          // 0C?
			NiFixedString m_kInterpolatorID;  // 10?
		};

		class InterpArrayItem
		{
		public:
			// members
			NiPointer<NiInterpolator>     m_spInterpolator;  // 00?
			NiPointer<NiInterpController> m_spInterpCtlr;    // 04?
			NiBlendInterpolator*          m_pkBlendInterp;   // 08?
			std::uint8_t                  m_ucBlendIdx;      // 0C?
			std::uint8_t                  m_ucPriority;      // 0D?
			std::uint16_t                 pad0E;             // 0E
		};

		// add
		virtual bool Deactivate(float afEaseOutTime, bool abTransition);  // 23

		float GetPhase() const
		{
			using func_t = decltype(&NiControllerSequence::GetPhase);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::GetPhase };
			return func(this);
		}

		void SetSequenceWeight(float fWeight)
		{
			using func_t = decltype(&NiControllerSequence::SetSequenceWeight);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::SetSequenceWeight };
			func(this, fWeight);
		}

		void ResetSequence()
		{
			using func_t = decltype(&NiControllerSequence::ResetSequence);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::ResetSequence };
			func(this);
		}

		float GetEndKeyTime() const
		{
			using func_t = decltype(&NiControllerSequence::GetEndKeyTime);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::GetEndKeyTime };
			return func(this);
		}

		float GetOffset() const
		{
			using func_t = decltype(&NiControllerSequence::GetOffset);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::GetOffset };
			return func(this);
		}

		float GetBeginKeyTime() const
		{
			using func_t = decltype(&NiControllerSequence::GetBeginKeyTime);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::GetBeginKeyTime };
			return func(this);
		}

		void SetOffset(float fOffset)
		{
			using func_t = decltype(&NiControllerSequence::SetOffset);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::SetOffset };
			func(this, fOffset);
		}

		void GetObjectNameAt(std::uint32_t uiIndex, char* pcObjectName) const
		{
			using func_t = decltype(&NiControllerSequence::GetObjectNameAt);
			static REL::Relocation<func_t> func{ Offsets::NiControllerSequence::GetObjectNameAt };
			func(this, uiIndex, pcObjectName);
		}

	public:
		// members
		NiFixedString                          m_kName;                      // 08
		std::uint32_t                          m_uiArraySize;                // 0C
		std::uint32_t                          m_uiArrayGrowBy;              // 10
		NiControllerSequence::InterpArrayItem* m_pkInterpArray;              // 14
		NiControllerSequence::IDTag*           m_pkIDTagArray;               // 18
		float                                  m_fSeqWeight;                 // 1C
		NiPointer<NiTextKeyExtraData>          m_spTextKeys;                 // 20
		NiTimeController_CycleType             m_eCycleType;                 // 24
		float                                  m_fFrequency;                 // 28
		float                                  m_fBeginKeyTime;              // 2C
		float                                  m_fEndKeyTime;                // 30
		float                                  m_fLastTime;                  // 34
		float                                  m_fWeightedLastTime;          // 38
		float                                  m_fLastScaledTime;            // 3C
		NiControllerManager*                   m_pkOwner;                    // 40
		NiControllerSequence::AnimState        m_eState;                     // 44
		float                                  m_fOffset;                    // 48
		float                                  m_fStartTime;                 // 4C
		float                                  m_fEndTime;                   // 50
		float                                  m_fDestFrame;                 // 54
		NiControllerSequence*                  m_pkPartnerSequence;          // 58
		NiFixedString                          m_kAccumRootName;             // 5C
		NiAVObject*                            m_pkAccumRoot;                // 60
		NiPointer<NiStringPalette>             m_spDeprecatedStringPalette;  // 64
		std::int16_t                           ssCurAnimNIdx;                // 68
		std::uint16_t                          pad6A;                        // 6A
		NiPointer<BSAnimNote>*                 spAnimNotesA;                 // 6C
		std::uint16_t                          usNumNotes;                   // 70
		bool                                   bRemovableObjects;            // 72
		std::uint8_t                           pad73;                        // 73
	};
	static_assert(sizeof(NiControllerSequence) == 0x74);
}
