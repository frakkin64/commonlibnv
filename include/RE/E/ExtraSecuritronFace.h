#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSStringT.h"

namespace RE
{
	class NiAVObject;

	class ExtraSecuritronFace :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSecuritronFace };
		static constexpr auto VTABLE{ VTABLE::ExtraSecuritronFace };

		// override (BSExtraData)
		virtual ~ExtraSecuritronFace() = default;  // 00

		BSStringT<char> GetPersonality()
		{
			using func_t = decltype(&ExtraSecuritronFace::GetPersonality);
			static REL::Relocation<func_t> func{ Offsets::ExtraSecuritronFace::GetPersonality };
			return func(this);
		}

		BSStringT<char> GetMood()
		{
			using func_t = decltype(&ExtraSecuritronFace::GetMood);
			static REL::Relocation<func_t> func{ Offsets::ExtraSecuritronFace::GetMood };
			return func(this);
		}

		ExtraSecuritronFace* ctor()
		{
			using func_t = ExtraSecuritronFace*(__thiscall*)(ExtraSecuritronFace*);
			static REL::Relocation<func_t> func{ Offsets::ExtraSecuritronFace::ctor };
			return func(this);
		}

		void ApplyFace(NiAVObject* apMesh)
		{
			using func_t = decltype(&ExtraSecuritronFace::ApplyFace);
			static REL::Relocation<func_t> func{ Offsets::ExtraSecuritronFace::ApplyFace };
			func(this, apMesh);
		}

		void SetPersonality(char* asPersonality)
		{
			using func_t = decltype(&ExtraSecuritronFace::SetPersonality);
			static REL::Relocation<func_t> func{ Offsets::ExtraSecuritronFace::SetPersonality };
			func(this, asPersonality);
		}

		void SetMood(char* asMood)
		{
			using func_t = decltype(&ExtraSecuritronFace::SetMood);
			static REL::Relocation<func_t> func{ Offsets::ExtraSecuritronFace::SetMood };
			func(this, asMood);
		}

	public:
		// members
		BSStringT<char> msPersonality;  // 0C
		BSStringT<char> msMood;         // 14
	};
	static_assert(sizeof(ExtraSecuritronFace) == 0x1C);
}
