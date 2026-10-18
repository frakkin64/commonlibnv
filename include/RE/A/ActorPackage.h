#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ActorPackageData;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectREFR;
	class TESPackage;

	class ActorPackage
	{
	public:
		enum class ACTOR_PACKAGE_FLAG : std::int32_t
		{
			kSAVELOAD_SHARED_PACKAGE = 0x0,
		};

		void Clear()
		{
			using func_t = decltype(&ActorPackage::Clear);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::Clear };
			func(this);
		}

		void InitFromPackage(TESPackage* apPackage, TESObjectREFR* apTarget)
		{
			using func_t = decltype(&ActorPackage::InitFromPackage);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::InitFromPackage };
			func(this, apPackage, apTarget);
		}

		std::uint16_t GetSaveSize(std::uint32_t aiFlags)
		{
			using func_t = decltype(&ActorPackage::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::GetSaveSize };
			return func(this, aiFlags);
		}

		void SaveGame(std::uint32_t aiFlags)
		{
			using func_t = void (ActorPackage::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::SaveGame };
			func(this, aiFlags);
		}

		void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags)
		{
			using func_t = void (ActorPackage::*)(std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::LoadGame };
			func(this, aiFlags, aiCurrentFlags);
		}

		void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags)
		{
			using func_t = void (ActorPackage::*)(std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::InitLoadGame };
			func(this, aiFlags, aiOldFlags);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (ActorPackage::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ActorPackage::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ActorPackage::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::InitLoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		bool GetFlag(ActorPackage::ACTOR_PACKAGE_FLAG aeFlag)
		{
			using func_t = decltype(&ActorPackage::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::GetFlag };
			return func(this, aeFlag);
		}

		void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&ActorPackage::FinishLoadGame);
			static REL::Relocation<func_t> func{ Offsets::ActorPackage::FinishLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		TESPackage*       pPackage;                // 00
		ActorPackageData* pData;                   // 04
		TESObjectREFR*    pTarget;                 // 08
		std::int32_t      iCurrentProcedureIndex;  // 0C
		float             fPackageStartTime;       // 10
		std::uint32_t     iFlags;                  // 14
	};
}
