#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPreloadable.h"
#include "RE/B/BSSimpleList.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSDebrisData;
	class NiPoint3;
	class TESFile;
	class TESObjectCELL;

	class BGSDebris :
		public TESForm,  // 00
		public BGSPreloadable  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDebris };
		static constexpr auto VTABLE{ VTABLE::BGSDebris };

		// override (TESForm)
		virtual ~BGSDebris() = default;                  // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BSSimpleList<BGSDebrisData*>* GetData()
		{
			using func_t = decltype(&BGSDebris::GetData);
			static REL::Relocation<func_t> func{ Offsets::BGSDebris::GetData };
			return func(this);
		}

		void SpawnDebris(TESObjectCELL* apCell, NiPoint3 const& arLocation, std::uint32_t aiNumParticles, float afScale)
		{
			using func_t = decltype(&BGSDebris::SpawnDebris);
			static REL::Relocation<func_t> func{ Offsets::BGSDebris::SpawnDebris };
			func(this, apCell, arLocation, aiNumParticles, afScale);
		}

	private:
		BGSDebrisData* AddDebrisData(char acPercentage, char const* apFileName, char acFlags)
		{
			using func_t = decltype(&BGSDebris::AddDebrisData);
			static REL::Relocation<func_t> func{ Offsets::BGSDebris::AddDebrisData };
			return func(this, acPercentage, apFileName, acFlags);
		}

	public:
		// members
		BSSimpleList<BGSDebrisData*> DataList;  // 1C
	};
	static_assert(sizeof(BGSDebris) == 0x24);
}
