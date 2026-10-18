#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingAvoidNode.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class TESObjectREFR;
	class TESObjectSTAT;

	class AvoidAreaStruct
	{
	public:
		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&AvoidAreaStruct::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::AvoidAreaStruct::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&AvoidAreaStruct::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::AvoidAreaStruct::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		PathingAvoidNode pAvoidNode;        // 00
		float            fTimeExpire;       // 24
		TESObjectSTAT*   pRadiationMarker;  // 28
		float            afRadiationLevel;  // 2C
		TESObjectREFR*   pRefObj;           // 30
	};
}
