#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/M/Menu.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ItemChange;
	class NiAVObject;
	class NiControllerManager;
	class NiControllerSequence;
	class NiGeometry;
	class NiNode;
	class Tile;

	class SurgeryMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SurgeryMenu };
		static constexpr auto VTABLE{ VTABLE::SurgeryMenu };

		class LimbWound;
		class SequenceInfo;

		enum class SURGERY_MENU_ANIMATION : std::int32_t
		{
			kSMA_NONE = 0x0,
			kSMA_GAME_START = 0x1,
			kSMA_MORPHINE = 0x2,
			kSMA_STIMPAK = 0x3,
		};

		enum class SURGERY_MENU_WOUND_DAMAGE : std::int32_t
		{
			kSMWD_NONE = 0x0,
			kSMWD_LIGHT = 0x1,
			kSMWD_MODERATE = 0x2,
			kSMWD_HEAVY = 0x3,
			kSMWD_SEVERE = 0x4,
		};

		class LimbWound
		{
		public:
			// members
			BSSimpleList<SurgeryMenu::SequenceInfo*>* xSequenceInfo;  // 00
			ActorValue_Index                          eLimb;          // 04?
			SurgeryMenu::SURGERY_MENU_WOUND_DAMAGE    eDamage;        // 08?
			bool                                      bResetLimb;     // 0C?
			std::uint8_t                              pad0D[0x3];     // 0D
		};

		class SequenceInfo
		{
		public:
			// members
			NiControllerSequence*      Sequence;       // 00?
			BSSimpleList<NiAVObject*>* xBoneList;      // 04?
			float                      fSequenceTime;  // 08?
		};

		// override (Menu)
		virtual ~SurgeryMenu() = default;                                       // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoIdle() override;                                         // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                        // 0C
		virtual std::int32_t GetClass() override;                               // 0D

		static void Close()
		{
			using func_t = decltype(&SurgeryMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::Close };
			func();
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&SurgeryMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::Draw3DElements };
			func();
		}

		static void PrepareSequences(NiAVObject* apNode)
		{
			using func_t = decltype(&SurgeryMenu::PrepareSequences);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::PrepareSequences };
			func(apNode);
		}

		static void SetSurgeryPlayer3DPosition(float afX, float afY, float afScale)
		{
			using func_t = decltype(&SurgeryMenu::SetSurgeryPlayer3DPosition);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::SetSurgeryPlayer3DPosition };
			func(afX, afY, afScale);
		}

	protected:
		void BurnFlesh()
		{
			using func_t = decltype(&SurgeryMenu::BurnFlesh);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::BurnFlesh };
			func(this);
		}

		float UpdateFlesh()
		{
			using func_t = decltype(&SurgeryMenu::UpdateFlesh);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::UpdateFlesh };
			return func(this);
		}

		void UpdateFace()
		{
			using func_t = decltype(&SurgeryMenu::UpdateFace);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::UpdateFace };
			func(this);
		}

		void UpdateToolLocation(bool abBurning)
		{
			using func_t = decltype(&SurgeryMenu::UpdateToolLocation);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::UpdateToolLocation };
			func(this, abBurning);
		}

		void PlaceToolInWindow(std::int32_t aiX, std::int32_t aiY)
		{
			using func_t = decltype(&SurgeryMenu::PlaceToolInWindow);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::PlaceToolInWindow };
			func(this, aiX, aiY);
		}

		bool IsCursorInFlesh()
		{
			using func_t = decltype(&SurgeryMenu::IsCursorInFlesh);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::IsCursorInFlesh };
			return func(this);
		}

		static std::int32_t SortSequenceByCursorDistance(SurgeryMenu::SequenceInfo* apObject1, SurgeryMenu::SequenceInfo* apObject2)
		{
			using func_t = decltype(&SurgeryMenu::SortSequenceByCursorDistance);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::SortSequenceByCursorDistance };
			return func(apObject1, apObject2);
		}

		std::int32_t ShowLimbCondition()
		{
			using func_t = decltype(&SurgeryMenu::ShowLimbCondition);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::ShowLimbCondition };
			return func(this);
		}

		SurgeryMenu::LimbWound* GetCurrentLimbWound()
		{
			using func_t = decltype(&SurgeryMenu::GetCurrentLimbWound);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::GetCurrentLimbWound };
			return func(this);
		}

		void UpdateAnimations()
		{
			using func_t = decltype(&SurgeryMenu::UpdateAnimations);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::UpdateAnimations };
			func(this);
		}

		void SetAnimation(SurgeryMenu::SURGERY_MENU_ANIMATION aeAnimation)
		{
			using func_t = decltype(&SurgeryMenu::SetAnimation);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::SetAnimation };
			func(this, aeAnimation);
		}

		std::int32_t GetIndexFromActorValue(ActorValue_Index aeLimb)
		{
			using func_t = decltype(&SurgeryMenu::GetIndexFromActorValue);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::GetIndexFromActorValue };
			return func(this, aeLimb);
		}

		void SwitchSkinGeometry(ActorValue_Index aeOldLimb, ActorValue_Index aeNewLimb)
		{
			using func_t = decltype(&SurgeryMenu::SwitchSkinGeometry);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::SwitchSkinGeometry };
			func(this, aeOldLimb, aeNewLimb);
		}

		void PlaceDecal(NiPoint2 aToolLocation, bool abInWound)
		{
			using func_t = decltype(&SurgeryMenu::PlaceDecal);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::PlaceDecal };
			func(this, aToolLocation, abInWound);
		}

	private:
		static void Shutdown3DElements()
		{
			using func_t = decltype(&SurgeryMenu::Shutdown3DElements);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::Shutdown3DElements };
			func();
		}

		float GetLimbPercentFromSequences()
		{
			using func_t = decltype(&SurgeryMenu::GetLimbPercentFromSequences);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::GetLimbPercentFromSequences };
			return func(this);
		}

		void SetLimbSequences(float afPercent)
		{
			using func_t = decltype(&SurgeryMenu::SetLimbSequences);
			static REL::Relocation<func_t> func{ Offsets::SurgeryMenu::SetLimbSequences };
			func(this, afPercent);
		}

	public:
		// members
		SurgeryMenu::SURGERY_MENU_ANIMATION    eAnimation;                // 28
		Tile*                                  pTiles[18];                // 2C
		NiPoint2                               ToolLocation;              // 74
		NiPoint2                               Resistance;                // 7C
		float                                  fToolMovement;             // 84
		std::uint32_t                          uiWoundBurnTime;           // 88
		std::uint32_t                          uiWoundCloseTime;          // 8C
		bool                                   bBurning;                  // 90
		bool                                   bToolBuriedInFlesh;        // 91
		std::uint16_t                          pad92;                     // 92
		BSSoundHandle                          BurningFleshSoundHand;     // 94
		BSSoundHandle                          BurningWoundSoundHand;     // A0
		float                                  fPainPercent;              // AC
		std::uint32_t                          uiPainTimer;               // B0
		std::uint32_t                          uiHitPointTimer;           // B4
		std::uint32_t                          uiDamageHealthTime;        // B8
		ItemChange*                            pStimPaks;                 // BC
		ActorValue_Index                       eCurrentDamagedPart;       // C0
		SurgeryMenu::SURGERY_MENU_WOUND_DAMAGE eCurrentDamageLevel;       // C4
		NiPointer<NiAVObject>                  pSkinGeometry[6];          // C8
		NiAVObject*                            pFrameGeometry;            // E0
		NiControllerManager*                   pSkinControllerManager;    // E4
		NiGeometry*                            pScar;                     // E8
		float                                  fFrameAnimTimer;           // EC
		NiPointer<NiAVObject>                  spPlayerLights;            // F0
		NiPointer<NiNode>                      spPlayer3DParent;          // F4
		NiPoint3                               ptSavedPlayerTranslation;  // F8
		NiMatrix3                              mtxSavedPlayerRotation;    // 104
		NiMatrix3                              mtxSavedBip01Rotation;     // 128
		float                                  fSavedPlayerScale;         // 14C
		NiPoint3                               ptSavedBip01Translation;   // 150
		bool                                   bPlayer3DCulled;           // 15C
		bool                                   bPipboyLightEffectCulled;  // 15D
		std::uint16_t                          pad15E;                    // 15E
	};
	static_assert(sizeof(SurgeryMenu) == 0x160);
}
