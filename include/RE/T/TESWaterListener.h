#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSZoneTargetListener.h"
#include "RE/B/bhkWaterListener.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTList.h"

namespace RE
{
	class QueuedRemoval;
	class TESObjectREFR;
	class WaterZone;
	class bhkRigidBody;
	class hkVector4;
	class hkpCollidable;
	class hkpEntity;
	class hkpRigidBody;
	class hkpRootCdPoint;

	class TESWaterListener :
		public bhkWaterListener,  // 00
		public BGSZoneTargetListener  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::TESWaterListener };
		static constexpr auto VTABLE{ VTABLE::TESWaterListener };

		// override (bhkWaterListener)
		virtual ~TESWaterListener() = default;                                        // 00
		virtual void entityRemovedCallback(hkpEntity* entity) override;               // 02
		virtual void Update(float a_arg1) override;                                   // 06
		virtual bool contactPointAddedCallback(hkpRootCdPoint& __formal) override;    // 07
		virtual bool contactPointRemovedCallback(hkpRootCdPoint& __formal) override;  // 08
		virtual bhkRigidBody* GetRB(hkpEntity* apEntity) override;                    // 09
		virtual float GetRandom(float afSize) override;                               // 0A

		// add
		virtual bool collidableEnterCallback(hkpCollidable const* collidableA, hkpCollidable const* collidableB);  // 0B
		virtual bool collidableLeaveCallback(hkpCollidable const* collidableA, hkpCollidable const* collidableB);  // 0C

		TESWaterListener* ctor(float afWaterLevel)
		{
			using func_t = TESWaterListener*(__thiscall*)(TESWaterListener*, float);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::ctor };
			return func(this, afWaterLevel);
		}

		void SetWaterHeight(float a_arg1, std::uint32_t a_arg2, std::uint32_t auX)
		{
			using func_t = decltype(&TESWaterListener::SetWaterHeight);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::SetWaterHeight };
			func(this, a_arg1, a_arg2, auX);
		}

		void PlaySplashEffects(bhkRigidBody* apBody, float afWaterHeight)
		{
			using func_t = void (TESWaterListener::*)(bhkRigidBody*, float);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::PlaySplashEffects };
			func(this, apBody, afWaterHeight);
		}

		static void PlaySplashEffects(float a_arg1, NiPoint3 aSplashLocation)
		{
			using func_t = void(__cdecl*)(float, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::PlaySplashEffects_1 };
			func(a_arg1, aSplashLocation);
		}

		static void RefreshExteriorWaterHeights()
		{
			using func_t = decltype(&TESWaterListener::RefreshExteriorWaterHeights);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::RefreshExteriorWaterHeights };
			func();
		}

		void RemoveReferenceFromZone(QueuedRemoval* apQR)
		{
			using func_t = decltype(&TESWaterListener::RemoveReferenceFromZone);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::RemoveReferenceFromZone };
			func(this, apQR);
		}

		bool ShouldProcessRigidBody(hkpRigidBody* phkBody, hkVector4& positionPlayer, float a_arg3, WaterZone* a_arg4, float& apZone)
		{
			using func_t = decltype(&TESWaterListener::ShouldProcessRigidBody);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::ShouldProcessRigidBody };
			return func(this, phkBody, positionPlayer, a_arg3, a_arg4, apZone);
		}

		std::int32_t ProcessRigidBody(hkpRigidBody* phkBody, float fwaterHeight, float a_arg3, bool a_arg4)
		{
			using func_t = decltype(&TESWaterListener::ProcessRigidBody);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::ProcessRigidBody };
			return func(this, phkBody, fwaterHeight, a_arg3, a_arg4);
		}

		void HandleQueuedRemovals(TESObjectREFR* apSpecificReference, bool abCheckBound, bool abCancel)
		{
			using func_t = decltype(&TESWaterListener::HandleQueuedRemovals);
			static REL::Relocation<func_t> func{ Offsets::TESWaterListener::HandleQueuedRemovals };
			func(this, apSpecificReference, abCheckBound, abCancel);
		}

	public:
		// members
		float                   fSplashTimer;        // 1C
		float*                  pfWaterLevels;       // 20
		float                   fHighestWaterLevel;  // 24
		std::uint32_t           uiCellArrayWidth;    // 28
		std::int32_t            iBaseCellNumberX;    // 2C
		std::int32_t            iBaseCellNumberY;    // 30
		NiTList<QueuedRemoval*> QueuedRemovals;      // 34
	};
	static_assert(sizeof(TESWaterListener) == 0x40);
}
