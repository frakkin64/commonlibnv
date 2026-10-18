#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenKeyframeMultiple.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BS_FACEGEN_CUSTOM_MORPH.h"
#include "RE/B/BS_FACEGEN_EXPRESSION.h"
#include "RE/B/BS_FACEGEN_MODIFIER.h"
#include "RE/B/BS_FACEGEN_MORPH_TYPE.h"
#include "RE/B/BS_FACEGEN_PHONEME.h"
#include "RE/N/NiExtraData.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BSFaceGenKeyframe;
	class NiAVObject;
	class NiNode;
	class NiQuaternion;

	class BSFaceGenAnimationData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenAnimationData };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenAnimationData };

		enum class ETrackingState : std::int32_t
		{
			kETrackingState_None = 0x0,
			kETrackingState_JustAcquired = 0x1,
			kETrackingState_Tracking = 0x2,
		};

		// override (NiExtraData)
		virtual ~BSFaceGenAnimationData() = default;  // 00

		// add
		virtual float GetExpressionValue(BS_FACEGEN_EXPRESSION a_arg1) const;                                                                                          // 25
		virtual void SetExpressionValue(BS_FACEGEN_EXPRESSION aeExpression, float afValue);                                                                            // 26
		virtual bool GetModifierValuesAsRotation(NiQuaternion* a_arg1) const;                                                                                          // 27
		virtual void SetModifierValue(BS_FACEGEN_MODIFIER aeModifier, float afValue);                                                                                  // 28
		virtual float GetPhonemeValue(BS_FACEGEN_PHONEME a_arg1) const;                                                                                                // 29
		virtual void SetPhonemeValue(BS_FACEGEN_PHONEME aePhoneme, float afValue);                                                                                     // 2A
		virtual float GetCustomMorphValue(BS_FACEGEN_CUSTOM_MORPH a_arg1) const;                                                                                       // 2B
		virtual void SetCustomMorphValue(BS_FACEGEN_CUSTOM_MORPH aeCustomMorph, float afValue);                                                                        // 2C
		virtual void ResetCurrentMorphs(float a_arg1, bool a_arg2, bool abResetExpression, bool abResetPhoneme, bool abResetModifier, bool abResetCustomMorph);        // 2D
		virtual void ResetSpeechCurrentMorphs(float a_arg1, bool a_arg2, bool abResetExpression, bool abResetPhoneme, bool abResetModifier, bool abResetCustomMorph);  // 2E
		virtual void ResetAnimCurrentMorphs(float a_arg1, bool a_arg2, bool abResetExpression, bool abResetPhoneme, bool abResetModifier);                             // 2F
		virtual void SetHeadTrackVector(NiPoint3 abInstant, bool a_arg2);                                                                                              // 30
		virtual void ClearHeadTracking(bool abInstant);                                                                                                                // 31
		virtual bool GetChangedLastUpdate();                                                                                                                           // 32
		virtual bool GetMustUpdate();                                                                                                                                  // 33
		virtual void SetMustUpdate(bool abMustUpdate);                                                                                                                 // 34
		virtual bool GetDead() const;                                                                                                                                  // 35
		virtual void SetDead(bool abDead, bool abInstant);                                                                                                             // 36
		virtual void SetAnimExpressionValue(BS_FACEGEN_EXPRESSION aeExpression, float afValue);                                                                        // 37
		virtual void SetAnimModifierValue(BS_FACEGEN_MODIFIER aeModifier, float afValue);                                                                              // 38
		virtual void SetAnimPhonemeValue(BS_FACEGEN_PHONEME aePhoneme, float afValue);                                                                                 // 39
		virtual void SetAnimCustomMorphValue(BS_FACEGEN_CUSTOM_MORPH aeCustomMorph, float afValue);                                                                    // 3A
		virtual void AddPhonemeKeyframe(float* apQuantities, float afTime);                                                                                            // 3B
		virtual void AddModifiersKeyframe(float* apQuantities, float afTime);                                                                                          // 3C
		virtual void AddSpeechEmptyKeyframe(BS_FACEGEN_MORPH_TYPE aeType, float afTime, bool abForceZero);                                                             // 3D
		virtual void AddAnimEmptyKeyframe(BS_FACEGEN_MORPH_TYPE aeType, float afTime, bool abForceZero);                                                               // 3E
		virtual void ClearKeyframeLists(bool abClearExpression, bool abClearPhonemes, bool abClearModifiers, bool abClearCustomMorphs);                                // 3F
		virtual void ClearSpeechKeyframeLists(bool abClearExpression, bool abClearPhonemes, bool abClearModifiers, bool abClearCustomMorphs);                          // 40
		virtual void ClearAnimKeyframeLists(bool abClearExpression, bool abClearPhonemes, bool abClearModifiers, bool abClearCustomMorphs);                            // 41
		virtual bool IsSpeechKeyframeListEmpty(BS_FACEGEN_MORPH_TYPE aeType);                                                                                          // 42
		virtual bool IsAnimKeyframeListEmpty(BS_FACEGEN_MORPH_TYPE aeType);                                                                                            // 43
		virtual void AddCustomMorphKeyframe(float* apQuantities, float afTime);                                                                                        // 44
		virtual void SetExpressionTarget(float* apQuantities);                                                                                                         // 46 (reversed overload group)
		virtual void SetExpressionTarget(BS_FACEGEN_EXPRESSION aeExpression, float afValue);                                                                           // 45 (reversed overload group)
		virtual void SetExpressionTargetFromMood(std::int32_t aiMoodindex, bool abTalking);                                                                            // 47
		virtual void ClearExpressionTarget();                                                                                                                          // 48
		virtual void AddAnimationDataFromNote(char const* apNote);                                                                                                     // 49
		virtual bool Update(float afTime);                                                                                                                             // 4A

		float GetModifierValue(BS_FACEGEN_MODIFIER aeModifier) const
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetModifierValue);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetModifierValue };
			return func(this, aeModifier);
		}

		BSFaceGenAnimationData* ctor()
		{
			using func_t = BSFaceGenAnimationData*(__thiscall*)(BSFaceGenAnimationData*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::ctor };
			return func(this);
		}

		static void GetTrackEyeXYMinMax(float& afMinOut, float& afMaxOut)
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetTrackEyeXYMinMax);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetTrackEyeXYMinMax };
			func(afMinOut, afMaxOut);
		}

		static void GetTrackEyeZMinMax(float& afMinOut, float& afMaxOut)
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetTrackEyeZMinMax);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetTrackEyeZMinMax };
			func(afMinOut, afMaxOut);
		}

		static void GetTrackDeadZoneXYMinMax(float& afMinOut, float& afMaxOut)
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetTrackDeadZoneXYMinMax);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetTrackDeadZoneXYMinMax };
			func(afMinOut, afMaxOut);
		}

		static void GetTrackDeadZoneZMinMax(float& afMinOut, float& afMaxOut)
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetTrackDeadZoneZMinMax);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetTrackDeadZoneZMinMax };
			func(afMinOut, afMaxOut);
		}

		bool UpdateEyeTracking(float afTime, NiNode* apHeadNode)
		{
			using func_t = decltype(&BSFaceGenAnimationData::UpdateEyeTracking);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::UpdateEyeTracking };
			return func(this, afTime, apHeadNode);
		}

		void ModifyEyeHeadingAndPitchBasedOnExpression(BS_FACEGEN_EXPRESSION aexp, float& afHeading, float& afPitch, float afTime)
		{
			using func_t = decltype(&BSFaceGenAnimationData::ModifyEyeHeadingAndPitchBasedOnExpression);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::ModifyEyeHeadingAndPitchBasedOnExpression };
			func(this, aexp, afHeading, afPitch, afTime);
		}

		void SetEyePosition(float afHeading, float afPitch)
		{
			using func_t = decltype(&BSFaceGenAnimationData::SetEyePosition);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::SetEyePosition };
			func(this, afHeading, afPitch);
		}

		BSFaceGenAnimationData* CreateCopyBS()
		{
			using func_t = decltype(&BSFaceGenAnimationData::CreateCopyBS);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::CreateCopyBS };
			return func(this);
		}

		static float GetExpressionTargetChangePerSec()
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetExpressionTargetChangePerSec);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetExpressionTargetChangePerSec };
			return func();
		}

		static float GetExpressionStrengthAddPerSec()
		{
			using func_t = decltype(&BSFaceGenAnimationData::GetExpressionStrengthAddPerSec);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::GetExpressionStrengthAddPerSec };
			return func();
		}

	protected:
		static bool UpdateKeyframeList(float a_arg1, NiTPointerList<BSFaceGenKeyframe*>* a_arg2, BSFaceGenKeyframe* apList, bool apDest)
		{
			using func_t = decltype(&BSFaceGenAnimationData::UpdateKeyframeList);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenAnimationData::UpdateKeyframeList };
			return func(a_arg1, a_arg2, apList, apDest);
		}

	public:
		// members
		BSFaceGenKeyframeMultiple*             pTargetExpressionData;          // 0C
		BSFaceGenKeyframeMultiple              CurrentTargetExpressionData;    // 10
		BSFaceGenKeyframeMultiple              CurrentAnimExpressionData;      // 24
		BSFaceGenKeyframeMultiple              CurrentAnimModifierData;        // 38
		BSFaceGenKeyframeMultiple              CurrentAnimPhonemeData;         // 4C
		BSFaceGenKeyframeMultiple              CurrentAnimCustomMorphData;     // 60
		BSFaceGenKeyframeMultiple              CurrentExpressionData;          // 74
		NiTPointerList<BSFaceGenKeyframe*>     SpeechModifierKeyframeList;     // 88
		BSFaceGenKeyframeMultiple              CurrentSpeechModifierData;      // 94
		BSFaceGenKeyframeMultiple              CurrentModifierData;            // A8
		NiTPointerList<BSFaceGenKeyframe*>     SpeechPhonemeKeyframeList;      // BC
		BSFaceGenKeyframeMultiple              CurrentSpeechPhonemeData;       // C8
		BSFaceGenKeyframeMultiple              CurrentPhonemeData;             // DC
		NiTPointerList<BSFaceGenKeyframe*>     SpeechCustomMorphKeyframeList;  // F0
		BSFaceGenKeyframeMultiple              CurrentSpeechCustomMorphData;   // FC
		BSFaceGenKeyframeMultiple              CurrentCustomMorphData;         // 110
		NiPoint3                               HeadTrackVector;                // 124
		float                                  fCurrentTorsoHeading;           // 130
		float                                  fCurrentTorsoPitch;             // 134
		float                                  fCurrentHeadHeading;            // 138
		float                                  fCurrentHeadPitch;              // 13C
		float                                  fCurrentEyeHeading;             // 140
		float                                  fCurrentEyePitch;               // 144
		NiAVObject*                            pBip01Node;                     // 148
		bool                                   bAllowRotateTorso;              // 14C
		std::uint8_t                           pad14D[0x3];                    // 14D
		float                                  fDesiredEyeHeading;             // 150
		float                                  fDesiredEyePitch;               // 154
		float                                  fCurrentHeadTrackingSpeedH;     // 158
		float                                  fCurrentHeadTrackingSpeedP;     // 15C
		float                                  fCurrentTorsoTrackingSpeed;     // 160
		float                                  fDesiredTorsoHeading;           // 164
		float                                  fDesiredTorsoPitch;             // 168
		float                                  fDesiredHeadHeading;            // 16C
		float                                  fDesiredHeadPitch;              // 170
		BSFaceGenAnimationData::ETrackingState TrackingState;                  // 174
		float                                  fJustAcquiredTimer;             // 178
		float                                  fExpressionEyeOffsetTimer;      // 17C
		float                                  fExpressionEyeOffsetHeading;    // 180
		float                                  fExpressionEyeOffsetPitch;      // 184
		bool                                   bFullTrackUpdate;               // 188
		bool                                   bShouldHeadTrack;               // 189
		bool                                   bHeadTrackingLocked;            // 18A
		bool                                   bChangedLastUpdate;             // 18B
		bool                                   bMustUpdate;                    // 18C
		bool                                   bDoNotUpdateNextTime;           // 18D
		bool                                   bDead;                          // 18E
		bool                                   bAnimHeadCulled;                // 18F
		bool                                   bAnimHeadCulledLastFrame;       // 190
		bool                                   bDisregardDisposition;          // 191
		std::uint16_t                          pad192;                         // 192
		float                                  fVampirismEffectAmount;         // 194
		BSSpinLock                             AnimLock;                       // 198?
		std::uint8_t                           pad1A0[0x20];                   // 1A0
	};
	static_assert(sizeof(BSFaceGenAnimationData) == 0x1C0);
}
