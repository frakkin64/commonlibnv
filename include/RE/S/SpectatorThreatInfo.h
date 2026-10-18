#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class PathingAvoidNode;

	class SpectatorThreatInfo
	{
	public:
		enum class THREAT_LEVEL : std::int32_t
		{
			kTHREAT_LEVEL_NONE = 0x0,
			kTHREAT_LEVEL_MELEE_WEAPONS = 0x1,
			kTHREAT_LEVEL_PROJECTILE_WEAPONS = 0x2,
			kTHREAT_LEVEL_EXPLOSION = 0x3,
			kTHREAT_LEVEL_INSANE = 0x4,
		};

		void SetupThreatFromActorToCombatTarget(Actor& aSource)
		{
			using func_t = decltype(&SpectatorThreatInfo::SetupThreatFromActorToCombatTarget);
			static REL::Relocation<func_t> func{ Offsets::SpectatorThreatInfo::SetupThreatFromActorToCombatTarget };
			func(this, aSource);
		}

		void Update()
		{
			using func_t = decltype(&SpectatorThreatInfo::Update);
			static REL::Relocation<func_t> func{ Offsets::SpectatorThreatInfo::Update };
			func(this);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&SpectatorThreatInfo::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::SpectatorThreatInfo::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&SpectatorThreatInfo::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::SpectatorThreatInfo::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&SpectatorThreatInfo::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::SpectatorThreatInfo::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	private:
		void GetAvoidNode(PathingAvoidNode& nodeOut) const
		{
			using func_t = decltype(&SpectatorThreatInfo::GetAvoidNode);
			static REL::Relocation<func_t> func{ Offsets::SpectatorThreatInfo::GetAvoidNode };
			func(this, nodeOut);
		}

	public:
		// members
		Actor*                            pSource;             // 00
		Actor*                            pTarget;             // 04
		SpectatorThreatInfo::THREAT_LEVEL eThreatLevel;        // 08
		std::uint32_t                     iLastPerceivedTime;  // 0C
		float                             fRadius;             // 10
		NiPoint3                          LastKnownPosSource;  // 14
		NiPoint3                          LastKnownPosTarget;  // 20
		bool                              bHasSource;          // 2C
		bool                              bHasTarget;          // 2D
		std::uint16_t                     pad2E;               // 2E
		NiPointer<NiAVObject>             spDebugGeometry;     // 30
	};
	static_assert(sizeof(SpectatorThreatInfo) == 0x34);
}
