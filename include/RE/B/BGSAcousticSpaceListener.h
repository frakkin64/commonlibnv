#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkEntityListener.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class TESObjectREFR;
	class hkpCollidable;
	class hkpEntity;
	class hkpRootCdPoint;

	class BGSAcousticSpaceListener :
		public bhkEntityListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAcousticSpaceListener };
		static constexpr auto VTABLE{ VTABLE::BGSAcousticSpaceListener };

		// override (bhkEntityListener)
		virtual ~BGSAcousticSpaceListener() = default;                                // 00
		virtual void entityRemovedCallback(hkpEntity* entity) override;               // 02
		virtual void Update(float a_arg1) override;                                   // 06
		virtual bool contactPointAddedCallback(hkpRootCdPoint& __formal) override;    // 07
		virtual bool contactPointRemovedCallback(hkpRootCdPoint& __formal) override;  // 08

		// add
		virtual bool collidableEnterCallback(hkpCollidable const* collidableA, hkpCollidable const* collidableB);  // 0A
		virtual bool collidableLeaveCallback(hkpCollidable const* collidableA, hkpCollidable const* collidableB);  // 0B

		BGSAcousticSpaceListener* ctor()
		{
			using func_t = BGSAcousticSpaceListener*(__thiscall*)(BGSAcousticSpaceListener*);
			static REL::Relocation<func_t> func{ Offsets::BGSAcousticSpaceListener::ctor };
			return func(this);
		}

		bool DequeueRemoval(TESObjectREFR* apRef, bool abDoRemoval)
		{
			using func_t = decltype(&BGSAcousticSpaceListener::DequeueRemoval);
			static REL::Relocation<func_t> func{ Offsets::BGSAcousticSpaceListener::DequeueRemoval };
			return func(this, apRef, abDoRemoval);
		}

	public:
		// members
		bool                                 bBufferRemovalOperations;  // 14
		std::uint8_t                         pad15[0x3];                // 15
		NiTMap<TESObjectREFR*, std::int32_t> RemovalQueueMap;           // 18
	};
	static_assert(sizeof(BGSAcousticSpaceListener) == 0x28);
}
