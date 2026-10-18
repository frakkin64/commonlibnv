#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/T/TESObjectACTI.h"

namespace RE
{
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESFurniture :
		public TESObjectACTI  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESFurniture };
		static constexpr auto VTABLE{ VTABLE::TESFurniture };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kFURN_ID };

		// override (TESObjectACTI)
		virtual ~TESFurniture() = default;                                                                                                                               // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		TESFurniture* ctor()
		{
			using func_t = TESFurniture*(__thiscall*)(TESFurniture*);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::ctor };
			return func(this);
		}

		void VerifyMarkers()
		{
			using func_t = decltype(&TESFurniture::VerifyMarkers);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::VerifyMarkers };
			func(this);
		}

		bool CanSitOn()
		{
			using func_t = decltype(&TESFurniture::CanSitOn);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::CanSitOn };
			return func(this);
		}

		bool CanSleepOn()
		{
			using func_t = decltype(&TESFurniture::CanSleepOn);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::CanSleepOn };
			return func(this);
		}

		bool GetMarkerEnabled(std::uint32_t aiMarkerIndex)
		{
			using func_t = decltype(&TESFurniture::GetMarkerEnabled);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::GetMarkerEnabled };
			return func(this, aiMarkerIndex);
		}

		static bool IsSleepMarker(std::uint32_t aiNumber)
		{
			using func_t = decltype(&TESFurniture::IsSleepMarker);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::IsSleepMarker };
			return func(aiNumber);
		}

		static bool IsSitMarker(std::uint32_t aiNumber)
		{
			using func_t = decltype(&TESFurniture::IsSitMarker);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::IsSitMarker };
			return func(aiNumber);
		}

		NiPoint3 GetMarkerTargetOffset(std::uint32_t result, float aiIndex)
		{
			using func_t = decltype(&TESFurniture::GetMarkerTargetOffset);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::GetMarkerTargetOffset };
			return func(this, result, aiIndex);
		}

		float GetMarkerHeadingOffset(std::uint32_t aiIndex)
		{
			using func_t = decltype(&TESFurniture::GetMarkerHeadingOffset);
			static REL::Relocation<func_t> func{ Offsets::TESFurniture::GetMarkerHeadingOffset };
			return func(this, aiIndex);
		}

	public:
		// members
		std::int32_t iFurnFlags;  // 90
	};
	static_assert(sizeof(TESFurniture) == 0x94);
}
