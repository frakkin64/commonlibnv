#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class Tile_Value;

	class AnimatingText
	{
	public:
		void SetTraits(Tile_Value* apStringTrait, Tile_Value* apVisTrait)
		{
			using func_t = decltype(&AnimatingText::SetTraits);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::SetTraits };
			func(this, apStringTrait, apVisTrait);
		}

		void Update()
		{
			using func_t = decltype(&AnimatingText::Update);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::Update };
			func(this);
		}

		bool GetDisplayMode() const
		{
			using func_t = decltype(&AnimatingText::GetDisplayMode);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::GetDisplayMode };
			return func(this);
		}

		bool GetFlashMode() const
		{
			using func_t = decltype(&AnimatingText::GetFlashMode);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::GetFlashMode };
			return func(this);
		}

		void ForceFinish()
		{
			using func_t = decltype(&AnimatingText::ForceFinish);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::ForceFinish };
			func(this);
		}

		AnimatingText* ctor()
		{
			using func_t = AnimatingText*(__thiscall*)(AnimatingText*);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(AnimatingText*);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::dtor };
			func(this);
		}

		AnimatingText* ctor(char const* apString)
		{
			using func_t = AnimatingText*(__thiscall*)(AnimatingText*, char const*);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::ctor_1 };
			return func(this, apString);
		}

		AnimatingText& operator_call(char const* apString)
		{
			using func_t = decltype(&AnimatingText::operator_call);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::operator_call };
			return func(this, apString);
		}

		void SetDisplayInterval(std::uint32_t aiInterval)
		{
			using func_t = decltype(&AnimatingText::SetDisplayInterval);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::SetDisplayInterval };
			func(this, aiInterval);
		}

	private:
		void Initialize()
		{
			using func_t = decltype(&AnimatingText::Initialize);
			static REL::Relocation<func_t> func{ Offsets::AnimatingText::Initialize };
			func(this);
		}

	public:
		// members
		BSStringT<char> strFullText;          // 00
		Tile_Value*     pStringTrait;         // 08
		Tile_Value*     pVisTrait;            // 0C
		std::uint32_t   dwDisplayInterval;    // 10
		std::uint32_t   dwFlashOnDuration;    // 14
		std::uint32_t   dwFlashOffDuration;   // 18
		std::uint32_t   dwNextDisplayUpdate;  // 1C
		std::uint32_t   dwNextFlashUpdate;    // 20
		char*           pBuffer;              // 24
		std::uint8_t    ucAnimationTypes;     // 28
		bool            bDisplayFinished;     // 29
		std::uint16_t   pad2A;                // 2A
	};
	static_assert(sizeof(AnimatingText) == 0x2C);
}
