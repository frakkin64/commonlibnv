#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkContactListener.h"
#include "RE/C/CFilter.h"
#include "RE/H/hkpEntityActivationListener.h"
#include "RE/H/hkpEntityListener.h"

namespace RE
{
	class TESObjectREFR;
	class bhkRigidBody;
	class hkpContactPointAddedEvent;
	class hkpContactPointRemovedEvent;
	class hkpContactProcessEvent;
	class hkpEntity;

	class bhkTelekinesisListener :
		public bhkContactListener,  // 00
		public hkpEntityListener,  // 04
		public hkpEntityActivationListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkTelekinesisListener };
		static constexpr auto VTABLE{ VTABLE::bhkTelekinesisListener };

		// override (bhkContactListener)
		virtual ~bhkTelekinesisListener() = default;                                            // 03
		virtual void contactPointAddedCallback(hkpContactPointAddedEvent& event) override;      // 04
		virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent& event) override;  // 05
		virtual void contactProcessCallback(hkpContactProcessEvent& event) override;            // 06

		bhkTelekinesisListener* ctor(TESObjectREFR* apRef, bhkRigidBody* apBody, CFilter aDefaultFilter)
		{
			using func_t = bhkTelekinesisListener*(__thiscall*)(bhkTelekinesisListener*, TESObjectREFR*, bhkRigidBody*, CFilter);
			static REL::Relocation<func_t> func{ Offsets::bhkTelekinesisListener::ctor };
			return func(this, apRef, apBody, aDefaultFilter);
		}

		static void RemoveTelekinesisListeners(bhkRigidBody* apBody)
		{
			using func_t = decltype(&bhkTelekinesisListener::RemoveTelekinesisListeners);
			static REL::Relocation<func_t> func{ Offsets::bhkTelekinesisListener::RemoveTelekinesisListeners };
			func(apBody);
		}

	protected:
		void Finish(hkpEntity* apEntity)
		{
			using func_t = decltype(&bhkTelekinesisListener::Finish);
			static REL::Relocation<func_t> func{ Offsets::bhkTelekinesisListener::Finish };
			func(this, apEntity);
		}

		static void Remove(bhkTelekinesisListener* apListener, hkpEntity* apEntity)
		{
			using func_t = decltype(&bhkTelekinesisListener::Remove);
			static REL::Relocation<func_t> func{ Offsets::bhkTelekinesisListener::Remove };
			func(apListener, apEntity);
		}

	public:
		// members
		TESObjectREFR* pRef;           // 0C
		bhkRigidBody*  pBody;          // 10
		CFilter        DefaultFilter;  // 14
		bool           bCanFinish;     // 18
		std::uint8_t   pad19[0x3];     // 19
	};
}
