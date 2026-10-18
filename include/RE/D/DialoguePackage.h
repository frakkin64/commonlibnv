#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class Conversation;
	class DialogueItem;
	class DialogueResponse;
	class MobileObject;
	class TESForm;
	class TESObjectREFR;
	class TESTopic;

	class DialoguePackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DialoguePackage };
		static constexpr auto VTABLE{ VTABLE::DialoguePackage };

		// override (TESPackage)
		virtual ~DialoguePackage() = default;                                     // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 19
		virtual void Copy(TESForm* apCopy) override;                              // 42
		virtual std::uint16_t GetSaveSize() override;                             // 53
		virtual void SaveGame_54() override;                                      // 54
		virtual void LoadGame_55() override;                                      // 55
		virtual void InitLoadGame_56() override;                                  // 56
		virtual bool IsPackageOwner(MobileObject* apOwner) override;              // 57

		DialoguePackage* ctor()
		{
			using func_t = DialoguePackage*(__thiscall*)(DialoguePackage*);
			static REL::Relocation<func_t> func{ Offsets::DialoguePackage::ctor };
			return func(this);
		}

		DialoguePackage* ctor(Conversation* apConversation, MobileObject* apAct, MobileObject* apTarg, MobileObject* apTalkActivator, bool abCreated, bool abUseIdleManager)
		{
			using func_t = DialoguePackage*(__thiscall*)(DialoguePackage*, Conversation*, MobileObject*, MobileObject*, MobileObject*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::DialoguePackage::ctor_1 };
			return func(this, apConversation, apAct, apTarg, apTalkActivator, abCreated, abUseIdleManager);
		}

		void Speak(bool abUseSound)
		{
			using func_t = decltype(&DialoguePackage::Speak);
			static REL::Relocation<func_t> func{ Offsets::DialoguePackage::Speak };
			func(this, abUseSound);
		}

	public:
		// members
		BSSoundHandle     handle;                       // 80
		TESTopic*         ptopic;                       // 8C
		float             flistentimer;                 // 90
		MobileObject*     pTalkingActor;                // 94
		bool              bWaitingforLipFile;           // 98
		std::uint8_t      pad99[0x3];                   // 99
		TESObjectREFR*    pGenericSecondLoc;            // 9C
		bool              bUseIdleManager;              // A0
		std::uint8_t      padA1[0x3];                   // A1
		Conversation*     pConversation;                // A4
		DialogueItem*     pCurrentItem;                 // A8
		DialogueResponse* pCurrentResponse;             // AC
		MobileObject*     pActor;                       // B0
		MobileObject*     pTargetActor;                 // B4
		MobileObject*     pTalkingActivator;            // B8
		bool              bActorHeadTrack;              // BC
		bool              bCreatedPack;                 // BD
		bool              bContinueMoving;              // BE
		bool              bTargetContinueMoving;        // BF
		bool              bTargetMoveTowardStarter;     // C0
		bool              bDoNotControlTargetMovement;  // C1
		bool              bReachedAmbushLocation;       // C2
		std::uint8_t      padC3;                        // C3
		std::int32_t      iEmotion;                     // C4
		std::int32_t      iEmotionValue;                // C8
		bool              bSoundFile;                   // CC
		std::uint8_t      padCD[0x3];                   // CD
	};
	static_assert(sizeof(DialoguePackage) == 0xD0);
}
