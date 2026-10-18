#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class BSStream;
	class NiControllerSequence;
	class TESAnimGroup;

	class KFModel
	{
	public:
		KFModel* ctor(char const* apFilename, BSStream* apStream)
		{
			using func_t = KFModel*(__thiscall*)(KFModel*, char const*, BSStream*);
			static REL::Relocation<func_t> func{ Offsets::KFModel::ctor };
			return func(this, apFilename, apStream);
		}

		void InitSequence(char const* apFilename)
		{
			using func_t = decltype(&KFModel::InitSequence);
			static REL::Relocation<func_t> func{ Offsets::KFModel::InitSequence };
			func(this, apFilename);
		}

		void DecManualRefCount()
		{
			using func_t = decltype(&KFModel::DecManualRefCount);
			static REL::Relocation<func_t> func{ Offsets::KFModel::DecManualRefCount };
			func(this);
		}

		std::int32_t GetRefCount() const
		{
			using func_t = decltype(&KFModel::GetRefCount);
			static REL::Relocation<func_t> func{ Offsets::KFModel::GetRefCount };
			return func(this);
		}

		void IncRefCount()
		{
			using func_t = decltype(&KFModel::IncRefCount);
			static REL::Relocation<func_t> func{ Offsets::KFModel::IncRefCount };
			func(this);
		}

		void DecRefCount()
		{
			using func_t = decltype(&KFModel::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::KFModel::DecRefCount };
			func(this);
		}

	public:
		// members
		char*                           pFilename;        // 00
		NiPointer<NiControllerSequence> spSequence;       // 04
		NiPointer<TESAnimGroup>         spAnimGroup;      // 08
		std::int32_t                    iRefCount;        // 0C
		std::int32_t                    iManualRefCount;  // 10
	};
}
