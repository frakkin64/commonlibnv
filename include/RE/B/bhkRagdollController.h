#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSPrecisionTimer.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkQsTransform.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkaRaycastInterface.h"
#include "RE/N/NiFixedString.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiAVObject;
	class NiNode;
	class bhkPoseArray;
	class bhkRagdollShareData;
	class hkaFootPlacementIkSolver;
	class hkaPose;
	class hkaPoseMatchingUtility;
	class hkaRagdollInstance;
	class hkaRagdollRigidBodyController;

	class alignas(16) bhkRagdollController :
		public hkaRaycastInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRagdollController };
		static constexpr auto VTABLE{ VTABLE::bhkRagdollController };

		class BoneTransf;
		class FootIkLegInfo;
		class FootRayCastResults;
		class GrabIKInfo;
		class GrabIKSetup;
		class LookIKBoneParams;

		enum class LookIKBone : std::int32_t
		{
			kEYE_BONE = 0x0,
			kHEAD_BONE = 0x1,
			kNUM_LOOKIK_BONES = 0x2,
		};

		enum class RAGDOLL_UPDATE_TYPE : std::int32_t
		{
			kNONE = 0x0,
			kONE_VALUE = 0x1,
			kTWO_VALUE = 0x2,
			kLEVELED_LIST = 0x3,
			kACTIVATE_CHOICE = 0x4,
		};

		class BoneTransf
		{
		public:
			// members
			NiAVObject* pObj;            // 00?
			NiTransform LocalTransform;  // 04?
		};

		class alignas(16) FootRayCastResults
		{
		public:
			// members
			hkVector4    From;        // 00?
			hkVector4    To;          // 10?
			hkVector4    Norm;        // 20?
			float        fFraction;   // 30?
			std::uint8_t pad34[0xC];  // 34
		};

		class alignas(16) GrabIKInfo
		{
		public:
			// members
			NiAVObject*   pTarget;          // 00?
			float         fIntrpGain;       // 04?
			float         fReachWeight;     // 08?
			bool          bEnabled;         // 0C?
			bool          bEaseOutGrabIK;   // 0D?
			std::uint16_t pad0E;            // 0E
			hkVector4     PrevReachLocWS;   // 10?
			hkVector4     PrevReachNormWS;  // 20?
		};

		class GrabIKSetup
		{
		public:
			// members
			std::uint16_t usShoulderIdx;  // 00?
			std::uint16_t usElbowIdx;     // 02?
			std::uint16_t usHandIdx;      // 04?
		};

		class alignas(16) LookIKBoneParams
		{
		public:
			// members
			hkaPose*      pPose;            // 00?
			std::int16_t  ssBoneIdx;        // 04?
			std::int16_t  ssParentIdx;      // 06?
			float         fLookAtMaxAngle;  // 08?
			std::uint32_t pad0C;            // 0C
			hkVector4     FwdLS;            // 10?
			hkVector4     FwdParentMS;      // 20?
			hkQuaternion  PrevRotLS;        // 30?
			bool          bLimitBoneRot;    // 40?
			bool          bActive;          // 41?
			std::uint16_t pad42;            // 42
			float         fDeadHeading;     // 44?
			float         fDeadPitch;       // 48?
			std::uint32_t pad4C;            // 4C
		};

		class alignas(16) FootIkLegInfo
		{
		public:
			// members
			hkaFootPlacementIkSolver*                pSolver;         // 00?
			float                                    fResultError;    // 04?
			std::uint8_t                             pad08[0x8];      // 08
			bhkRagdollController::FootRayCastResults CastResults[2];  // 10?
			hkQsTransform                            AnkleLS;         // 90?
			std::int16_t                             RagdollFootIdx;  // C0?
			std::uint8_t                             padC2[0xE];      // C2
		};

		static void SetRagdollAnim(bool abEnable)
		{
			using func_t = decltype(&bhkRagdollController::SetRagdollAnim);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::SetRagdollAnim };
			func(abEnable);
		}

		static bool QFootIK()
		{
			using func_t = decltype(&bhkRagdollController::QFootIK);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::QFootIK };
			return func();
		}

		bool QRagdollAnimEnable()
		{
			using func_t = decltype(&bhkRagdollController::QRagdollAnimEnable);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::QRagdollAnimEnable };
			return func(this);
		}

		void SetFootIKEnable(bool abEnable)
		{
			using func_t = decltype(&bhkRagdollController::SetFootIKEnable);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::SetFootIKEnable };
			func(this, abEnable);
		}

		bool QRagdollFeedbackActive()
		{
			using func_t = decltype(&bhkRagdollController::QRagdollFeedbackActive);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::QRagdollFeedbackActive };
			return func(this);
		}

		void SetLookAtIKTarget(NiPoint3 const& arTarget, bool abSetActive)
		{
			using func_t = decltype(&bhkRagdollController::SetLookAtIKTarget);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::SetLookAtIKTarget };
			func(this, arTarget, abSetActive);
		}

		void EnableRagdollAnim()
		{
			using func_t = decltype(&bhkRagdollController::EnableRagdollAnim);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::EnableRagdollAnim };
			func(this);
		}

		void InitPoseMatching(char const* apFileName, std::int16_t asRootIndex, std::int16_t asBone2Index, std::int16_t asBone3Index)
		{
			using func_t = decltype(&bhkRagdollController::InitPoseMatching);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::InitPoseMatching };
			func(this, apFileName, asRootIndex, asBone2Index, asBone3Index);
		}

		void SetRagdollFeedbackActive(bool abActive)
		{
			using func_t = decltype(&bhkRagdollController::SetRagdollFeedbackActive);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::SetRagdollFeedbackActive };
			func(this, abActive);
		}

		void EnableRagdollFeedback(bool abEnable)
		{
			using func_t = decltype(&bhkRagdollController::EnableRagdollFeedback);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::EnableRagdollFeedback };
			func(this, abEnable);
		}

	protected:
		bool InitGrabIK()
		{
			using func_t = decltype(&bhkRagdollController::InitGrabIK);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::InitGrabIK };
			return func(this);
		}

		static void CopyPoseTo3DRec(NiNode* apSkeleton, NiAVObject* apPose, BSSimpleArray<bhkRagdollController::BoneTransf, 1024>& arPoseA)
		{
			using func_t = decltype(&bhkRagdollController::CopyPoseTo3DRec);
			static REL::Relocation<func_t> func{ Offsets::bhkRagdollController::CopyPoseTo3DRec };
			func(apSkeleton, apPose, arPoseA);
		}

	public:
		// members
		// not placed: bQueuedWarp, bBoneUpdate, bReinitRBController, pHeadPose, pRagdollRoot, ScaleInv, pSGPose, bUsingMappers, pControllerPhantom, AnimPoseLS, SGBonesA, bInitLookIK, bEnableLookIK, bEaseOutLookIK, bActiveLookIK, bApplyHeadOffset, CurrentHeadRotOffset
		bool                                                                   bQueueStopPoweredMotors;      // 04
		std::uint8_t                                                           pad05[0x3];                   // 05
		float                                                                  fCurrentMatchError;           // 08
		bhkRagdollController::RAGDOLL_UPDATE_TYPE                              eRBUpdateMethod;              // 0C
		hkQsTransform                                                          WorldFromModel;               // 10
		bool                                                                   bFullyDynamic;                // 40
		bool                                                                   bEnableRagdollAnim;           // 41
		bool                                                                   bInitRagdollAnim;             // 42
		bool                                                                   bEaseOutRagdollAnim;          // 43
		std::uint32_t                                                          pad44;                        // 44
		hkaRagdollInstance*                                                    pRagdollInstance;             // 48
		hkaRagdollRigidBodyController*                                         pRagdollRBController;         // 4C
		std::uint8_t                                                           pad50[0xC];                   // 50
		std::uint32_t                                                          iGroup;                       // 5C
		std::uint8_t                                                           pad60[0x30];                  // 60
		NiPointer<NiNode>                                                      spSkeletonDebug;              // 90
		std::uint8_t                                                           pad94[0x3C];                  // 94
		hkVector4                                                              CurrentTargetWS;              // D0
		hkVector4                                                              EyeOffset;                    // E0
		bhkRagdollController::LookIKBoneParams                                 BoneParamA[2];                // F0
		bool                                                                   bUseHeadPose;                 // 190
		std::uint8_t                                                           pad191[0x3];                  // 191
		bhkRagdollController::LookIKBone                                       eCurrentBone;                 // 194
		bool                                                                   bTargetOutsideHeadLimit;      // 198
		std::uint8_t                                                           pad199[0x3];                  // 199
		float                                                                  fEyeHeading;                  // 19C
		float                                                                  fEyePitch;                    // 1A0
		bool                                                                   bTargetBehind;                // 1A4
		bool                                                                   bHeadSwitchSides;             // 1A5
		std::uint16_t                                                          pad1A6;                       // 1A6
		float                                                                  fMaxEyePitchAngle;            // 1A8
		std::uint32_t                                                          pad1AC;                       // 1AC
		bhkRagdollController::GrabIKInfo                                       GrabIKState[2];               // 1B0
		bhkRagdollController::GrabIKSetup                                      GrabSetup[2];                 // 210
		bool                                                                   bInitGrabIK;                  // 21C
		bool                                                                   bEnableGrabIK;                // 21D
		bool                                                                   bActiveGrabIK;                // 21E
		bool                                                                   bInitFootIK;                  // 21F
		bool                                                                   bEnableFootIK;                // 220
		bool                                                                   bEaseOutFootIK;               // 221
		bool                                                                   bActiveFootIK;                // 222
		bool                                                                   bResetSolverWeight;           // 223
		bool                                                                   bUsePhantomFootIKCasts;       // 224
		std::uint8_t                                                           pad225[0x3];                  // 225
		std::int32_t                                                           iCurrFootEase;                // 228
		hkArray<bhkRagdollController::FootIkLegInfo, hkContainerHeapAllocator> LegInfoA;                     // 22C
		std::uint16_t                                                          usCurrentCastIdx;             // 238
		std::uint16_t                                                          usCurrentFootCastIdx;         // 23A
		float                                                                  fVertFootIkError;             // 23C
		bool                                                                   bAlignFeetToTerrain;          // 240
		bool                                                                   bFootEndCast;                 // 241
		bool                                                                   bUseCurrAnkleTransf;          // 242
		bool                                                                   bDownCastFoot;                // 243
		float                                                                  fDownCastDistance;            // 244
		hkaPoseMatchingUtility*                                                pMatchUtil;                   // 248
		NiFixedString                                                          PoseAStr;                     // 24C
		NiPointer<bhkPoseArray>                                                spPoseA;                      // 250
		bool                                                                   bInitPoseMatch;               // 254
		bool                                                                   bEnablePoseMatch;             // 255
		bool                                                                   bActivePoseMatch;             // 256
		std::uint8_t                                                           pad257;                       // 257
		std::int32_t                                                           iCurrentMatchPoseIdx;         // 258
		std::uint32_t                                                          pad25C;                       // 25C
		BSPrecisionTimer                                                       PoseMatchTimer;               // 260
		NiPoint3                                                               PoseMatchRootLoc;             // 270
		float                                                                  fPoseMatchDisplacementMax;    // 27C
		float                                                                  fPoseMatchTime;               // 280
		bool                                                                   bDisablePoseMatchOnDisplace;  // 284
		std::uint8_t                                                           pad285[0x3];                  // 285
		std::int32_t                                                           iEditorForcePoseIdx;          // 288
		bool                                                                   bInitRagdollFeedback;         // 28C
		bool                                                                   bEnableRagdollFeedback;       // 28D
		bool                                                                   bActiveRagdollFeedback;       // 28E
		bool                                                                   bEaseOutFeedback;             // 28F
		float                                                                  fCurrFeedbackInterp;          // 290
		std::uint32_t                                                          uiFeedbackTimeoutCount;       // 294
		std::uint32_t                                                          uiFeedbackImpulseStrong;      // 298
		std::uint32_t                                                          uiFeedbackImpulseWeak;        // 29C
		NiFixedString                                                          SkeletonShareName;            // 2A0
		NiPointer<bhkRagdollShareData>                                         spRagdollSharedData;          // 2A4
		BSPrecisionTimer                                                       FeedbackTimer;                // 2A8
		std::int32_t                                                           nHeadBone;                    // 2B8
		std::uint32_t                                                          pad2BC;                       // 2BC
	};
	static_assert(sizeof(bhkRagdollController) == 0x2C0);
}
