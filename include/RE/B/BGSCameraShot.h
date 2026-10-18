#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESImageSpaceModifiableForm.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class NiAVObject;
	class NiNode;
	class TESFile;
	class TESObjectREFR;

	class BGSCameraShot :
		public TESForm,  // 00
		public TESModel,  // 18
		public TESImageSpaceModifiableForm  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSCameraShot };
		static constexpr auto VTABLE{ VTABLE::BGSCameraShot };

		class CAMERA_SHOT_DATA;
		class OLD_CAMERA_SHOT_DATA;

		enum class CAM_ACTION : std::int32_t
		{
			kCA_SHOOT = 0x0,
			kCA_FLY = 0x1,
			kCA_HIT = 0x2,
			kCA_ZOOM = 0x3,
			kCA_COUNT = 0x4,
		};

		enum class CAM_OBJECT : std::int32_t
		{
			kCO_ATTACKER = 0x0,
			kCO_PROJECTILE = 0x1,
			kCO_TARGET = 0x2,
			kCO_COUNT = 0x3,
		};

		enum class CAM_ZOOM : std::int32_t
		{
			kCZ_DEFAULT = 0x0,
			kCZ_DISABLE = 0x1,
			kCZ_SHOT_LIST = 0x2,
		};

		class CAMERA_SHOT_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&CAMERA_SHOT_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::BGSCameraShot_CAMERA_SHOT_DATA::Endian };
				func(this);
			}

		public:
			// members
			BGSCameraShot::CAM_ACTION eCameraAction;                // 00
			BGSCameraShot::CAM_OBJECT eLocation;                    // 04
			BGSCameraShot::CAM_OBJECT eTarget;                      // 08
			std::uint32_t             iFlags;                       // 0C
			float                     fPlayerTimeMult;              // 10
			float                     fTargetTimeMult;              // 14
			float                     fGlobalTimeMult;              // 18
			float                     fMaxTime;                     // 1C
			float                     fMinTime;                     // 20
			float                     fTargetPercentBetweenActors;  // 24
		};
		static_assert(sizeof(CAMERA_SHOT_DATA) == 0x28);

		class OLD_CAMERA_SHOT_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&OLD_CAMERA_SHOT_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::BGSCameraShot_OLD_CAMERA_SHOT_DATA::Endian };
				func(this);
			}

		public:
			// members
			BGSCameraShot::CAM_ACTION eCameraAction;    // 00
			BGSCameraShot::CAM_OBJECT eLocation;        // 04
			BGSCameraShot::CAM_OBJECT eTarget;          // 08
			std::uint32_t             iFlags;           // 0C
			float                     fPlayerTimeMult;  // 10
			float                     fGlobalTimeMult;  // 14
			float                     fMaxTime;         // 18
			float                     fMinTime;         // 1C
		};
		static_assert(sizeof(OLD_CAMERA_SHOT_DATA) == 0x20);

		// override (TESForm)
		virtual ~BGSCameraShot() = default;              // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		void InitCamera(TESObjectREFR* apTargetRef, BGSCameraShot::CAM_ZOOM aeZoom)
		{
			using func_t = decltype(&BGSCameraShot::InitCamera);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraShot::InitCamera };
			func(this, apTargetRef, aeZoom);
		}

		void SetCameraLocation(NiAVObject* apLocation)
		{
			using func_t = decltype(&BGSCameraShot::SetCameraLocation);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraShot::SetCameraLocation };
			func(this, apLocation);
		}

		void FreeCamera()
		{
			using func_t = decltype(&BGSCameraShot::FreeCamera);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraShot::FreeCamera };
			func(this);
		}

		void Update(float afTime)
		{
			using func_t = decltype(&BGSCameraShot::Update);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraShot::Update };
			func(this, afTime);
		}

		NiPoint3 GetTargetPos()
		{
			using func_t = decltype(&BGSCameraShot::GetTargetPos);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraShot::GetTargetPos };
			return func(this);
		}

		bool IsInitialized()
		{
			using func_t = decltype(&BGSCameraShot::IsInitialized);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraShot::IsInitialized };
			return func(this);
		}

	public:
		// members
		BGSCameraShot::CAMERA_SHOT_DATA Data;                // 38
		NiPointer<NiAVObject>           spLocationNode;      // 60
		NiPointer<NiAVObject>           spTargetNode;        // 64
		TESObjectREFR*                  pTargetRef;          // 68
		NiPointer<NiNode>               spCameraNode;        // 6C
		NiPointer<NiAVObject>           spImagespaceTarget;  // 70
		char                            cCameraHasRotation;  // 74
		bool                            bCameraTooClose;     // 75
		bool                            bCameraIsKillCam;    // 76
		std::uint8_t                    pad77;               // 77
	};
	static_assert(sizeof(BGSCameraShot) == 0x78);
}
